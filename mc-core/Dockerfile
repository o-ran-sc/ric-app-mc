# -------------------------------------------------------------------------------
#    Copyright (c) 2018-2019 AT&T Intellectual Property.
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
# -------------------------------------------------------------------------------

ARG STAGE_DIR=/mc

FROM nexus3.o-ran-sc.org:10004/bldr-ubuntu16-c-go:2-u16.04-nng AS project-build
# Update & installation of linux packages
RUN apt-get update -y && \
        apt-get install -y curl && \
        apt-get install -y procps && \
        apt-get install -y python-pip

ARG STAGE_DIR

COPY mc ${STAGE_DIR}
WORKDIR ${STAGE_DIR}
RUN git clone https://github.com/protocolbuffers/protobuf.git
WORKDIR ${STAGE_DIR}/protobuf
RUN ./autogen.sh
RUN ./configure
RUN make clean
RUN make
RUN make install
RUN ldconfig
WORKDIR ${STAGE_DIR}
RUN git clone https://github.com/protobuf-c/protobuf-c.git
WORKDIR protobuf-c
RUN ./autogen.sh
ENV PKG_CONFIG_PATH /usr/local/lib/pkgconfig
RUN ./configure
RUN make
RUN make install
RUN ldconfig
RUN pip install protobuf
WORKDIR ${STAGE_DIR}
RUN git clone -b release/0.1.0 https://gerrit.o-ran-sc.org/r/com/gs-lite
WORKDIR ${STAGE_DIR}/gs-lite
COPY mc/cfg ${STAGE_DIR}/gs-lite/cfg
COPY mc/local_datasource ${STAGE_DIR}/gs-lite/src/lib/gscprts/local_datasource
COPY mc/local ${STAGE_DIR}/gs-lite/include/lfta/local
COPY mc/queries ${STAGE_DIR}/gs-lite/demo/queries
RUN ./build_and_install.sh
WORKDIR ${STAGE_DIR}/gs-lite/demo/queries
ENV GSLITE_ROOT ${STAGE_DIR}/gs-lite
RUN bash ${STAGE_DIR}/gs-lite/bin/buildit


# now install the binaries and libraries into smaller docker image
FROM ubuntu:16.04

ARG STAGE_DIR

COPY --from=project-build ${STAGE_DIR}/gs-lite/demo/queries /mc/gs-lite/demo/queries
COPY --from=project-build ${STAGE_DIR}/gs-lite/bin /mc/gs-lite/bin
COPY --from=project-build ${STAGE_DIR}/data_gen /mc/data_gen
COPY --from=project-build ${STAGE_DIR}/mc_deployment.json /mc/
COPY --from=project-build ${STAGE_DIR}/extract_params.py /mc/
COPY --from=project-build /usr/local/lib/libproto* /usr/local/lib/

RUN apt-get update && \
    apt-get install -y curl python python-pip && \
    apt-get clean

RUN ldconfig
RUN pip install protobuf

ENV XAPP_DESCRIPTOR_PATH /mc/mc_deployment.json
WORKDIR /mc/gs-lite/demo/queries
ENV GSLITE_ROOT /mc/gs-lite
CMD ["./runall"]
