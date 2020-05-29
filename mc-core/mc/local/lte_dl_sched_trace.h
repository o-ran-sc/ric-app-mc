#ifndef _LTE_DL_SCHED_TRACE_H__INCLUDED_
#define _LTE_DL_SCHED_TRACE_H__INCLUDED_

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

struct _lte_dl_sched_trace {
	gs_uint64_t timestamp_ms;
	gs_uint32_t eci;
	gs_uint32_t plmn;
	gs_uint64_t eutran_trace_id;
	gs_uint32_t crnti;
	gs_int64_t imei;
	gs_int64_t imsi;
	gs_uint32_t numOfHarqReTx;
	gs_int8_t numOfHarqReTx_exists;
	gs_int64_t numOfTtiUeSched;
	gs_int64_t numOfHarq1stTx;
	gs_int64_t recordCollectionDuration;
	gs_uint32_t numOfTtiUeSchedMimo;
	gs_int8_t numOfTtiUeSchedMimo_exists;
	gs_int64_t numOfPrbUsed;
	gs_uint32_t numOfBad1stMacPduTx;
	gs_int8_t numOfBad1stMacPduTx_exists;
	gs_uint32_t numOfBadLastMacPduTx;
	gs_int8_t numOfBadLastMacPduTx_exists;
};

static inline void init__lte_dl_sched_trace(struct _lte_dl_sched_trace *m){
	m->numOfHarqReTx_exists=0;
	m->numOfTtiUeSchedMimo_exists=0;
	m->numOfBad1stMacPduTx_exists=0;
	m->numOfBadLastMacPduTx_exists=0;
}

static inline gs_retval_t get_lte_dl_sched_trace__timestamp_ms(struct packet *p, gs_uint64_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->timestamp_ms;
	return 0;
}

static inline gs_retval_t get_lte_dl_sched_trace__eci(struct packet *p, gs_uint32_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->eci;
	return 0;
}

static inline gs_retval_t get_lte_dl_sched_trace__plmn(struct packet *p, gs_uint32_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->plmn;
	return 0;
}

static inline gs_retval_t get_lte_dl_sched_trace__eutran_trace_id(struct packet *p, gs_uint64_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->eutran_trace_id;
	return 0;
}

static inline gs_retval_t get_lte_dl_sched_trace__crnti(struct packet *p, gs_uint32_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->crnti;
	return 0;
}

static inline gs_retval_t get_lte_dl_sched_trace__imei(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->imei;
	return 0;
}

static inline gs_retval_t get_lte_dl_sched_trace__imsi(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->imsi;
	return 0;
}

static inline gs_retval_t get_lte_dl_sched_trace__numOfHarqReTx(struct packet *p, gs_uint32_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->numOfHarqReTx;
	return (((struct _lte_dl_sched_trace *)(p->record.packed.values))->numOfHarqReTx==0);
}

static inline gs_retval_t get_lte_dl_sched_trace__numOfTtiUeSched(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->numOfTtiUeSched;
	return 0;
}

static inline gs_retval_t get_lte_dl_sched_trace__numOfHarq1stTx(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->numOfHarq1stTx;
	return 0;
}

static inline gs_retval_t get_lte_dl_sched_trace__recordCollectionDuration(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->recordCollectionDuration;
	return 0;
}

static inline gs_retval_t get_lte_dl_sched_trace__numOfTtiUeSchedMimo(struct packet *p, gs_uint32_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->numOfTtiUeSchedMimo;
	return (((struct _lte_dl_sched_trace *)(p->record.packed.values))->numOfTtiUeSchedMimo==0);
}

static inline gs_retval_t get_lte_dl_sched_trace__numOfPrbUsed(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->numOfPrbUsed;
	return 0;
}

static inline gs_retval_t get_lte_dl_sched_trace__numOfBad1stMacPduTx(struct packet *p, gs_uint32_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->numOfBad1stMacPduTx;
	return (((struct _lte_dl_sched_trace *)(p->record.packed.values))->numOfBad1stMacPduTx==0);
}

static inline gs_retval_t get_lte_dl_sched_trace__numOfBadLastMacPduTx(struct packet *p, gs_uint32_t *t){
	*t = ((struct _lte_dl_sched_trace *)(p->record.packed.values))->numOfBadLastMacPduTx;
	return (((struct _lte_dl_sched_trace *)(p->record.packed.values))->numOfBadLastMacPduTx==0);
}

#endif
