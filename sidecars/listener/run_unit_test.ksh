#!/usr/bin/env bash

#==================================================================================
#        Copyright (c) 2019 Nokia
#        Copyright (c) 2018-2019 AT&T Intellectual Property.
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.
#==================================================================================


#
#	Mnemonic:	run_unit_test.ksh
#	Abstract:	This drives unit testing setting up working directories
#				and such.
#
#	Date:		10 December 2019
#	Author:		E. Scott Daniels
# -------------------------------------------------------------------------

function setup_dirs {
	mkdir -p /tmp/fifos
	mkdir -p /tmp/mc_listener_test/final
	mkdir -p /tmp/mc_listener_test/stage

	mv_src=/tmp/mc_listener_test/mv_src		# source that will be renamed rather than copied
	mv_dest=/tmp/mc_listener_test/mv_dest
	ps -elf >$mv_src

	copy_src=/tmp/mc_listener_test/copy_src
	copy_dest=/tmp/mc_listener_test/copy_dest
	ps -elf >$copy_src

	src_md5=$( cat $copy_src | md5sum )		# use cat so that filename doesn't factor in to output
	rm -f $copy_dest
}

function purge_dirs {
	rm -fr /tmp/mc_listener_test
}


if ! make -B unit_test			# ensure that it's fresh
then
	echo "[FAIL] cannot make unit_test"
	exit 1
fi

if [[ $1 == "purge" ]]
then
	purge_dirs
	exit 0
fi

setup_dirs

if [[ $1 == "set"* ]]
then
	exit
fi

if ! unit_test >/tmp/PID$$.utlog 2>&1
then
	cat /tmp/PID$$.utlog
	rm -f /tmp/PID$$.*
	purge_dirs
	exit 1
fi

echo "[PASS] base unit tests all pass"
echo "[INFO] file/directory verification begins...."

# validate files that should have been created/copied

rc=0

ls -al /tmp/mc_listener_test/* >/tmp/PID$$.fdlog 2>&1

if [[ -e $copy_src ]]
then
	echo "[FAIL] copy source test should have been unlinked but was there!"
	rc=1
else 
	dest_md5=$( cat $copy_dest | md5sum )		# use cat so that filename doesn't factor in to output
	if [[ $dest_md5 != $src_md5 ]]
	then
		echo "[FAIL] md5 of copy test file didn't match soruce"
cat $dest_md5
echo "$dest_md5  $src_md5"
		rc=1
	fi
fi
purge_dirs

if (( rc > 0 ))
then
	cat /tmp/PID$$.fdlog
fi


show_coverage.ksh unit_test.c #>/dev/null 						# we don't care about raw numbers
echo "Coverage with discounting (raw values in parens)"
discount_chk.ksh $(ls *gcov|egrep -v "^test_|unit_test.c")


if (( rc > 0 ))
then
	echo "[FAIL] overall test fails"
else
	echo "[PASS] overall test passes"
fi

rm -f /tmp/PID$$.*
exit $rc
