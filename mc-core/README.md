GS-Lite based Measurement Campaign xApp

Standards used in the VES events:
event/commonEventHeader

TS is always a timestamp in seconds, and refers to the end of the measurement interval

UE_ID always refers to a UE ID.

Generally, fields which identify the thing being measured are in uppercase, metrics are in lower case.

a metric starting with count is a count, min is a minimum, max is a maximum, avg is an average, hist is a histogram bucket.

the field measurementInterval is the measurement window size, in seconds. If this field is present, it now gets copied to the event / measurementFields / measurementInterval json field.

reportingEntityName indicates the xApp producing the metric - expected to be unique

eventType indicates the type of the event - expected to be unique for events from a specific ReportingEntityName


VES events supported:
 

name : addreq_pdf_nr_gnb
description : histogram of neighboring cell RSRP, aggregated by GNB
Fields:
	($window*(tb+1))/1000 as TS, 
	$window/1000.0 as measurementInterval,
	gnb_id as GNB_ID,
	count(*) as cnt,
	sum(GEQ(rsrp, 0)*LEQ(rsrp,21)) as rsrp_vbad,
	sum(GEQ(rsrp,22)*LEQ(rsrp,36)) as rsrp_bad,
	sum(GEQ(rsrp,37)*LEQ(rsrp,51)) as rsrp_medium,
	sum(GEQ(rsrp,52)*LEQ(rsrp,66)) as rsrp_good,
	sum(GEQ(rsrp,67)*LEQ(rsrp,127)) as rsrp_vgood

MRSUB output: reportingEntityName, eventType, GNB_ID, rsrp_vbad, rsrp_bad, rsrp_medium, rsrp_good, rsrp_vgood, TS  

name: addreq_stats_nr_gnb
description : statistics about neighboring cell RSRP aggregated by GNB
Fields:
	($window*(tb+1))/1000 as TS, 
	$window/1000.0 as measurementInterval,
	gnb_id as GNB_ID,
	count(*) as cnt,
	min(rsrp-157) as min_rsrp,
	quantile_of(rsrp-157, .05) as pctl_05_rsrp,
	median_of(rsrp-157) as median_rsrp,
	quantile_of(rsrp-157, .95) as pctl_95_rsrp,
	sqrt(
		sum(FLOAT(rsrp-157)*FLOAT(rsrp-157)) - sum(FLOAT(rsrp-157))*sum(FLOAT(rsrp-157))/count(*)
	) / count(*) as stddev_rsrp,
        INT(max(rsrp))-INT(157) as max_rsrp

MRSUB output: reportingEntityName, eventType, GNB_ID, min_rsrp, max_rsrp, pctl_05_rsrp, median_rsrp, pctl_95_rsrp, stddev_rsrp, TS

name: mc_connected_cnt
description: Number of dual connected users
Fields:
	($window*(TB+1))/1000 as TS, 
      	$window/1000.0 as measurementInterval, 
      	COUNT(*) as count_connected_ue

MRSUB output: reportingEntityName, eventType, count_connected_ue, TS

name: mc_connection_stats
description : statistics about the length of dual connected sessions
Fields:
	$window*(TB+1))/1000 as TS, 
        $window/1000.0 as measurementInterval, 
        MIN(connected_time)/1000.0 as min_connected_time,
        MAX(connected_time)/1000.0 as max_connected_time,
        AVG(connected_time)/1000.0 as avg_connected_time,
	quantile_of(connected_time, .05)/1000.0 as pctl_05_connected_time,
	quantile_of(connected_time, .95)/1000.0 as pctl_95_connected_time,
	sqrt(
		sum((connected_time/1000.0)*(connected_time/1000.0)) - sum(connected_time/1000.0)*sum(connected_time/1000.0)/count(*)
	) / count(*) as stddev_connected_time

MRSUB output: reportingEntityName, eventType, min_connected_time, max_connected_time, avg_connected_time, stddev_connected_time, pctl_05_connected_time, pctl_95_connected_time, TS

name: reconfig_status_success_rate
description: fraction of DC connect requests which are successful
Fields:
	gnb_id as GNB_ID,
	($window*(TB+1))/1000 as TS, 
	$window/1000.0 as measurementInterval,
	count(*) as total_reconfiguration_requests,
	sum(GEQ(max_end_time,ULLONG(1))) as successful_reconfiguration_requests,
	FLOAT(sum(GEQ(max_end_time,ULLONG(1))))/count(*) as success_rate
	
MRSUB output: reportingEntityName, eventType, GNB_ID, total_reconfiguration_requests, successful_reconfiguration_requests, success_rate, TS


name: erab_stats
description: number of admitted bearers and the distribution of their qCI
Fields:
	(TB*$window)/1000 as TS, 
	$window/1000.0 as measurementInterval,
	count(*) as total_erabs,
	sum(EQ(UINT(qCI),1)) as qCI_1,
	sum(EQ(UINT(qCI),2)) as qCI_2,
	sum(EQ(UINT(qCI),3)) as qCI_3,
	sum(EQ(UINT(qCI),4)) as qCI_4,
	sum(EQ(UINT(qCI),5)) as qCI_5,
	sum(EQ(UINT(qCI),6)) as qCI_6,
	sum(EQ(UINT(qCI),7)) as qCI_7,
	sum(EQ(UINT(qCI),8)) as qCI_8,
	sum(EQ(UINT(qCI),9)) as qCI_9,
	sum(LEQ(UINT(qCI),0))+sum(GEQ(UINT(qCI),10)) as qCI_other

MRSUB output: reportingEntityName,eventType,total_erabs,qCI_1,qCI_2,qCI_3,qCI_4,qCI_5,qCI_6,qCI_7,qCI_8,qCI_9,qCI_other,TS

name: throughput_ue
description: throughput experienced by UE over a measurement interval.   
  "Active" throughput is throughput while actively downloading, 
  "average" averages bytes transfered over the measurement interval
Fields:
      ($window*(TB+1))/1000 as TS, 
      e_RAB_ID, 
      UE_ID, 
      GNB_ID,
       $window/1000.0 as measurementInterval,
		(sum(usageCountDL)) / UMAX( sum(
			UINT(((endTimeStamp & HEX'FF000000') >> 24) | ((endTimeStamp & HEX'00FF0000') >> 8) | ((endTimeStamp & HEX'0000FF00') << 8) | ((endTimeStamp & HEX'000000FF') << 24)) -
			UINT(((startTimeStamp & HEX'FF000000') >> 24) | ((startTimeStamp & HEX'00FF0000') >> 8) | ((startTimeStamp & HEX'0000FF00') << 8) | ((startTimeStamp & HEX'000000FF') << 24)) 
		  ), 1)  as active_throughput,

		(sum(usageCountDL)) / UMAX( 
			max( UINT(((endTimeStamp & HEX'FF000000') >> 24) | ((endTimeStamp & HEX'00FF0000') >> 8) | ((endTimeStamp & HEX'0000FF00') << 8) | ((endTimeStamp & HEX'000000FF') << 24)) ) -
            min( UINT(((startTimeStamp & HEX'FF000000') >> 24) | ((startTimeStamp & HEX'00FF0000') >> 8) | ((startTimeStamp & HEX'0000FF00') << 8) | ((startTimeStamp & HEX'000000FF') << 24)) 
		  ), $window) as average_throughput,

		min((usageCountDL) / UMAX( 
			UINT(((endTimeStamp & HEX'FF000000') >> 24) | ((endTimeStamp & HEX'00FF0000') >> 8) | ((endTimeStamp & HEX'0000FF00') << 8) | ((endTimeStamp & HEX'000000FF') << 24)) -
			UINT(((startTimeStamp & HEX'FF000000') >> 24) | ((startTimeStamp & HEX'00FF0000') >> 8) | ((startTimeStamp & HEX'0000FF00') << 8) | ((startTimeStamp & HEX'000000FF') << 24)) 
		  , 1) ) as min_throughput,

		max((usageCountDL) / UMAX( 
			UINT(((endTimeStamp & HEX'FF000000') >> 24) | ((endTimeStamp & HEX'00FF0000') >> 8) | ((endTimeStamp & HEX'0000FF00') << 8) | ((endTimeStamp & HEX'000000FF') << 24)) -
			UINT(((startTimeStamp & HEX'FF000000') >> 24) | ((startTimeStamp & HEX'00FF0000') >> 8) | ((startTimeStamp & HEX'0000FF00') << 8) | ((startTimeStamp & HEX'000000FF') << 24)) 
		  , 1) ) as max_throughput

name: throughput_rollup
description: statistics on the per-UE throughput
Fields:
      TS, 
      e_RAB_ID, 
      GNB_ID,
       $window/1000.0 as measurementInterval,
	count(*) as count_ues,
	quantile_of( UINT(average_throughput), .05) as average_throughput_percentile_05,
	quantile_of( UINT(average_throughput), .50) as average_throughput_percentile_50,
	avg( average_throughput) as average_average_throughput,
	quantile_of( UINT(average_throughput), .95) as average_throughput_percentile_95,
	quantile_of( UINT(active_throughput), .05) as active_throughput_percentile_05,
	quantile_of( UINT(active_throughput), .50) as active_throughput_percentile_50,
	avg( active_throughput) as average_active_throughput,
	quantile_of( UINT(active_throughput), .95) as active_throughput_percentile_95

name: throughput_gnb
description: throughput experienced by a GNB over a measurement interval.   
  "Active" throughput is throughput while actively downloading, 
  "average" averages bytes transfered over the measurement interval
Fields:
        ($window*(TB+1))/1000 as TS, 
        e_RAB_ID, 
        GNB_ID,
       $window/1000.0 as measurementInterval,

		(sum(usageCountDL)) / UMAX( sum(
			UINT(((endTimeStamp & HEX'FF000000') >> 24) | ((endTimeStamp & HEX'00FF0000') >> 8) | ((endTimeStamp & HEX'0000FF00') << 8) | ((endTimeStamp & HEX'000000FF') << 24)) -
			UINT(((startTimeStamp & HEX'FF000000') >> 24) | ((startTimeStamp & HEX'00FF0000') >> 8) | ((startTimeStamp & HEX'0000FF00') << 8) | ((startTimeStamp & HEX'000000FF') << 24)) 
		  ), 1)  as active_throughput,

		(sum(usageCountDL)) / UMAX( 
			max( UINT(((endTimeStamp & HEX'FF000000') >> 24) | ((endTimeStamp & HEX'00FF0000') >> 8) | ((endTimeStamp & HEX'0000FF00') << 8) | ((endTimeStamp & HEX'000000FF') << 24)) ) -
            min( UINT(((startTimeStamp & HEX'FF000000') >> 24) | ((startTimeStamp & HEX'00FF0000') >> 8) | ((startTimeStamp & HEX'0000FF00') << 8) | ((startTimeStamp & HEX'000000FF') << 24)) 
		  ), $window) as average_throughput,

		min((usageCountDL) / UMAX( 
			UINT(((endTimeStamp & HEX'FF000000') >> 24) | ((endTimeStamp & HEX'00FF0000') >> 8) | ((endTimeStamp & HEX'0000FF00') << 8) | ((endTimeStamp & HEX'000000FF') << 24)) -
			UINT(((startTimeStamp & HEX'FF000000') >> 24) | ((startTimeStamp & HEX'00FF0000') >> 8) | ((startTimeStamp & HEX'0000FF00') << 8) | ((startTimeStamp & HEX'000000FF') << 24)) 
		  , 1) ) as min_throughput,

		max((usageCountDL) / UMAX( 
			UINT(((endTimeStamp & HEX'FF000000') >> 24) | ((endTimeStamp & HEX'00FF0000') >> 8) | ((endTimeStamp & HEX'0000FF00') << 8) | ((endTimeStamp & HEX'000000FF') << 24)) -
			UINT(((startTimeStamp & HEX'FF000000') >> 24) | ((startTimeStamp & HEX'00FF0000') >> 8) | ((startTimeStamp & HEX'0000FF00') << 8) | ((startTimeStamp & HEX'000000FF') << 24)) 
		  , 1) ) as max_throughput,

		quantile_of( UINT( (usageCountDL) / UMAX( 
			UINT(((endTimeStamp & HEX'FF000000') >> 24) | ((endTimeStamp & HEX'00FF0000') >> 8) | ((endTimeStamp & HEX'0000FF00') << 8) | ((endTimeStamp & HEX'000000FF') << 24)) -
			UINT(((startTimeStamp & HEX'FF000000') >> 24) | ((startTimeStamp & HEX'00FF0000') >> 8) | ((startTimeStamp & HEX'0000FF00') << 8) | ((startTimeStamp & HEX'000000FF') << 24)) 
		  , 1) ), .05) as extr_quant_hfta0_fcn_quant_udaf_hfta0,

		quantile_of( UINT( (usageCountDL) / UMAX( 
			UINT(((endTimeStamp & HEX'FF000000') >> 24) | ((endTimeStamp & HEX'00FF0000') >> 8) | ((endTimeStamp & HEX'0000FF00') << 8) | ((endTimeStamp & HEX'000000FF') << 24)) -
			UINT(((startTimeStamp & HEX'FF000000') >> 24) | ((startTimeStamp & HEX'00FF0000') >> 8) | ((startTimeStamp & HEX'0000FF00') << 8) | ((startTimeStamp & HEX'000000FF') << 24)) 
		  , 1) ), .95) as extr_quant_hfta0_fcn_quant_udaf_hfta01


name : addreq_pdf_nr_cell
description : histogram of neighboring cell RSRP, aggregated by cell id
Fields:
	($window*(tb+1))/1000 as TS, 
	$window/1000.0 as measurementInterval,
        physCellId as CELL_ID,
	count(*) as cnt,
	sum(GEQ(rsrp, 0)*LEQ(rsrp,21)) as rsrp_vbad,
	sum(GEQ(rsrp,22)*LEQ(rsrp,36)) as rsrp_bad,
	sum(GEQ(rsrp,37)*LEQ(rsrp,51)) as rsrp_medium,
	sum(GEQ(rsrp,52)*LEQ(rsrp,66)) as rsrp_good,
	sum(GEQ(rsrp,67)*LEQ(rsrp,127)) as rsrp_vgood

MRSUB output: reportingEntityName,eventType,CELL_ID,rsrp_vbad,rsrp_bad,rsrp_medium,rsrp_good,rsrp_vgood,TS

name: addreq_stats_nr_cell
description : statistics about neighboring cell RSRP aggregated by cell id
Fields:
	($window*(tb+1))/1000 as TS, 
	$window/1000.0 as measurementInterval,
        physCellId as CELL_ID,
	count(*) as cnt,
	min(rsrp-157) as min_rsrp,
	quantile_of(rsrp-157, .05) as pctl_05_rsrp,
	median_of(rsrp-157) as median_rsrp,
	quantile_of(rsrp-157, .95) as pctl_95_rsrp,
	sqrt(
		sum(FLOAT(rsrp-157)*FLOAT(rsrp-157)) - sum(FLOAT(rsrp-157))*sum(FLOAT(rsrp-157))/count(*)
	) / count(*) as stddev_rsrp,
        INT(max(rsrp))-INT(157) as max_rsrp

MRSUB output: reportingEntityName,eventType,CELL_ID,min_rsrp,max_rsrp,pctl_05_rsrp,median_rsrp,pctl_95_rsrp,stddev_rsrp,TS

name: mc_connects_cnt
description: number of DC connection requests
Fields:
	($window*(TB+1))/1000 as TS,
        $window/1000.0 as measurementInterval,
        COUNT(*) as count_ue_connects
        
MRSUB output: reportingEntityName,eventType,count_ue_connects,TS

name: mc_disconnects_cnt
description: number of DC connection releases
Fields:
	($window*(TB+1))/1000 as TS, 
         $window/1000.0 as measurementInterval, 
         COUNT(*) as count_ue_disconnects

MRSUB output: reportingEntityName,eventType,count_ue_disconnects,TS        

name: mc_unique_ue_cnt
description: Number of distinct UEs making a DC request or release
Fields:
	$window*(TB+1))/1000 as TS, 
         $window/1000.0 as measurementInterval, 
         COUNT(*) as count_unique_ue
         
MRSUB output: reportingEntityName,eventType,count_unique_ue,TS

name : addreq_success_stats
description: statistics on the time to successfully make a DC connection
Fields:
	gnb_id as GNB_ID,
	($window*(TB+1))/1000 as TS, 
	$window/1000.0 as measurementInterval,
 	MIN(success_time)/1000.0 as min_success_time,
        MAX(success_time)/1000.0 as max_success_time,
        AVG(success_time)/1000.0 as avg_success_time,
	quantile_of(success_time, .05)/1000.0 as pctl_05_success_time,
	quantile_of(success_time, .95)/1000.0 as pctl_95_success_time,
	sqrt(
		sum((success_time/1000.0)*(success_time/1000.0)) - sum(success_time/1000.0)*sum(success_time/1000.0)/count(*)
	) / count(*) as stddev_success_time

MRSUB output: reportingEntityName,eventType,GNB_ID,min_success_time,max_success_time,avg_success_time,pctl_05_success_time,pctl_95_success_time,stddev_success_time,TS

name: release_req_success_stats
description: statistics on the time to delease a DC connection
Fields:
	gnb_id as GNB_ID,
	($window*(TB+1))/1000 as TS, 
	$window/1000.0 as measurementInterval,
 	MIN(success_time)/1000.0 as min_success_time,
        MAX(success_time)/1000.0 as max_success_time,
        AVG(success_time)/1000.0 as avg_success_time,
	quantile_of(success_time, .05)/1000.0 as pctl_05_success_time,
	quantile_of(success_time, .95)/1000.0 as pctl_95_success_time,
	sqrt(
		sum((success_time/1000.0)*(success_time/1000.0)) - sum(success_time/1000.0)*sum(success_time/1000.0)/count(*)
	) / count(*) as stddev_success_time

MRSUB output: reportingEntityName,eventType,GNB_ID,min_success_time,max_success_time,avg_success_time,pctl_05_success_time,pctl_95_success_time,stddev_success_time,TS

--------------------------------------------
Priority 3

name: reconfig_status_reject_cause
description: distribution of causes for DC rejection
Fields:
	gnb_id as GNB_ID, 
	($window*(TB+1))/1000 as TS, 
	$window/1000.0 as measurementInterval,
	count(*) as total_reconfig_reject,
	sum(GEQ(UINT(cause_radio_network),0)) as count_radio_network,
	sum(GEQ(UINT(cause_transport),0)) as count_transport,
	sum(GEQ(UINT(cause_protocol),0)) as count_protocol,
	sum(GEQ(UINT(cause_misc),0)) as count_misc
	
MRSUB output: reportingEntityName,eventType,GNB_ID,total_reconfig_reject,count_radio_network,count_transport,count_protocol,count_misc,TS

 name: mod_status_refuse_cause
 description: distribution of causes for a sgnb modification refusal
 Fields:
 	gnb_id as GNB_ID, 
 	($window*(TB+1))/1000 as TS, 
 	$window/1000.0 as measurementInterval,
 	count(*) as total_reconfig_refuse,
 	sum(GEQ(UINT(cause_radio_network),0)) as count_radio_network,
 	sum(GEQ(UINT(cause_transport),0)) as count_transport,
 	sum(GEQ(UINT(cause_protocol),0)) as count_protocol,
	sum(GEQ(UINT(cause_misc),0)) as count_misc
        
MRSUB output: reportingEntityName,eventType,GNB_ID,total_reconfig_refuse,count_radio_network,count_transport,count_protocol,count_misc,TS

name: release_cause
description: distribution of the causes of a DC release
Fields:
	gnb_id as GNB_ID, 
	($window*(TB+1))/1000 as TS, 
	$window/1000.0 as measurementInterval,
	sum(total_reconfig_refuse) as total_reconfig_refuse,
	sum(count_radio_network) as count_radio_network,
	sum(count_transport) as count_transport,
	sum(count_protocol) as count_protocol,
	sum(count_misc) as count_misc

MRSUB output: reportingEntityName,eventType,GNB_ID,total_reconfig_refuse,count_radio_network,count_transport,count_protocol,count_misc,TS
        
 

mc_connected_cnt 

Number of dual connected UEs at each reporting time.

 

{
	"event": {
		"commonEventHeader": {
			"domain": "measurement",
			"eventId": "mc_connected_cnt24",
			"eventType": "mc_connected_cnt",
			"eventName": "Measurement_MC_mc_connected_cnt",
			"lastEpochMicrosec": 1568387271174552,
			"priority": "Normal",
			"reportingEntityName": "GS-LITE MC",
			"sequence": 1,
			"sourceName": "meas_cmpgn_xapp",
			"startEpochMicrosec": 1568387259652916,
			"version": "4.0.1",
			"vesEventListenerVersion": "7.0.1"
		},
		"measurementFields": {
			"additionalFields": {
				"TS": "1568387270",
				"measurementInterval": "10",
				"count_connected_ue": "13"
			},
			"measurementInterval": 10,
			"measurementFieldsVersion": "4.0"
		}
	}
}


mc_connects_cnt 

Number of UE dual connection requests at the reporting time.

 

{
	"event": {
		"commonEventHeader": {
			"domain": "measurement",
			"eventId": "mc_connects_cnt8",
			"eventType": "mc_connects_cnt",
			"eventName": "Measurement_MC_mc_connects_cnt",
			"lastEpochMicrosec": 1568387820999467,
			"priority": "Normal",
			"reportingEntityName": "GS-LITE MC",
			"sequence": 4,
			"sourceName": "meas_cmpgn_xapp",
			"startEpochMicrosec": 1568387818794439,
			"version": "4.0.1",
			"vesEventListenerVersion": "7.0.1"
		},
		"measurementFields": {
			"additionalFields": {
				"TS": "1568387",
				"measurementInterval": "0",
				"UE_ID": "21855",
				"count_ue_connects": "1"
			},
			"measurementInterval": 0,
			"measurementFieldsVersion": "4.0"
		}
	}
}

mc_disconnects_cnt 

Number of UE dual connection releases at the reporting time.

 

{
	"event": {
		"commonEventHeader": {
			"domain": "measurement",
			"eventId": "mc_disconnects_cnt34",
			"eventType": "mc_disconnects_cnt",
			"eventName": "Measurement_MC_mc_disconnects_cnt",
			"lastEpochMicrosec": 1568387702320165,
			"priority": "Normal",
			"reportingEntityName": "GS-LITE MC",
			"sequence": 16,
			"sourceName": "meas_cmpgn_xapp",
			"startEpochMicrosec": 1568387694001346,
			"version": "4.0.1",
			"vesEventListenerVersion": "7.0.1"
		},
		"measurementFields": {
			"additionalFields": {
				"TS": "1568387700",
				"measurementInterval": "0",
				"UE_ID": "79787",
				"count_ue_disconnects": "1"
			},
			"measurementInterval": 0,
			"measurementFieldsVersion": "4.0"
		}
	}
}


mc_connection_stats 

Duration of dual connection distribution (min, max, avg) for dual connections terminated during the measurement interval.

 

{
	"event": {
		"commonEventHeader": {
			"domain": "measurement",
			"eventId": "mc_connection_stats29",
			"eventType": "mc_connection_stats",
			"eventName": "Measurement_MC_mc_connection_stats",
			"lastEpochMicrosec": 1568387421116485,
			"priority": "Normal",
			"reportingEntityName": "GS-LITE MC",
			"sequence": 2,
			"sourceName": "meas_cmpgn_xapp",
			"startEpochMicrosec": 1568387407488894,
			"version": "4.0.1",
			"vesEventListenerVersion": "7.0.1"
		},
		"measurementFields": {
			"additionalFields": {
				"TS": "156838742",
				"measurementInterval": "0",
				"min_connected_time": "0",
				"max_connected_time": "7",
				"avg_connected_time": "1.137931"
			},
			"measurementInterval": 0,
			"measurementFieldsVersion": "4.0"
		}
	}
}


mc_unique_ue_cnt

number of distinct UEs connecting or disconnecting during this time interval.

 

{
	"event": {
		"commonEventHeader": {
			"domain": "measurement",
			"eventId": "mc_unique_ue_cnt56",
			"eventType": "mc_unique_ue_cnt",
			"eventName": "Measurement_MC_mc_unique_ue_cnt",
			"lastEpochMicrosec": 1568387908164403,
			"priority": "Normal",
			"reportingEntityName": "GS-LITE MC",
			"sequence": 2,
			"sourceName": "meas_cmpgn_xapp",
			"startEpochMicrosec": 1568387880213119,
			"version": "4.0.1",
			"vesEventListenerVersion": "7.0.1"
		},
		"measurementFields": {
			"additionalFields": {
				"TS": "1568387",
				"measurementInterval": "0",
				"count_unique_ue": "43"
			},
			"measurementInterval": 0,
			"measurementFieldsVersion": "4.0"
		}
	}
}
 

Event Measurement_MC_rrcx_pdf_cell:

Report for the RSRP, RSRQ, SINR value distribution for a given cell in a measurement interval.

 

{
	"event": {
		"commonEventHeader": {
			"domain": "measurement",
			"eventId": "rrcx_pdf_cell95",
			"eventType": "rrcx_pdf_cell",
			"eventName": "Measurement_MC_rrcx_pdf_cell",
			"lastEpochMicrosec": 1568220624129946,
			"priority": "Normal",
			"reportingEntityName": "GS-LITE MC",
			"sequence": 27,
			"sourceName": "meas_cmpgn_xapp",
			"startEpochMicrosec": 1568220555900465,
			"version": "4.0.1",
			"vesEventListenerVersion": "7.0.1"
		},
		"measurementFields": {
			"additionalFields": {
				"TS": "1568220620",
				"measurementInterval": "10",
				"CELL_ID": "20",
				"cnt": "30",
				"rsrp_vbad": "4",
				"rsrp_bad": "3",
				"rsrp_medium": "14",
				"rsrp_good": "7",
				"rsrp_vgood": "2",
				"rsrq_vbad": "2",
				"rsrq_bad": "11",
				"rsrq_medium": "10",
				"rsrq_good": "4",
				"rsrq_vgood": "3",
				"sinr_vbad": "7",
				"sinr_bad": "7",
				"sinr_medium": "9",
				"sinr_good": "5",
				"sinr_vgood": "2"
			},
			"measurementInterval": 10,
			"measurementFieldsVersion": "4.0"
		}
	}
}
 

Event Measurement_MC_rrcx_stats_cell:

Report for RSRP, RSRQ, SINR value statistics for a given cell in a measurement interval.

 

{
	"event": {
		"commonEventHeader": {
			"domain": "measurement",
			"eventId": "rrcx_stats_cell44",
			"eventType": "rrcx_stats_cell",
			"eventName": "Measurement_MC_rrcx_stats_cell",
			"lastEpochMicrosec": 1568386044111090,
			"priority": "Normal",
			"reportingEntityName": "GS-LITE MC",
			"sequence": 11,
			"sourceName": "meas_cmpgn_xapp",
			"startEpochMicrosec": 1568386010250738,
			"version": "4.0.1",
			"vesEventListenerVersion": "7.0.1"
		},
		"measurementFields": {
			"additionalFields": {
				"TS": "1568386040",
				"measurementInterval": "10",
				"CELL_ID": "15",
				"cnt": "30",
				"min_rsrp": "20",
				"pctl_05_rsrp": "23.450000",
				"median_rsrp": "54.500000",
				"pctl_95_rsrp": "85.550000",
				"stddev_rsrp": "3.295277",
				"max_rsrp": "89",
				"min_rsrq": "12",
				"pctl_05_rsrq": "15.750000",
				"median_rsrq": "49.500000",
				"pctl_95_rsrq": "83.250000",
				"stddev_rsrq": "3.536691",
				"max_rsrq": "87",
				"min_sinr": "21",
				"pctl_05_sinr": "24.650000",
				"median_sinr": "57.500000",
				"pctl_95_sinr": "90.350000",
				"stddev_sinr": "3.217136",
				"max_sinr": "94"
			},
			"measurementInterval": 10,
			"measurementFieldsVersion": "4.0"
		}
	}
}
 

 

 

