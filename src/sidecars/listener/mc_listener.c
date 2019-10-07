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
	Mnemonic:	mc_listener.c
	Abstract:	This application (management campaign listener) will listen for
				RMR based messages and write the payloads into FIFOs which
				correspond to the message type.
		
				Defaults:
					/var/lib/mc/listener  -- directory for FIFOs

				Command line options:
					-d <path>   FIFO directory (default is /tmp/mcl/fifos)
					-p <port> 	The port to set RMR listener on (default is 4560)
					-r <seconds>  The frequency that count reports are written to
									stderr. 0 == 0ff; default is 60.


				RMR based environment variables which might be needed:
					RMR_SEED_RT -- path to the static routing table
					RMR_RTG_SVC -- port to listen for RTG connections

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
	fprintf( stderr, "usage: %s [-d fifo-dir] [-e] [-p listen-port] [-q | -r report-freq]\n", argv0 );
	fprintf( stderr, "  -e  disable extended header in buffers written to FIFOs\n" );
	fprintf( stderr, "\n" );
	fprintf( stderr, "The following environment variables may be set to affect operation:\n" );
	fprintf( stderr, "  MCL_RDC_STAGE: the directory where raw data capture files are staged. (/tmp/rdc/stage)\n" );
	fprintf( stderr, "  MCL_RDC_FINAL: the directory where raw data capture files are placed for export. (/tmp/rdc/final)\n" );
	fprintf( stderr, "  MCL_RDC_SUFFIX: the suffix written on each raw data capture file; must include '.'. (.rdc)\n" );
	fprintf( stderr, "  MCL_RDC_SOURCE: a short string used as source identification in rdc file names.\n" );
	fprintf( stderr, "  MCL_RDC_FREQ: the amount of time (seconds) that raw capture files are rolled. (300)\n" );
	fprintf( stderr, "\nIf either final or staging directories are defined by environment vars, they MUST exist.\n" );
	fprintf( stderr, "\n" );
}

//------------------------------------------------------------------------------------------
int main( int argc,  char** argv ) {
	void*	ctx;							// the mc listener library context
	char*	dname = "/tmp/mcl/fifos";		// default directory where we open fifos
	char*	port = "4560";					// default rmr port
	char*	siphon_dir = "/tmp/mci/siphon";	// where siphon files are placed
	int		siphon = 0;						// percentage of messages to siphone off
	int		report_freq = 60;				// report stats every n seconds
	int		pidx = 1;						// parameter index
	int		error = 0;
	int		long_hdrs = 1;					// -e sets and causes extended headers to be written

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

			case 'p':
				if( pidx+1 < argc ) {
					port = strdup( argv[pidx+1] );
					pidx++;
				} else {
					bad_arg( argv[pidx] );
					error = 1;
				}
				break;

			case 'q':
				report_freq = 0;
				break;

			case 'r':
				if( pidx+1 < argc ) {
					report_freq = atoi( argv[pidx+1] );
					pidx++;
				} else {
					bad_arg( argv[pidx] );
					error = 1;
				}
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
		fprintf( stderr, "[FAIL] couldn't initialise the mc listener environment\n" );
		exit( 1 );
	}
	mcl_set_sigh();									// set signal handler(s)

	mcl_start_listening( ctx,  port, MCL_NOWAIT );		// start the listener, no waiting for rt since we don't send
	mcl_fifo_fanout( ctx, report_freq, long_hdrs );		// listen and fanout messages to fifo; report to stdout every ~2sec

	fprintf( stderr, "[INFO] mc listener is finished.\n" );
}

