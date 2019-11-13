.. This work is licensed under a Creative Commons Attribution 4.0 International License.
.. SPDX-License-Identifier: CC-BY-4.0


RIC Measurement Campaign (MC) supported KPIs
============================================

name: throughput_ue

description: throughput experienced by UE over a measurement interval. "Active" throughput is throughput while actively downloading, "average" averages bytes transfered over the measurement interval

- ULLONG TS
- LLONG e_RAB_ID
- LLONG UE_ID
- V_STR GNB_ID
- FLOAT measurementInterval
- LLONG active_throughput
- LLONG average_throughput
- LLONG min_throughput
- LLONG max_throughput


name: addreq_success_stats

description: statistics on the time to successfully make a DC connection

- V_STR GNB_ID
- ULLONG TS
- FLOAT measurementInterval
- FLOAT min_success_time
- FLOAT max_success_time
- FLOAT avg_success_time
- FLOAT pctl_05_success_time
- FLOAT pctl_95_success_time
- FLOAT stddev_success_time


name: addreq_pdf_nr_cell

description : histogram of neighboring cell RSRP, aggregated by cell id

- ULLONG TS
- FLOAT measurementInterval
- UINT CELL_ID
- INT cnt
- UINT rsrp_vbad
- UINT rsrp_bad
- UINT rsrp_medium
- UINT rsrp_good
- UINT rsrp_vgood


name: addreq_pdf_nr_gnb

description : histogram of neighboring cell RSRP, aggregated by GNB, as computed from addition request events.

- ULLONG TS
- FLOAT measurementInterval
- V_STR GNB_ID
- INT cnt
- UINT rsrp_vbad
- UINT rsrp_bad
- UINT rsrp_medium
- UINT rsrp_good
- UINT rsrp_vgood


name: addreq_stats_nr_cell

description : statistics about neighboring cell RSRP aggregated by cell id

- ULLONG TS
- FLOAT measurementInterval
- UINT CELL_ID
- INT cnt
- INT min_rsrp
- INT pctl_05_rsrp
- INT median_rsrp
- INT pctl_95_rsrp
- FLOAT stddev_rsrp
- INT max_rsrp


name: addreq_stats_nr_gnb

description : statistics about neighboring cell RSRP aggregated by GNB, as computed from addition request events.

- ULLONG TS
- FLOAT measurementInterval
- V_STR GNB_ID
- INT cnt
- INT min_rsrp
- INT pctl_05_rsrp
- INT median_rsrp
- INT pctl_95_rsrp
- FLOAT stddev_rsrp
- INT max_rsrp


name: erab_stats

description: number of admitted bearers and the distribution of their qCI

- ULLONG TS
- FLOAT measurementInterval
- INT total_erabs
- UINT qCI_1
- UINT qCI_2
- UINT qCI_3
- UINT qCI_4
- UINT qCI_5
- UINT qCI_6
- UINT qCI_7
- UINT qCI_8
- UINT qCI_9
- UINT qCI_other


name: mc_connected_cnt

description: Number of dual connected users

- ULLONG TS
- FLOAT measurementInterval
- INT count_connected_ue


name: mc_connection_stats

description : statistics about the length of dual connected sessions

- ULLONG TS
- FLOAT measurementInterval
- FLOAT min_connected_time
- FLOAT max_connected_time
- FLOAT avg_connected_time
- FLOAT pctl_05_connected_time
- FLOAT pctl_95_connected_time
- FLOAT stddev_connected_time


name: mc_connects_cnt

description: number of DC connection requests

- ULLONG TS
- FLOAT measurementInterval
- INT count_ue_connects


name: mc_disconnects_cnt

description: number of DC connection releases

- ULLONG TS
- FLOAT measurementInterval
- INT count_ue_disconnects


name: mc_unique_ue_cnt

description: Number of distinct UEs making a DC request or release

- ULLONG TS
- FLOAT measurementInterval
- INT count_unique_ue


name: mod_req_failure_distribution

description: distribution of causes of a modification requet failure

- ULLONG TS
- FLOAT measurementInterval
- INT cnt
- UINT count_protobuf_unspecified
- UINT count_t310_Expiry
- UINT count_randomAccessProblem
- UINT count_rlc_MaxNumRetx
- UINT count_synchReconfigFailure_SCG
- UINT count_scg_reconfigFailure
- UINT count_srb3_IntegrityFailure


name: reconfig_status_success_rate

description: fraction of DC connect requests which are successful

- V_STR GNB_ID
- ULLONG TS
- FLOAT measurementInterval
- INT total_reconfiguration_requests
- UINT successful_reconfiguration_requests
- FLOAT success_rate


name: reconfig_status_reject_cause

description: distribution of causes for DC rejection

- V_STR gnb_id
- ULLONG TB
- INT total_reconfig_reject
- UINT count_radio_network
- UINT count_transport
- UINT count_protocol
- UINT count_misc


name: mod_status_refuse_cause

description: distribution of causes for a sgnb modification refusal

- V_STR GNB_ID
- ULLONG TS
- FLOAT measurementInterval
- INT total_reconfig_refuse
- UINT count_radio_network
- UINT count_transport
- UINT count_protocol
- UINT count_misc


name: release_cause

description: distribution of the causes of a DC release

- V_STR GNB_ID
- ULLONG TS
- FLOAT measurementInterval
- INT total_reconfig_refuse
- UINT count_radio_network
- UINT count_transport
- UINT count_protocol
- UINT count_misc


name: release_req_success_stats

description: statistics on the time to delease a DC connection

- V_STR GNB_ID
- ULLONG TS
- FLOAT measurementInterval
- FLOAT min_success_time
- FLOAT max_success_time
- FLOAT avg_success_time
- FLOAT pctl_05_success_time
- FLOAT pctl_95_success_time
- FLOAT stddev_success_time


name: rrcx_pdf_neigh_cell_csi

description: distribution of the beam csi rsrp of neighboring cells, aggregated by cell id, computed from rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- UINT CELL_ID
- INT cnt
- UINT rsrp_vbad
- UINT rsrp_bad
- UINT rsrp_medium
- UINT rsrp_good
- UINT rsrp_vgood


name: rrcx_pdf_neigh_gnb_csi

description: distribution of the beam csi rsrp of neighboring cells, aggregated by gNB, computed from rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- V_STR GNB_ID
- INT cnt
- UINT rsrp_vbad
- UINT rsrp_bad
- UINT rsrp_medium
- UINT rsrp_good
- UINT rsrp_vgood


name: rrcx_pdf_neigh_cell_ssb

description: distribution of the beam ssb rsrp of neighboring cells, aggregated by cell id, computed from rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- UINT CELL_ID
- INT cnt
- UINT rsrp_vbad
- UINT rsrp_bad
- UINT rsrp_medium
- UINT rsrp_good
- UINT rsrp_vgood


name: rrcx_pdf_neigh_gnb_ssb

description: distribution of the beam ssb rsrp of neighboring cells, aggregated by gNB, computed from rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- V_STR GNB_ID
- INT cnt
- UINT rsrp_vbad
- UINT rsrp_bad
- UINT rsrp_medium
- UINT rsrp_good
- UINT rsrp_vgood


name: rrcx_pdf_serv_cell

description: distribution of the  ssb rsrp of serving cell aggregated by cell id, computed from rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- UINT CELL_ID
- INT cnt
- UINT rsrp_vbad
- UINT rsrp_bad
- UINT rsrp_medium
- UINT rsrp_good
- UINT rsrp_vgood


name: rrcx_pdf_neighbor_cell

description: distribution of the  ssb rsrp of neighbor cells aggregated by cell id, computed from rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- UINT CELL_ID
- INT cnt
- UINT rsrp_vbad
- UINT rsrp_bad
- UINT rsrp_medium
- UINT rsrp_good
- UINT rsrp_vgood


name: rrcx_pdf_serv_gnb

description: distribution of the  ssb rsrp of serving cell aggregated by gnb, computed from rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- V_STR GNB_ID
- INT cnt
- UINT rsrp_vbad
- UINT rsrp_bad
- UINT rsrp_medium
- UINT rsrp_good
- UINT rsrp_vgood


name: rrcx_pdf_neighbor_gnb

description: distribution of the  ssb rsrp of serving cell aggregated by cell id, computed from rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- V_STR GNB_ID
- INT cnt
- UINT rsrp_vbad
- UINT rsrp_bad
- UINT rsrp_medium
- UINT rsrp_good
- UINT rsrp_vgood


name: rrcx_stats_neigh_cell

description: statistics on ssb RSRP on the beams of nrighboring cells, aggregated by cell ID, computed using rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- UINT CELL_ID
- INT cnt
- INT min_rsrp
- INT pctl_05_rsrp
- INT median_rsrp
- INT pctl_95_rsrp
- FLOAT stddev_rsrp
- INT max_rsrp


name: rrcx_stats_neigh_gnb

description: statistics on ssb RSRP on the beams of nrighboring cells, aggregated by gNB, computed using rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- V_STR GNB_ID
- INT cnt
- INT min_rsrp
- INT pctl_05_rsrp
- INT median_rsrp
- INT pctl_95_rsrp
- FLOAT stddev_rsrp
- INT max_rsrp


name: rrcx_stats_serv_cell

description: statistics on the ssb rsrp of the serving cell, aggregated by cell id, computed using rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- UINT CELL_ID
- INT cnt
- INT min_rsrp
- INT pctl_05_rsrp
- INT median_rsrp
- INT pctl_95_rsrp
- FLOAT stddev_rsrp
- INT max_rsrp


name: rrcx_stats_neighbor_cell

description: statistics on the ssb rsrp of the neighbor cells, aggregated by cell id, computed using rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- UINT CELL_ID
- INT cnt
- INT min_rsrp
- INT pctl_05_rsrp
- INT median_rsrp
- INT pctl_95_rsrp
- FLOAT stddev_rsrp
- INT max_rsrp


name: rrcx_stats_serv_gnb

description: statistics on the ssb srp of the serving cell, aggregated by gNB, computed using rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- V_STR GNB_ID
- INT cnt
- INT min_rsrp
- INT pctl_05_rsrp
- INT median_rsrp
- INT pctl_95_rsrp
- FLOAT stddev_rsrp
- INT max_rsrp


name: rrcx_stats_neighbor_gnb

description: statistics on the ssb rsrp of the neighbor cells, aggregated by gNB, computed using rrc transfer

- ULLONG TS
- FLOAT measurementInterval
- V_STR GNB_ID
- INT cnt
- INT min_rsrp
- INT pctl_05_rsrp
- INT median_rsrp
- INT pctl_95_rsrp
- FLOAT stddev_rsrp
- INT max_rsrp


name: throughput_rollup

description: statistics on the per-UE throughput

- ULLONG TS
- LLONG e_RAB_ID
- V_STR GNB_ID
- FLOAT measurementInterval
- INT count_ues
- UINT average_throughput_percentile_05
- UINT average_throughput_percentile_50
- FLOAT average_average_throughput
- UINT average_throughput_percentile_95
- UINT active_throughput_percentile_05
- UINT active_throughput_percentile_50
- FLOAT average_active_throughput
- UINT active_throughput_percentile_95


name: throughput_gnb

description: throughput experienced by a GNB over a measurement interval. "Active" throughput is throughput while actively downloading, "average" averages bytes transfered over the measurement interval

- ULLONG TS
- LLONG e_RAB_ID
- V_STR GNB_ID
- FLOAT measurementInterval
- LLONG active_throughput
- LLONG average_throughput
- LLONG min_throughput
- LLONG max_throughput
- UINT extr_quant_hfta0_fcn_quant_udaf_hfta0
- UINT extr_quant_hfta0_fcn_quant_udaf_hfta01



