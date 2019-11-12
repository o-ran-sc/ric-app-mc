# vim: ts=4 sw=4 noet:

### 2019 November 11th
### This file is deprecated and can be removed once the ci-managment repo has been 
### changed to use the docker files in the subdiretories
###

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

# CI to verify the MC application components
# Inherits C toolchain from buildpack-deps:stretch then adds cmake and better shell(s).

# It is assumed that this docker file is used with a build command run at the
# root level of the repo (directory containing the ci directory). E.g.
#	docker build -f ci/Dockerfile .

FROM buildpack-deps:stretch

RUN apt-get update && apt-get -q -y install cmake ksh

# stuff our repo things into a scratch area
RUN mkdir /playpen
ADD . /playpen


# add any unit test scripts that need to be driven, e.g.
# RUN ksh test/mcl_unit_test.ksh

#  This is a final/only script which might print useful things to the log and ALWAYS succeeds.
RUN ksh /playpen/ci/stats.ksh

# there is no cmd; the build/verification assumes that if the image is created
# successfully, e.g. none of the previous run commands fail, that the environment
# is successfully vetted.
