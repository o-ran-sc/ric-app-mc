#ifndef _LTE_THPT_MEAS_H__INCLUDED_
#define _LTE_THPT_MEAS_H__INCLUDED_

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

struct _lte_thpt_meas {
	gs_uint64_t timestamp_ms;
	gs_uint32_t eci;
	gs_uint32_t plmn;
	gs_uint64_t eutran_trace_id;
	gs_uint32_t crnti;
	gs_int64_t numOfTtiUeSched;
	gs_int64_t imei;
	gs_int64_t imsi;
	gs_int64_t numOfTtiPositiveDlBuf;
	gs_int64_t sumOfSentNonGbrBytes;
	gs_int64_t sumOfSentGbrBytes;
};

static inline void init__lte_thpt_meas(struct _lte_thpt_meas *m){
}

static inline gs_retval_t get_lte_thpt_meas__timestamp_ms(struct packet *p, gs_uint64_t *t){
	*t = ((struct _lte_thpt_meas *)(p->record.packed.values))->timestamp_ms;
	return 0;
}

static inline gs_retval_t get_lte_thpt_meas__eci(struct packet *p, gs_uint32_t *t){
	*t = ((struct _lte_thpt_meas *)(p->record.packed.values))->eci;
	return 0;
}

static inline gs_retval_t get_lte_thpt_meas__plmn(struct packet *p, gs_uint32_t *t){
	*t = ((struct _lte_thpt_meas *)(p->record.packed.values))->plmn;
	return 0;
}

static inline gs_retval_t get_lte_thpt_meas__eutran_trace_id(struct packet *p, gs_uint64_t *t){
	*t = ((struct _lte_thpt_meas *)(p->record.packed.values))->eutran_trace_id;
	return 0;
}

static inline gs_retval_t get_lte_thpt_meas__crnti(struct packet *p, gs_uint32_t *t){
	*t = ((struct _lte_thpt_meas *)(p->record.packed.values))->crnti;
	return 0;
}

static inline gs_retval_t get_lte_thpt_meas__numOfTtiUeSched(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_thpt_meas *)(p->record.packed.values))->numOfTtiUeSched;
	return 0;
}

static inline gs_retval_t get_lte_thpt_meas__imei(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_thpt_meas *)(p->record.packed.values))->imei;
	return 0;
}

static inline gs_retval_t get_lte_thpt_meas__imsi(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_thpt_meas *)(p->record.packed.values))->imsi;
	return 0;
}

static inline gs_retval_t get_lte_thpt_meas__numOfTtiPositiveDlBuf(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_thpt_meas *)(p->record.packed.values))->numOfTtiPositiveDlBuf;
	return 0;
}

static inline gs_retval_t get_lte_thpt_meas__sumOfSentNonGbrBytes(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_thpt_meas *)(p->record.packed.values))->sumOfSentNonGbrBytes;
	return 0;
}

static inline gs_retval_t get_lte_thpt_meas__sumOfSentGbrBytes(struct packet *p, gs_int64_t *t){
	*t = ((struct _lte_thpt_meas *)(p->record.packed.values))->sumOfSentGbrBytes;
	return 0;
}

#endif
