# vim: ts=4 sw=4 noet:
#----------------------------------------------------------------------------------
#
#	Copyright (c) 2018-2019 AT&T Intellectual Property.
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#	   http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.
#
#---------------------------------------------------------------------------------

# this make file assuems that both NNG and RMR are installed and that the variables
# LD_LIBRARY_PATH, LIBRARY_PATH are set correctly.

# with the latest builder support for NNG was dropped, so we must build only SI95
# based applications; the _si suffix has been dropped
binaries = mc_listener
adjuncts = rdc_replay rdc_extract
testers = sender pipe_reader sender

test_progs = sender pipe_reader
lib_obj = mcl.o rdc.o
lib_h = mcl.h

coverage_opts = -ftest-coverage -fprofile-arcs

# make with no parms should build all production and adjunct/verification binaries
all: $(binaries) $(adjuncts) $(testers)

libmcl.a::	$(lib_obj) $(lib_h)
	ar -v -r libmcl.a $(lib_obj)

mc_listener: mc_listener.c libmcl.a
	gcc mc_listener.c -o mc_listener -L. -lmcl  -lrmr_si -lm -lpthread

# ---- adjunct tools -----------------------------------------------------------------
rdc_replay: rdc_replay.c libmcl.a
	gcc rdc_replay.c -o rdc_replay -L. -lmcl -lrmr_si -lpthread -lm

rdc_extract: rdc_extract.c libmcl.a
	gcc rdc_extract.c -o rdc_extract -L. -lmcl -lrmr_si -lpthread -lm

# ------- container verification programmes -------------------------------------------
sender : sender.c
	gcc sender.c -o sender  -lrmr_si -lm -lpthread

pipe_reader : pipe_reader.c libmcl.a
	gcc pipe_reader.c -o pipe_reader  -L. -lmcl -lrmr_si -lm -lpthread

# ---- housekeeping stuff -------------------------------------------------------------
# remove only intermediates
clean:
	rm -f *.o *.gcda *.gcno *.gcov

# remove anything that can be rebuilt
nuke: clean
	rm -f *mcl.a $(binaries) $(test_progs)

