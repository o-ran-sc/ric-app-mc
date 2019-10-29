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
	Mnemonic:	unit_test.c
	Abstract:	Basic unit tests for the mc listener.
	Date:		22 August 2019
	Author: 	E. Scott Daniels
*/

// this/these are what we are testing; include them directly
#include "mcl.c"

/*
	Parms:	[fifo-dir-name]
*/
int main( int argc,  char** argv ) {
	void*	ctx;
	int		errors;
	char*	dname = "/tmp/fifos";
	char*	port = "4560";
	int		fd;
	int		fd2;

	if( argc > 1 ) {
		dname = argv[1];
	}
	
	ctx = mcl_mk_context( dname );
	if( ctx == NULL ) {
		fprintf( stderr, "[FAIL] couldn't make context" );
		exit( 1 );
	}

	mcl_set_sigh();			// prevent colobber from broken pipe

	fd = suss_fifo( ctx, 101, 1 );				// should open the file for writing and return the fdes
	if( fd < 0 ) {
		fprintf( stderr, "[FAIL] suss_fifo did not return a valid fd\n" );
		errors++;
	}

	fd2= suss_fifo( ctx, 101, 0 );				// should open the file file for reading and return a different fd
	if( fd < 0 ) {
		fprintf( stderr, "[FAIL] suss_fifo did not return a valid fd\n" );
		errors++;
	}
	if( fd == fd2 ) {
		fprintf( stderr, "[FAIL] reading and writing fifo file descriptors expected to differ; both were %d\n", fd );
		errors++;
	}

	mcl_start_listening( ctx, port, 0 );			// start the listener, no waiting for rt since we don't send

	if( ! errors ) {
		fprintf( stderr, "[PASS] all tests look peachy\n" );
	}

	return errors != 0;
}

