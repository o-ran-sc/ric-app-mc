#ifndef _LTE_PCELL_MEAS_H__INCLUDED_
#define _LTE_PCELL_MEAS_H__INCLUDED_

/*
==============================================================================

        Copyright (c) 2018-2019 AT&T Intellectual Property.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
=============================================================================
*/


#include "packet.h"


#include "/usr/local/include/protobuf-c/protobuf-c.h"

struct _lte_pcell_meas {
	gs_uint64_t timestamp_ms;
	gs_uint32_t eci;
	gs_uint32_t plmn;
	gs_uint64_t eutran_trace_id;
	gs_uint32_t crnti;
	gs_int64_t imei;
	gs_int64_t imsi;
	gs_int64_t pci;
	gs_int64_t rsrq;
	gs_int64_t rsrp;
};

static inline void init__lte_pcell_meas(struct _lte_pcell_meas *m){
}

static inline gs_retval_t get_lte_pcell_meas__timestamp_ms(struct packet *p, gs_uint64_t *t){
	*t = ((struct _lte_pcell_meas *)(p->record.packed.values))->timestamp_ms;
	return 0;
}

static inline gs_retval_t get_lte_pcell_meas__eci(struct packet *p, gs_uint32_t *t){
	*t = ((struct _lte_pcell_meas *)(p->record.packed.values))->eci;
	return 0;
}

static inline gs_retval_t get_lte_pcell_meas__plmn(struct packet *p, gs_uint32_t *t){
	*t = ((struct _lte_pcell_meas *)(p->record.packed.values))->plmn;
	return 0;
}

static inline gs_retval_t get_lte_pcell_meas__eutran_trace_id(struct packet *p, gs_uint64_t *t){
	*t = ((struct _lte_pcell_meas *)(p->record.packed.values))->eutran_trace_id;
	return 0;
}

static inline gs_retval_t get_lte_pcell_meas__crnti(struct packet *p, gs_uint32_t *t){
	*t = ((struct _lte_pcell_meas *)(p->record.packed.values))->crnti;
	return 0;
}

static inline gs_retval_t get_lte_pcell_meas__imei(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_pcell_meas *)(p->record.packed.values))->imei;
	return 0;
}

static inline gs_retval_t get_lte_pcell_meas__imsi(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_pcell_meas *)(p->record.packed.values))->imsi;
	return 0;
}

static inline gs_retval_t get_lte_pcell_meas__pci(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_pcell_meas *)(p->record.packed.values))->pci;
	return 0;
}

static inline gs_retval_t get_lte_pcell_meas__rsrq(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_pcell_meas *)(p->record.packed.values))->rsrq;
	return 0;
}

static inline gs_retval_t get_lte_pcell_meas__rsrp(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_pcell_meas *)(p->record.packed.values))->rsrp;
	return 0;
}

#endif
