// vim: ts=4 sw=4 noet:
/*
--------------------------------------------------------------------------------
	Copyright (c) 2018-2019 AT&T Intellectual Property.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

	   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
--------------------------------------------------------------------------------
*/

/*
	Mnemonic:	rdc.c.
	Abstract:	This module contains library functions which implement the
				raw data collection (rdc) portion of the listener. The fanout
				function in the library will call these functions to capture
				raw messages, with a header, for later "replay" or other
				analysis.  Messages are captured as they are written to the
				FIFO, with a small header added:
					@RDC<mtype><len>

				Where <mtype> is the message type of the message received and
				<len> is the length of the data that was written to the FIFO.

				
	Date:		06 Oct 2019
	Author:		E. Scott Daniels
*/

#include <stdarg.h>
#include <errno.h> 
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <sys/stat.h>

#include "mcl.h"

/*
	A capture buffer. The listener writes FIFO output in two stages, thus
	we provide the ability to initialise a capture with the msg type and 
	the MRL header, then to write the payload using this saved data. The
	idea is to not require the caller to save the header.
*/
typedef struct {
	char	uheader[100];	// user header (max 100 bytes)
	int		uhlen;			// length of user header
	int		mtype;			// message type
} cap_buf_t;

typedef struct {
	int		flags;			// DFFL_* constatnts
	int		frequency;		// the frequency at which files are rolled
	int		fd;				// current open write file
	char*	sdir;			// staging directory
	char*	fdir;			// final directory
	char*	suffix;			// suffix for final file (must include . if needed)
	char*	dsuffix;		// suffix for done file
	char*	basename;		// base name of the file being written to
	char*	openname;		// full filename that is open for writing
	char*	source;			// added to output file names to differentiate the source
	time_t	next_roll;		// time we should roll the file
} rdc_ctx_t;

#define RDC_DELIM	"@RDC"		// delimeter used in our file

// -------------------------------------------------------------------------------------------

/*
	Copy and unlink old file is successful. The new file is opened, and left
	in, a 'write only' mode (0400) for the owner.  Caller is expected to 
	set the correct mode when desired.
*/
static int copy_unlink( char* old, char* new ) {
	char buf[8192];
	int	len;
	int	rfd;		// read/write file descriptors
	int	wfd;
	int start;
	int	state;
	int remain;		// number of bytes remaining to write

	
	errno = 0;
	if( (rfd = open( old, O_RDONLY )) < 0 ) {
		logit( LOG_ERR, "copy: open src for copy failed: %s: %s\n", old, strerror( errno ) );
		return -1;
	}

	if( (wfd = open( new, O_WRONLY | O_CREAT | O_TRUNC, 0400 )) < 0 ) {
		logit( LOG_ERR, "copy: open dest for copy failed: %s: %s\n", new, strerror( errno ) );
		return -1;
	}

	while( (len = read( rfd, buf, sizeof( buf ) )) > 0 ) {
		remain = len;
		start = 0;
		while( remain > 0 ) {
			errno = 0;
			if( (len = write( wfd, &buf[start], len )) != remain ) {		// short write
				if( errno != EINTR && errno != EAGAIN ) {
					logit( LOG_ERR, "copy: write failed: %s", strerror( errno ) );
					close( wfd );
					close( rfd );
					return -1;
				}
			}

			remain -= len;		// recompute what we need to write, and try again
			start += len;
		}
	}

	state = close( wfd );
	close( rfd );

	if( state < 0 ) {
		logit( LOG_ERR, "copy: close reported error: %s", strerror( errno ) );
	} else {
		if( unlink( old ) < 0 ) {
			logit( LOG_WARN, "copy: unlink failed for %s: %s", old, strerror( errno ) );
		}
	}

	return state < 0 ? -1 : 0;
}

/*
	Attempt to rename (move) the old file to the new file. If that fails with
	the error EXDEV (not on same device), then we will copy the file. All
	other errors returned by the rename() command are considered fatal and
	copy is not attempted.  Returns 0 on success, -1 with errno set on 
	failure. See man page for rename for possible errno values and meanings.
*/
static int mvocp( char* old, char* new ) {

	if( rename( old, new ) < 0 ) {
		if( errno != EXDEV ) {
			logit( LOG_ERR, "mvocp: cannot move %s to %s: %s", old, new, strerror( errno ) );
			return -1;
		}

		return copy_unlink( old, new );
	}
	
	return 0;
}

/*
	Opens a new file for writing. Returns the fd. The context fname field will
	in the context point to the basename (no suffix) on return.
*/
static int rdc_open( void* vctx ) {
	char	fname[2048];
	char	basename[2048];
	int		fd;
	time_t	ts;				// time stamp, rounded to previous frequency
	rdc_ctx_t* ctx;

	ctx = (rdc_ctx_t *) vctx;
	
	
	if( ctx == NULL ) {
		return -1;
	}

	ts = time( NULL );
	ts = ts - (ts % ctx->frequency);			// round to previous frequency
	ctx->next_roll = ts + ctx->frequency;		// set next time to roll the file

	snprintf( basename, sizeof( fname ), "MCLT%s_%ld", ctx->source, (long) ts );		// basename needed to build final file name at close
	snprintf( fname, sizeof( fname ), "%s/MCLT_%ld", ctx->sdir, (long) ts );
	fd = open( fname, O_WRONLY | O_CREAT, 0200 );		// open in w-- mode so that it should not be readable
	if( fd < 0 ) {
		logit( LOG_CRIT, "(rdf) cannot open data capture file: %s: %s", fname, strerror( errno ) );
		return fd;										// leave errno set by open attempt
	}

	lseek( fd, 0, SEEK_END );							// if file existed, continue appending to it
	logit( LOG_INFO, "(rdf) now writing to: %s", fname );
	ctx->openname = strdup( fname );
	ctx->basename = strdup( basename );
	ctx->fd = fd;

	return fd;
}

// ------------------ public things -------------------------------------------------------

/*
	A generic log function such that if pressed to write logs using the log
	library which yields completely unreadable json messages, we can comply
	yet still have readable messages when testing. If the message type LOG_STAT
	then the message is written to stdout rather than stderr.
*/
extern void logit( int priority, char *fmt, ... ) {
    va_list argp;
    char ubuf[4*1024+1];				// build user message here
    char* pstr = "UNK";					// priority string
	FILE*	dest = stderr;				// where to write the message

	switch( priority ) {
		case LOG_STAT:
			pstr = "STAT";
			dest = stdout;
			break;

		case LOG_CRIT:
			pstr = "CRI";
			break;

		case LOG_ERR:
			pstr = "ERR";
			break;

		case LOG_WARN:
			pstr = "WARN";
			break;

		default:
			pstr = "INFO";
			break;
	}

    va_start( argp, fmt );								// point at first variable arguement
    vsnprintf( ubuf, sizeof( ubuf ) -1, fmt, argp );	// build the user portion of the message
    va_end( argp );

    fprintf( dest, "%ld [%s] %s\n", time( NULL ), pstr, ubuf );
}


/*
	Initialise the raw data collection facility.  The two directories, staging and final, may be the 
	same, and if different they _should_ reside on the same filesystem such that a move
	(rename) operation is only the change in the directory and does not involve the copy
	of bytes.

	Either suffix may be a nil pointer. If the done suffix (dsuffix) is not nil, then
	we assume that once the file is moved from staging to final, we create an empty
	"done" file using the dsuffix.

	A pointer to the context is returned; nil on error with errno set to some useful
	(we hope) value.
*/
extern void* rdc_init( char* sdir, char* fdir, char* suffix, char* dsuffix ) {
	rdc_ctx_t*	ctx;
	char*		ep;			// pointer at environment var value

	ctx = (rdc_ctx_t *) malloc( sizeof( *ctx ) );
	if( ctx == NULL ) {
		errno = ENOMEM;
		return NULL;
	}
	memset( ctx, 0, sizeof( *ctx ) );

	if( sdir == NULL ) {
		if( fdir == NULL ) {
			errno = EINVAL;		// must have at least one of these
			free( ctx );
			return NULL;
		}

		ctx->sdir = strdup( fdir );
		ctx->fdir = strdup( fdir );
	} else {
		ctx->sdir = strdup( sdir );
		if( fdir == NULL ) {
			ctx->fdir = strdup( sdir );
		} else {
			ctx->fdir = strdup( fdir );
		}
		
	}

	if( suffix ) {
		ctx->suffix = strdup( suffix );
	}
	if( dsuffix ) {
		ctx->dsuffix = strdup( dsuffix );
	}

	if( (ep = getenv( "MCL_RDC_SOURCE")) != NULL ) {
		ctx->source = strdup( ep );
	} else {
		ctx->source = strdup( "" );
	}

	ctx->frequency = 300;			// default to 5 min roll
	ctx->fd = -1;

	return (void *) ctx;
}

/*
	Allow the file rotation frequency to be set to something other
	than the default.  A minimum of 10s is enforced, but there is 
	no maximum.
*/
extern void rdc_set_freq( void* vctx, int freq ) {
	rdc_ctx_t* ctx;

	ctx = (rdc_ctx_t *) vctx;
	
	if( ctx != NULL && freq > 10 ) {
		ctx->frequency = freq;
	}

	logit( LOG_INFO, "(rdc) file roll frequency set to %d seconds", ctx->frequency );
}

/*
	Close the currently open file and move it to it's final resting place in fdir.
	If the done suffix in the context is not nil, then we touch a done file which
	has the same basename with the done suffix; this is also placed into the final
	dir.
*/
extern void rdc_close( void* vctx ) {
	char	target[2048];
	char*	t_suffix;
	int		fd;
	rdc_ctx_t* ctx;

	ctx = (rdc_ctx_t *) vctx;
	if( ctx == NULL || ctx->fd < 0 ) {
		return;
	}

	close( ctx->fd );		// future -- check for error
	ctx->fd = -1;

	t_suffix =  ctx->suffix != NULL  ? ctx->suffix : "";
	snprintf( target, sizeof( target ), "%s/%s%s", ctx->fdir, ctx->basename, t_suffix );		// final target name
	if( mvocp( ctx->openname, target ) < 0 ) {
		logit( LOG_ERR, "(rdf) unable to move file '%s' to '%s': %s", ctx->openname, target, strerror( errno ) );
	} else {
		chmod( target, 0664 );
		logit( LOG_INFO, "capture file closed and moved to: %s", target );
		if( ctx->dsuffix != NULL ) {				// must also create a done file
			snprintf( target, sizeof( target ), "%s/%s%s", ctx->fdir, ctx->basename, ctx->dsuffix );
			if( (fd = open( target, O_CREAT, 0664 )) >= 0 ) {
				close( fd );
				logit( LOG_INFO, "created done file: %s", target );
			} else {
				logit( LOG_ERR, "unable to create done file: %s", target, strerror( errno ) );
			}
		}
	}

	free( ctx->basename );
	free( ctx->openname );
	ctx->basename = NULL;
	ctx->openname = NULL;
}

/*
	Writes the payload using the previously initialised capture buffer.
	If it's time to roll the file, or the file isn't opened, the needed housekeeping
	is done first.
*/
extern int rdc_write( void* vctx, void* vcb, char* payload, int len ) {
	cap_buf_t* cb;
	char	header[100];					// our header
	rdc_ctx_t* ctx;

	cb = (cap_buf_t *) vcb;
	ctx = (rdc_ctx_t *) vctx;
	if( ctx == NULL || cb == NULL) {
		errno = EINVAL;
		return -1;
	}

	if( time( NULL ) >= ctx->next_roll ) {
		rdc_close( ctx );					// close up the current one
	}

	if( ctx->fd < 0 ) {
		rdc_open( ctx );					// need a file, get it open
	}	

	snprintf( header, sizeof( header ), "@RDC%07d*%07d", cb->mtype, cb->uhlen + len );
	write( ctx->fd, header, 20 );
	write( ctx->fd, cb->uheader, cb->uhlen );
	write( ctx->fd, payload, len );

	return 0;		// future -- check and return error
}

/*
	Initialise a capture buffer; The caller can pass in an old cb and we will reuse it.
	We save the message type, and will use that and the user header length and payload
	length on write to create the complete RDC header.
*/
extern void* rdc_init_buf( int mtype, char* uheader, int uhlen, void* vcb ) { 
	cap_buf_t* cb;

	cb = (cap_buf_t *) vcb;
	if( cb == NULL ) {
		cb = (cap_buf_t *) malloc( sizeof( *cb ) );
		if( cb == NULL ) {
			errno = ENOMEM;
			return NULL;
		}
	}	

	cb->mtype = mtype;
	if(  uhlen > sizeof( cb->uheader ) ) {
		uhlen = sizeof( uheader );
	}
	memcpy( cb->uheader, uheader, uhlen );
	cb->uhlen = uhlen;

	return (void *) cb;
}

#ifdef SELF_TEST
/*
	Run some quick checks which require the directories in /tmp to exist, and some 
	manual verification on the part of the tester.
*/
int main( ) {
	void*	ctx;			// context
	void*	cb = NULL;		// capture buffere
	char*	uheader;
	char*	payload;
	int 	i;

	ctx = rdc_init( "/tmp/rdc/stage", "/tmp/rdc/final", ".rdc", NULL );			// does not create done files
	//ctx = rdc_init( "/tmp/rdc/stage", "/tmp/rdc/final", ".rdc", ".done" );	// will create a "done" file
	if( ctx == NULL ) {
		logit( LOG_CRIT, "<TEST> abort! rdc_init returned a nil pointer\n" );
		exit( 1 );
	}

	rdc_set_freq( ctx, 60 );

	logit( LOG_INFO, "<TEST> writing three messages" );
	for( i = 0; i < 3; i++ ) {
		uheader = "@MRC==len==*---timestamp---*";
		cb = rdc_init_buf( ctx, 220 + i, uheader, strlen( uheader ), cb );
		payload = "this is a test and just a test if it were not a test you'd be notified";
		rdc_write( ctx, cb, payload, strlen( payload ) +1 );

		sleep( 1 );
	}

	logit( LOG_INFO, "<TEST> sleeping 80s to force a file change" );
	sleep( 80 );
	logit( LOG_INFO, "<TEST> sleep finished, writing thirteen messages" );
	for( i = 0; i < 13; i++ ) {
		uheader = "@MRC==len==*---timestamp---*";
		cb = rdc_init_buf( ctx, 220 + i, uheader, strlen( uheader ), cb );
		payload = "this is a test and just a test if it were not a test you'd be notified";
		rdc_write( ctx, cb, payload, strlen( payload ) +1 );

		sleep( 1 );
	}

	rdc_close( ctx );			// force move of the current file before exit
}
#endif
