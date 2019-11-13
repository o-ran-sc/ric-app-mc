.. This work is licensed under a Creative Commons Attribution 4.0 International License.
.. SPDX-License-Identifier: CC-BY-4.0


RIC Measurement Campaign (MC) Overview
=======================================

MC xApp calculates a number of metrics and KPIs based on X2 messages formatted as protobufs as defined in https://gerrit.o-ran-sc.org/r/#/admin/projects/ric-plt/streaming-protobufs.

The metrics are reported periodically as VES events and include metrics such as number of dual connected UEs, duration of dual connections, and signal strength metrics. For a full list of supported metrics see the readme.

Internally, MC xApp uses the gs-lite stream processing engine (https://gerrit.o-ran-sc.org/r/#/admin/projects/com/gs-lite).

The protobufs are received as RMR messages from UEEC but if no such data producer is available, MC xApp can be run in a simulated mode where the protobuf content is generated locally by the UEEC simulator running in the same container.

