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
# Mnemonic:	verify.sh
# Abstract: Simple script to attempt to verify that the mc_listener is
#			capable of running. This will start a listener and a sender
#			and then will cat a few lines from one of the FIFOs.
#			This script is designed to run using the geneated runtime
#			image; in other words, it expects to find the binaries
#			in /playpen/bin.
#
# Date:		26 August 2019
# Author:	E. Scott Daniels
# ----------------------------------------------------------------------

# run sender at a 2 msg/sec rate (500000 musec delay)
# sender sends msg types 0-6 and the route table in /tmp
# will direct them to the listener. We also need to switch
# the RT listen port so there is no collision with the listen
# preocess.
#
function run_sender {
	echo "starting sender"
	RMR_SEED_RT=/tmp/local.rt RMR_RTG_SVC=9989 /playpen/bin/sender 43086 10000 >/tmp/sender.log 2>&1 &
	spid=$!
	sleep 10

	echo "stopping sender"
	kill -15 $spid
}

function run_listener {
	echo "starting listener"
	/playpen/bin/mc_listener $ext_hdr -r 1 -d $fifo_dir >/tmp/listen.log 2>&1 &
	lpid=$!

	sleep 15
	echo "stopping listener"
	kill -15 $lpid
}

# run a pipe reader for one message type
function run_pr {
	echo "starting pipe reader $1"
	/playpen/bin/pipe_reader $ext_hdr -m $1 -d $fifo_dir  >/tmp/pr.$1.log 2>&1 &
	#/playpen/bin/pipe_reader -m $1 -d $fifo_dir & # >/tmp/pr.$1.log 2>&1 
	typeset prpid=$!
	
	sleep 12
	echo "stopping pipe reader $1"
	kill -1 $prpid
}

# generate a dummy route table that the sender needs
function gen_rt {
	cat <<endKat >/tmp/local.rt
	newrt|start
	mse | 0 | -1 | localhost:4560	
	mse | 1 | -1 | localhost:4560	
	mse | 2 | -1 | localhost:4560	
	mse | 3 | -1 | localhost:4560	
	mse | 4 | -1 | localhost:4560	
	mse | 5 | -1 | localhost:4560	
	mse | 6 | -1 | localhost:4560	
	newrt|end
endKat
}

# ---- run everything ---------------------------------------------------

ext_hdr=""					# run with extended header enabled (-e turns extended off)
fifo_dir=/tmp/fifos
mkdir -p $fifo_dir			# redirect fifos so we don't depend on mount

gen_rt						# generate a dummy route table
run_listener &
sleep 4

for p in 0 1 2 3 4 5 6
do
	run_pr $p &
done
sleep 1
run_sender &

sleep 20			# long enough for all functions to finish w/o having to risk a wait hanging
echo "all functions stopped; looking at logs"

# ---------- validation -------------------------------------------------

errors=0

# logs should be > 0 in size
echo "----- logs ---------"
ls -al /tmp/*.log

# pipe reader log files 1-6 should have 'stand up and cheer' messages
# pipe reader log for MT 0 will likley be empty as sender sends only
# one of those and buffer not likely flushed. So, we only check 1-6
#
for l in 1 2 3 4 5 6
do
	if [[ ! -s /tmp/pr.$l.log ]]
	then
		echo "[FAIL] log $l was empty"
		(( errors++ ))
	else
		if ! grep -q -i "stand up and cheer" /tmp/pr.$l.log
		then
			echo "[FAIL] pipe reader log did not have any valid messages: /tmp/pr.$l.log"
			(( errors++ ))
		fi
	fi
done

if (( ! errors )) 
then
	echo "[OK]    All logs seem good"
fi

nfifos=$( ls /tmp/fifos/MT_* | wc -l )
if (( nfifos < 7 ))
then
	echo "didn't find enough fifos"
	ls -al /tmp/fifos/*
	(( errors++ ))
else
	echo "[OK]    Found expected fifos"
fi

if (( errors ))
then
	echo "[FAIL] $errors errors noticed"
else
	echo "[PASS]"
fi

