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
	Mnemonic:	mcl.c.
	Abstract:	The mc listener library content. All external functions
				should start with mcl_ and all stderr messages should have
				(mcl) as the first token following the severity indicator.
				
	Date:		22 August 2019
	Author:		E. Scott Daniels
*/

#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/stat.h>

#include <rmr/rmr.h>
#include <rmr/rmr_symtab.h>

#include "mcl.h"

#define READER 0
#define WRITER 1

#define TRUE	1
#define FALSE	0


/*
	Information about one file descriptor. This is pointed to by the hash
	such that the message type can be used as a key to look up the fifo's
	file descriptor.
*/
typedef struct {
	int	fd;					// open fdes
	int key;				// symtab key
	long long wcount;		// number of writes
	long long drops;		// number dropped

	long long wcount_rp;	// number of writes during last reporting period
	long long drops_rp;		// number dropped during last reporting period
} fifo_t;

/*
	Our conext.  Pointers to the read and write hash tables (both keyed on the message
	type), the message router (RMR) context, and other goodies.
*/
typedef struct {
	void*	mrc;				// the message router's context
	void*	wr_hash;			// symtable to look up pipe info based on mt for writing
	void*	rd_hash;			// we support reading from pipes, but need a different FD for that
	char*	fifo_dir;			// directory where we open fifos
	
} mcl_ctx_t;

// -------- private -------------------------------------------------------


/*
	Builds an extended header in the buffer provided, or allocates a new buffer if
	dest is nil. The header is of the form:
		<delim><len><timestamp>

	Timestamp is a single unsigned long long in ASCII; ms since epoch.
	If the current time is 2019/10/03 10:39:51.103 which is 1570113591.103
	the timestamp generated will be 1570113591103.
*/
static char* build_hdr( int len, char* dest, int dest_len ) {
	struct timespec ts;         // time just before call executed

	if( dest == NULL ) {
		dest_len = 48;
		dest = (char *) malloc( sizeof( char ) * dest_len );
	} else {
		if( dest_len < 28 ) {		// shouldn't happen, but take no chances
			memset( dest, 0, dest_len );
			return NULL;
		}
	}

	memset( dest, 0, dest_len );

	clock_gettime( CLOCK_REALTIME, &ts );
	sprintf( dest, "%s%07d", MCL_DELIM, len );
	sprintf( dest+12, "%ld%03ld", ts.tv_sec, ts.tv_nsec/1000000 );

	return dest;
}

/*	
	Build a file name and open. The io_direction is either READER or
	WRITER.  For a writer we must 'trick' the system into allowing us
	to open a pipe for writing in non-blocking mode so that we can 
	report on drops (messages we couldn't write because there was no
	reader).  The trick is to open a reader on the pipe so that when
	we open the writer there's a reader and the open won't fail. As
	soon as we have the writer open, we can close the junk reader.

	If the desired fifo does not exist, it is created.
*/
static int open_fifo( mcl_ctx_t* ctx, int mtype, int io_dir ) {
	char	wbuf[1024];
	int		fd;				// real file des
	int		jfd = -1;			// junk file des
	int		state;

	if( ctx == NULL || mtype < 0 ) {
		return -1;
	}

	snprintf( wbuf, sizeof( wbuf ), "%s/MT_%09d", ctx->fifo_dir, mtype );
	
	state = mkfifo( wbuf, 0660 );		// make the fifo; this will fail if it exists and that's ok
	if( state != 0 && errno != EEXIST ) {
		fprintf( stderr, "[ERR] (mcl) unable to create fifo: %s: %s\n", wbuf, strerror( errno ) );
		return -1;
	}

	if( io_dir == READER ) {
		fd = open( wbuf, O_RDONLY  );			// just open the reader
		if( fd < 0 ) {
			fprintf( stderr, "[ERR] (mcl) fifo open failed (ro): %s: %s\n", wbuf, strerror( errno ) );
		}
	} else {
		jfd = open( wbuf, O_RDWR  | O_NONBLOCK );			// must have a reader before we can open a non-blocking writer
		if( jfd < 0 ) {
			fprintf( stderr, "[ERR] (mcl) fifo open failed (rw): %s: %s\n", wbuf, strerror( errno ) );
		}
	
		fd = open( wbuf, O_WRONLY  | O_NONBLOCK );			// this will be our actual writer, in non-blocking mode
		if( fd < 0 ) {
			fprintf( stderr, "[ERR] (mcl) fifo open failed (wo): %s: %s\n", wbuf, strerror( errno ) );
		}

		close( jfd );			// should be safe to close this
	}


	return fd;
}

/*
	Given a message type, return the file des of the fifo that
	the payload should be written to.	 Returns the file des, or -1
	on error. When sussing out a read file descriptor this will
	block until there is a fifo for the message type which is
	open for reading.

	If fref is not nil, then a pointer to the fifo info block is returned
	allowing for direct update of counts after the write.
*/
static int suss_fifo( mcl_ctx_t* ctx, int mtype, int io_dir, fifo_t** fref ) {
	fifo_t* fifo;
	void*	hash;

	if( io_dir == READER ) {		// with an integer key, we nned two hash tables
		hash = ctx->rd_hash;
	} else {
		hash = ctx->wr_hash;
	}

	if( (fifo = (fifo_t *) rmr_sym_pull( hash, mtype )) == NULL ) {
		fifo = (fifo_t *) malloc( sizeof( *fifo ) );
		if( fifo == NULL ) {
			return -1;
		}

		memset( fifo, 0, sizeof( *fifo ) );
		fifo->key = mtype;
		fifo->fd = open_fifo( ctx, mtype, io_dir );
		rmr_sym_map( hash, mtype, fifo );
	}

	if( fref != NULL ) {
		*fref = fifo;
	}
	return fifo->fd;
}

/*
	Make marking counts easier in code
*/
static inline void chalk_error( fifo_t* fifo ) {
	if( fifo != NULL ) {
		fifo->drops++;
		fifo->drops_rp++;
	}
}

static inline void chalk_ok( fifo_t* fifo ) {
	if( fifo != NULL ) {
		fifo->wcount++;
		fifo->wcount_rp++;
	}
}

/*
	Callback function driven to traverse the symtab and generate the 
	counts for each fifo.
*/
static void wr_stats( void* st, void* entry, char const* name, void* thing, void* data ) {
	fifo_t*	fifo;
	int		report_period = 60;

	if( data ) {
		report_period = *((int *) data);
	}

	if( (fifo = (fifo_t *) thing) != NULL ) {
		fprintf( stdout, "[STAT] (mcl) mtype=%d total writes=%lld total drops=%lld; during last %ds writes=%lld drops=%lld\n", 
			fifo->key, fifo->wcount, fifo->drops, report_period, fifo->wcount_rp, fifo->drops_rp );

		fifo->wcount_rp = 0;		// reset the report counts
		fifo->drops_rp = 0;
	}
}

// ---------- public ------------------------------------------------------
/*
	Sets a signal handler for sigpipe so we don't crash if a reader closes the
	last reading fd on a pipe. We could do this automatically, but if the user
	programme needs to trap sigpipe too, this gives them the option not to have
	us interfere.
*/
extern int mcl_set_sigh( ) {
	signal( SIGPIPE, SIG_IGN );
}

/*
	"Opens" the interface to RMR such that messages sent to the application will
	be available via the rmr receive funcitons. This is NOT automatically called
	by the mk_context function as some applications will be using the mc library
	for non-RMR, fifo, chores.
*/
extern int mcl_start_listening( void* vctx,  char* port, int wait4ready ) {
	mcl_ctx_t*	ctx;
	int		announce = 0;

	if( (ctx = (mcl_ctx_t*) vctx) == NULL ) {
		return 0;
	}

	ctx->mrc = rmr_init( port, RMR_MAX_RCV_BYTES, RMRFL_NONE );	// start your engines!
	if( ctx->mrc == NULL ) {
		fprintf( stderr, "[CRIT]  unable to initialise RMr\n" );
		return 0;
	}

	while( wait4ready && ! rmr_ready( ctx->mrc ) ) {				// only senders need to wait
		if( announce <= 0 ) {
			fprintf( stderr, "[INFO] waiting for RMR to show ready\n" );
			announce = 10;
		} else {
			announce--;
		}

		sleep( 1 );
	}

	return 1;
}

/*
	Blocks until a message arives with a good return code or we timeout. Returns the 
	rmr message buffer. Timeout value epxected in seconds.
*/
extern rmr_mbuf_t* mcl_get_msg( void* vctx, rmr_mbuf_t* msg, int timeout ) {
	mcl_ctx_t*	ctx;

	if( (ctx = (mcl_ctx_t *) vctx) == NULL ) {
		return NULL;
	}

	if( ctx->mrc == NULL ) {
		fprintf( stderr, "bad context\n" );
		exit( 1 );
	}

	do {
		msg = rmr_torcv_msg( ctx->mrc, msg, timeout * 1000 );				// wait for next
	} while( msg == NULL || (msg->state != RMR_OK && msg->state != RMR_ERR_TIMEOUT) );

	return msg;
}

/*
	Create the context.
*/
extern	void* mcl_mk_context( char* dir ) {
	mcl_ctx_t*	ctx;

	if( (ctx = (mcl_ctx_t *) malloc( sizeof( *ctx ) )) != NULL ) {
		memset( ctx, 0, sizeof( *ctx ) );
		ctx->fifo_dir = strdup( dir );
		ctx->wr_hash = rmr_sym_alloc( 1001 );
		ctx->rd_hash = rmr_sym_alloc( 1001 );

		if( ctx->wr_hash == NULL  || ctx->rd_hash == NULL ) {
			fprintf( stderr, "[ERR] (mcl) unable to allocate hash table for fifo keys\n" );
			free( ctx );
			return NULL;
		}
	}

	return (void *) ctx;
}

/*
	Read the header. Best case we read the expected number of bytes, get all
	of them and find that they start with the delemiter.  Worst case
	We have to wait for all of the header, or need to synch at the next
	delimeter. We assume best case most likely and handle it as such.
*/
static void read_header( int fd, char* buf ) {
	int len;
	int need = MCL_EXHDR_SIZE;		// total needed
	int dneed;						// delimieter needed
	int	rlen;
	char*	rp;				// read position in buf

	len = read( fd, buf, need );
	if( len == need && strncmp( buf, MCL_DELIM, strlen( MCL_DELIM )) == 0 ) {	// best case, most likely
		return;
	}
	
	while( TRUE ) {
		if( len < strlen( MCL_DELIM ) ) { 		// must get at least enough bytes to check delim
			rp = buf + len;
			dneed = strlen( MCL_DELIM ) - len;
	
			while( dneed > 0 ) {
				len = read( fd, rp, dneed );
				dneed -= len;
				rp += len;
			}
		}

		if( strncmp( buf, MCL_DELIM, strlen( MCL_DELIM )) == 0 ) {	// have a good delimiter, just need to wait for bytes
			need = MCL_EXHDR_SIZE - strlen( MCL_DELIM );
			rp = buf + (MCL_EXHDR_SIZE - need);
	
			while( need > 0 ) {
				len = read( fd, rp, need );
				need -= len;
				rp += len;
			}

			return;
		}

		while( buf[0] != MCL_DELIM[0] )	{ 	// wait for a recognised start byte to be read (may cause an additional message drop
			len = read( fd, buf, 1 );		// because we ignore start byte that might be in the buffer)
		}

		need = MCL_EXHDR_SIZE - len;
	}
}


/*
	Read one record from the fifo that the message type maps to.
	Writes at max ublen bytes into the ubuf.

	If long_hdrs is true (!0), then we expect that the stream in the fifo
	has extended headers (<delim><len><time>), and will write the timestamp
	from the header into the buffer pointed to by timestamp. The buffer is
	assumed to be at least MCL_TSTAMP_SIZE bytes in length.

	Further, when extended headers are being used, this function will
	automatically resynchronise if it detects an issue.

	The function could look for the delimiter and automatically detect whether
	or not extended headers are in use, but if the stream is out of synch on the
	first read, this cannot be done, so the funciton requires that the caller
	know that the FIFO contains extended headers.  
*/
static int fifo_read1( void *vctx, int mtype, char* ubuf, int ublen, int long_hdrs, char* timestamp ) {
	int fd;
	int len;
	int	msg_len;
	int	got = 0;						// number of bytes we actually got
	int need;
	char wbuf[4096];
	mcl_ctx_t*	ctx;					// our context; mostly for the rmr context reference and symtable
	fifo_t*	fref = NULL;				// the fifo struct we found

	if( (ctx = (mcl_ctx_t*) vctx) == NULL ) {
		errno = EINVAL;
		return 0;
	}

	if( (fd = suss_fifo( ctx, mtype, READER, NULL ))  >= 0 )  {
		if( long_hdrs ) {
			read_header( fd, wbuf );
			msg_len = need = atoi( wbuf + MCL_LEN_OFF );				// read the length
			if( timestamp ) {
				strcpy( timestamp, wbuf + MCL_TSTAMP_OFF+1 );
			}
		} else {
			if( timestamp != NULL ) {						// won't be there, but ensure it's not garbage
				*timestamp = 0;
			}

			len = read( fd, wbuf, MCL_LEN_SIZE );			// we assume we will get all 8 as there isn't a way to sync the old stream
			msg_len = need = atoi( wbuf );
		}

		
		if( need > ublen ) {
			need = ublen;						// cannot give them more than they can take
		}
		while( need > 0 ) {
			len = read( fd, wbuf, need > sizeof( wbuf ) ? sizeof( wbuf ) : need );		
			memcpy( ubuf+got, wbuf, len );
			got += len;
			need -= len;
		}

		if( msg_len > got ) {					// we must ditch rest of this message
			need = msg_len = got;
			while( need > 0 ) {
				len = read( fd, wbuf, need > sizeof( wbuf ) ? sizeof( wbuf ) : need );		
				need -= len;
			}
		}

		return got;
	}

	errno = EBADFD;
	return 0;
}

/*
	Read one record from the fifo that the message type maps to.
	Writes at max ublen bytes into the ubuf. If extended headers are in use
	this function will ignore the timestamp.

	If long_hdrs is true (!0), then we expect that the stream in the fifo
	has extended headers (<delim><len><time>).
*/
extern int mcl_fifo_read1( void *vctx, int mtype, char* ubuf, int ublen, int long_hdrs ) {
	return fifo_read1( vctx, mtype, ubuf, ublen, long_hdrs, NULL );
}

/*
	Read a single message from the FIFO returning it in the caller's buffer. If extended
	headers are being used, and the caller supplied a timestamp buffer, the timestamp
	which was in the header will be returned in that buffer.  The return value is the number
	of bytes in the buffer; 0 indicates an error and errno should be set.	
*/
extern int mcl_fifo_tsread1( void *vctx, int mtype, char* ubuf, int ublen, int long_hdrs, char *timestamp ) {
	return fifo_read1( vctx, mtype, ubuf, ublen, long_hdrs, timestamp );
}


/*
	Will read messages and fan them out based on the message type. This should not
	return and if it does the caller should assume an error. 

	The output to each fifo is MCL_LEN_SIZE bytes with an ASCII, zero terminated, length
	string , followed by that number of 'raw' bytes. The raw bytes are the payload 
	exactly as received.

	The report parameter is the frequency, in seconds, for writing a short
	status report to stdout. If 0 then it's off.

	If long_hdr is true, then we geneate an extended header with a delimiter and
	timestamp.
*/
extern void mcl_fifo_fanout( void* vctx, int report, int long_hdr  ) {
	mcl_ctx_t*	ctx;					// our context; mostly for the rmr context reference and symtable
	fifo_t*		fifo;					// fifo to chalk counts on
	rmr_mbuf_t*	mbuf = NULL;			// received message buffer; recycled on each call
	char		wbuf[128];				// buffer to build len string in
	int			state;
	int			fd;						// file des to write to
	long long	total = 0;				// total messages received and written
	long long	total_drops = 0;		// total messages received and written
	long		count = 0;				// messages received and written during last reporting period
	long		errors = 0;				// unsuccessful payload writes
	long		drops;					// number of drops
	time_t		next_report = 0;		// we'll report every 2 seconds if report is true
	time_t		now;
	int			hwlen;					// write len for header

	if( (ctx = (mcl_ctx_t*) vctx) == NULL ) {
		fprintf( stderr, "[ERR] (mcl) invalid context given to fanout\n" );
		errno = EINVAL;
		return;
	}

	if( report < 0 ) {
		report = 0;
	}

	while( 1 ) {
		mbuf = mcl_get_msg( ctx, mbuf, report );			// wait up to report sec for msg (0 == block until message)

		if( mbuf != NULL && mbuf->state == RMR_OK && mbuf->len > 0  ) {
			fd = suss_fifo( ctx, mbuf->mtype, WRITER, &fifo );		// map the message type to an open fd
			if( fd >= 0 ) {
				if( long_hdr ) {
					build_hdr( mbuf->len, wbuf, sizeof( wbuf ) );
					hwlen = MCL_EXHDR_SIZE;
				} else {
					snprintf( wbuf, sizeof( wbuf ), "%07d", mbuf->len );			// size of payload CAUTION: 7d is MCL_LEN_SIZE-1
					hwlen = MCL_LEN_SIZE;
				}

				if( (state = write( fd, wbuf, hwlen )) != hwlen ) { 		// write exactly MCL_LEN_SIZE bytes from the buffer
					drops++;
					total_drops++;
					chalk_error( fifo );
				} else {
					if( write( fd, mbuf->payload, mbuf->len ) < mbuf->len ) {			// followed by the payload	
						errors++;
						chalk_error( fifo );
					} else {
						chalk_ok( fifo );
						count++;
						total++;
					}
				}
			}
		}

		if( report ) {
			if( (now = time( NULL ) ) > next_report ) {
    			rmr_sym_foreach_class( ctx->wr_hash, 0, wr_stats, &report );        // run endpoints in the active table
				fflush( stdout );

				fprintf( stdout, "[STAT] (mcl) total writes=%lld total drops=%lld; during last %ds writes=%ld drops=%ld errs=%ld errors\n", 
					total, total_drops, report, count, drops, errors );
				next_report = now + report;
				count = 0;
				drops = 0;

				fflush( stdout );
			}
		}
	}
}


