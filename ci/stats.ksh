
# vim: ts=4 sw=4 noet:

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

# -------------------------------------------------------------------------------
#	Mnemonic:	stats.ksh
#	Abstract:	This script is run as the last vetting script during the CI
#				process to possibly provide some stats about the verification.
#				The script may be run as the only verification script during
#				initial development. The script MUST always finish successfully
#	Date:		24 August 2019	
# -------------------------------------------------------------------------------


echo "$(date) finished verification and/or build"
