#!/usr/bin/env bash
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


# ----------------------------------------------------------------------
# Mnemonic:	run_replay.sh
# Abstract: Simple script to make starting the replay binary easier.
#			Defaults:
#				/var/lib/mc/listener  -- directory for fifos
#
#			The input file can be supplied with -f and if omitted then
#			standard intput is assumed. This should allow the following
#			when run in a docker container:
#				docker run --rm -i -v /tmp/replay_fifos:/var/lib/mc/listener run_replay.sh <data-file
#
# Date:		20 November 2019
# Author:	E. Scott Daniels
# ----------------------------------------------------------------------


fifo_dir=/var/lib/mc/listener
data=""								# stdin by default

while [[ $1 == -* ]]
do
	case $1 in 
		-f) data=$2; shift;;
		-d)	fifo_dir=$2; shift;;

		*)	echo "$1 is not a recognised option"
			echo "usage: $0 [-d fifo-dir] [-f data-file]"
			exit 1
			;;
	esac

	shift
done

if [[ -n $data ]]
then
	if [[ ! -r $data ]]
	then
		echo "abort: cannot find data file: $data"
		exit 1
	fi
fi

rdc_replay -d $fifo_dir $data

