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

/*
	Mnemonic:	mcl.h
	Abstract:	Header file for the mc listener library.
	Date:		22 August 2019
	Author:		E. Scott Daniels
	
*/

#ifndef mcl_h
#define mcl_h

#include <rmr/rmr.h>
#include <rmr/rmr_symtab.h>

// ------- public constants and structs -------------------------------------------------

#define MCL_LEN_SIZE 8		// number of bytes the length has in both short and extended header
#define MCL_DELIM_SIZE	4	// number of bytes in extended header delimiter
#define MCL_TSTAMP_SIZE	16	// number of bytes in extended header timestamp
#define MCL_EXHDR_SIZE	(MCL_DELIM_SIZE+MCL_LEN_SIZE+MCL_TSTAMP_SIZE)	// total size of extended header

#define MCL_DELIM		"@MCL"		// delimeter to synch msgs in fifo

#define MCL_TSTAMP_OFF	(MCL_DELIM_SIZE+MCL_LEN_SIZE)					// offsets in header
#define MCL_LEN_OFF		MCL_DELIM_SIZE

#define MCL_NOWAIT	0	// do not wait for RMR route table to arrive
#define MCL_WAIT	1	// block reader start until RMR route table is initialised

//------------ prototypes --------------------------------------------------------------
extern void mcl_fifo_fanout( void* ctx, int report, int long_hdrs );
extern rmr_mbuf_t* mcl_get_msg( void* vctx, rmr_mbuf_t* msg, int timeout );
extern	void* mcl_mk_context( char* dir );
extern int mcl_fifo_read1( void* vctx, int mtype, char* ubuf, int ublen, int long_hdr );
extern int mcl_fifo_tsread1( void* vctx, int mtype, char* ubuf, int ublen, int long_hdr, char* timestamp );
extern int mcl_set_sigh( );
extern int mcl_start_listening( void* vctx, char* port, int wait4ready );

#endif
