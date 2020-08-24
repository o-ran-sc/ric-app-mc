#!/usr/bin/env bash

#==================================================================================
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
#				and such. This expects that RMR dev package(s) is/are
#				installed. Some CI envirpnments don't provide this, or
#				the ability to pre-install before running this test, so
#				we will force one to be there if we don't find it in /usr.
#
#	Date:		10 December 2019
#	Author:		E. Scott Daniels
# -------------------------------------------------------------------------

function abort_after {
	touch $running
	sleep ${1:-60}
	if [[ -e $running ]]
	then
		echo "abort: unit test running too long, killing ${2:-nojobgiven}"
		kill -9 ${2:-bad-pid}
	fi
}

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

# This is a hack! There seems not to be an easy way to have the LF
# environment add RMR (or other needed packages) for testing. If we don't
# find RMR in the /usr/local part of the filesystem, we'll force it into
# /tmp which doesn't require root.  We'll be smart and get the desired
# rmr version from the repo root juas as we _expected_ the CI environmnt
# woudl do (but seems not to).
#
function ensure_pkgs {
	if (( force_rmr_load )) || [[ -d /usr/local/include/rmr ]]
	then
		echo "[INFO] found RMR installed in /usr/local"
		return
	fi

	rv=$( grep "version:" ../../rmr-version.yaml | awk '{ print $NF; exit( 0 ) }' )
	rr=$( grep "repo:" ../../rmr-version.yaml | awk '{ print $NF; exit( 0 ) }' )
	if [[ -z $rv ]]
	then
		rv="4.2.1"			# some sane version if not found
	fi
	if [[ -z $rr ]]
	then
		rr="release"
	fi
	echo "[INFO] RMR seems not to be installed in /usr/local; pulling private copy: v=$rv"

	pkg_dir=/tmp/ut_pkg
	mkdir -p $pkg_dir

	(
		set -e
		opts="-nv --content-disposition"
		url_base="https://packagecloud.io/o-ran-sc/$rr/packages/debian/stretch"
		cd /tmp
		wget $opts ${url_base}/rmr_${rv}_amd64.deb/download.deb
		wget $opts ${url_base}/rmr-dev_${rv}_amd64.deb/download.deb

		for x in *rmr*deb
		do
			dpkg -x $x $pkg_dir
		done
	)
	if (( $? != 0 ))
	then
		echo "[FAIL] unable to install one or more RMR packages"
		exit 1
	fi

	LD_LIBRARY_PATH=$pkg_dir/usr/local/lib:$LD_LIBRARY_PATH
	LIBRARY_PATH=$pkg_dir/usr/local/lib:$LIBRARY_PATH
	export C_INCLUDE_PATH="$pkg_dir/usr/local/include:$C_INCLUDE_PATH"
}

# ------------------------------------------------------------------------------------------------

# these aren't set by default in some of the CI environments
#
export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
export LIBRARY_PATH=/usr/local/lib:$LIBRARY_PATH

running=/tmp/PID$$.running
force_rmr_load=0

while [[ $1 == -* ]]
do
	case $1 in
		-f)	force_rmr_load=1;;

		*)	echo "unrecognised option: $1"
			exit 1
			;;
	esac

	shift
done

if [[ $1 == "purge" ]]			# just purge
then
	purge_dirs
	exit 0
fi

ensure_pkgs						# ensure that we have RMR; some CI environments are lacking

if ! make -B unit_test			# ensure that it's fresh
then
	echo "[FAIL] cannot make unit_test"
	exit 1
fi
echo "unit test(s) successfully built"

setup_dirs

if [[ $1 == "set"* ]]			# setup only
then
	exit
fi

./unit_test >/tmp/PID$$.utlog 2>&1 &
pid=$!
abort_after 60 $pid &
wait $pid
#if ! unit_test >/tmp/PID$$.utlog 2>&1
if (( $? != 0 ))
then
	echo ">>>> wait popped"
	rm -f $running
	cat /tmp/PID$$.utlog
	rm -f /tmp/PID$$.*
	purge_dirs
	exit 1
fi
rm -f $running

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


show_coverage.ksh unit_test.c								# compute coverage and generate .gcov files
echo "Coverage with discounting (raw values in parens)"
./discount_chk.ksh $(ls *gcov|egrep -v "^test_|unit_test.c")


if (( rc > 0 ))
then
	echo "[FAIL] overall test fails"
else
	echo "[PASS] overall test passes"
	rm -f *test*.gcov
fi

rm -f /tmp/PID$$.*
exit $rc
