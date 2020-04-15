# vim: ts=4 sw=4 noet:
#==================================================================================
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
#==================================================================================


#	Mnemonic:	Dockerfile
#	Abstract:	Build file which creaes a runtime image for the listener. 
#				Building should be as simple as:
#
#					docker build -f sidecars/listener/Dockerfile -t mc_listener:xx.xx .
#
#				Running the image in a container:
#					The fifo output directory needs to be mounted to the container
#					e.g.  -v /exports/mcl/fifos:/tmp/mcl/fifos.  The internal
#					directory can be supplied on the command line using -d path, but
#					should not be needed.
#
#					The RMR listen port must be properly exposed to the container. The
#					internal default is 4560, and can be changed with the -p port option
#					on the command line (needed if running from docker-compose). Typical
#					exposure might be  -p <host-port>:4560  on the docker run command.
#
#					The MC listener application does NOT need route table updates and thus
#					there is NO need to expose the route table generator port on this
#					container.
#
#	Date:		22 August 2019
#	Author:		E. Scott Daniels


FROM nexus3.o-ran-sc.org:10004/bldr-ubuntu18-c-go:4-u18.04-nng as buildenv
RUN mkdir /playpen

RUN apt-get update && apt-get install -y cmake gcc make git g++ wget

WORKDIR /playpen
# Install RMr (runtime and dev) from debian package cached on packagecloud.io
ARG RMR_VER=3.7.4

RUN wget -nv --content-disposition https://packagecloud.io/o-ran-sc/staging/packages/debian/stretch/rmr_${RMR_VER}_amd64.deb/download.deb
RUN wget -nv --content-disposition https://packagecloud.io/o-ran-sc/staging/packages/debian/stretch/rmr-dev_${RMR_VER}_amd64.deb/download.deb
RUN dpkg -i rmr_${RMR_VER}_amd64.deb
RUN dpkg -i rmr-dev_${RMR_VER}_amd64.deb

RUN mkdir /playpen/bin /playpen/src
ARG SRC=.
COPY ${SRC}/*.ksh ${SRC}/Makefile ${SRC}/*.h ${SRC}/*.c /playpen/src/
COPY ${SRC}/verify_replay.sh ${SRC}/verify.sh /playpen/src/

# Build all binaries; verify scripts expect them to be in bin, so we must copy too
#
ENV LD_LIBRARY_PATH=/usr/local/lib64:/usr/local/lib
ENV C_INCLUDE_PATH=/usr/local/include
RUN cd /playpen/src/; make -B all; ls -al mc_listener; cp mc_listener sender pipe_reader rdc_replay rdc_extract /playpen/bin/

# Run unit tests. If they don't pass the build fails here. Tests can be run from src, but expect binaries in bin
# so that they can be run in the final image as well.
#
ENV PATH /playpen/bin:/playpen/src:$PATH
RUN cd /playpen/src/; ./run_unit_test.ksh
RUN /playpen/src/verify.sh; /playpen/src/verify_replay.sh


# -----  final, smaller image ----------------------------------
FROM ubuntu:18.04

# bash doesn't cut it for run_replay so grab a real shell and clean up as much as we can
RUN apt-get update; apt-get install -y ksh
RUN rm -fr /var/lib/apt/lists 

# must have rmr runtime to get health check etc
COPY --from=buildenv /playpen/rmr_*.deb /tmp/
RUN dpkg -i /tmp/rmr_*_amd64.deb

# obtusely this uses the previous value
ARG SRC

RUN mkdir -p /playpen/bin
COPY --from=buildenv /usr/local/lib/* /usr/local/lib/
COPY --from=buildenv /playpen/src/mc_listener /playpen/src/sender /playpen/src/pipe_reader /playpen/src/rdc_replay /playpen/src/rdc_extract /playpen/bin/
COPY ${SRC}/verify_replay.sh ${SRC}/verify.sh ${SRC}/run_replay.sh ${SRC}/help /playpen/bin/

ENV PATH=/playpen/bin:$PATH
ENV LD_LIBRARY_PATH=/usr/local/lib64:/usr/local/lib
ENV C_INCLUDE_PATH=/usr/local/include

CMD [ "/playpen/bin/mc_listener" ]
