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
	Mnemonic:	pipe_reader.c
	Abstract:	Read a single pipe which was associated with a message type.  This
				programme is primarily for verification or example of how to use the
				read1() function in the mc-listener library.

	Date:		22 August 2019
	Author:		E. Scott Daniels
*/

#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


#include "mcl.h"

//---- support -----------------------------------------------------------------------------

static void bad_arg( char* what ) {
	fprintf( stderr, "[ERR] option is unrecognised or isn't followed by meaningful data: %s\n", what );
}

static void usage( char* argv0 ) {
	fprintf( stderr, "usage: %s [-d fifo-dir] [-e] [-m msg-type] [-s]\n", argv0 );
	fprintf( stderr, "   -d  dir (default is /tmp/mcl/fifos)\n" );
	fprintf( stderr, "   -e  disable extended headers expectation in FIFO data\n" );
	fprintf( stderr, "   -m  msg-type (default is 0)\n" );
	fprintf( stderr, "   -s  stats only mode\n" );
}

//------------------------------------------------------------------------------------------
int main( int argc,  char** argv ) {
	void*	ctx;							// the mc listener library context
	char*	dname = "/tmp/mcl/fifos";		// default directory where we open fifos
	int		pidx = 1;						// parameter index
	int		error = 0;
	int		len;
	int		mtype = 0;
	char	buf[4096];
	int		flush_often = 0;
	int		long_hdrs = 1;					// if -e is on command line, we expect long headers
	int		stats_only = 0;
	char	timestamp[MCL_TSTAMP_SIZE];		// we'll get the timestamp from this
	long	count = 0;
	int		blabber = 0;

	while( pidx < argc && argv[pidx][0] == '-' ) {			// simple argument parsing (-x  or -x value)
		switch( argv[pidx][1] ) {
			case 'd':
				if( pidx+1 < argc ) {
					dname = strdup( argv[pidx+1] );
					pidx++;	
				} else {
					bad_arg( argv[pidx] ); 
					error = 1;
				}	
				break;

			case 'e':
				long_hdrs = 0;
				break;

			case 'f':
				flush_often = 1;
				break;

			case 'm':
				if( pidx+1 < argc ) {
					mtype = atoi( argv[pidx+1] );
					pidx++;	
				} else {
					bad_arg( argv[pidx] ); 
					error = 1;
				}	
				break;

			case 's':
				stats_only = 1;
				break;

			case 'h':
			case '?':
				usage( argv[0] );
				exit( 0 );
				break;

			default:
				bad_arg( argv[pidx] );
				error = 1;
				break;
		}

		pidx++;
	}

	if( error ) {
		usage( argv[0] );
		exit( 1 );
	}
	
	ctx = mcl_mk_context( dname );			// initialise the library context
	if( ctx == NULL ) {
		fprintf( stderr, "[FAIL] couldn't initialise the mc listener library" );
		exit( 1 );
	}

	while( 1 ) {
		len = mcl_fifo_tsread1( ctx, mtype, buf, sizeof( buf ) -1, long_hdrs, timestamp );
		if( len > 0 ) {
			if( stats_only ) {
				if( time( NULL ) > blabber ) {
					fprintf( stdout, "[%d] %ld messages received\n", mtype, count );
					blabber = time( NULL ) + 2;
				}
			} else {
				buf[len] = 0;
				fprintf( stdout, "[%d] ts=%s count=%ld len=%d  msg=%s\n",  mtype, timestamp,  count, len, buf );
				if( flush_often ) {
					fflush( stdout );
				}
			}

			count++;
		}
	}

	fprintf( stderr, "[INFO] mc listener is finished.\n" );
}

