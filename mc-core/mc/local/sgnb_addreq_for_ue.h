#ifndef _SGNB_ADDREQ_FOR_UE_H__INCLUDED_
#define _SGNB_ADDREQ_FOR_UE_H__INCLUDED_

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

struct _sgnb_addreq_for_ue {
	gs_uint64_t timestamp_ms;
	gs_sp_t gnb_id;
	gs_int64_t id_MeNB_UE_X2AP_ID;
	gs_int64_t uEaggregateMaximumBitRateDownlink;
	gs_int8_t uEaggregateMaximumBitRateDownlink_exists;
	gs_uint32_t id_MeNB_UE_X2AP_ID_Extension;
	gs_sp_t eUTRANcellIdentifier;
	gs_sp_t pLMN_Identity;
};

static inline void init__sgnb_addreq_for_ue(struct _sgnb_addreq_for_ue *m){
	m->uEaggregateMaximumBitRateDownlink_exists=0;
}

static inline gs_retval_t get_sgnb_addreq_for_ue__timestamp_ms(struct packet *p, gs_uint64_t *t){
	*t = ((struct _sgnb_addreq_for_ue *)(p->record.packed.values))->timestamp_ms;
	return 0;
}

static inline gs_retval_t get_sgnb_addreq_for_ue__gnb_id(struct packet *p, struct gs_string *t){
t->data = ((struct _sgnb_addreq_for_ue *)(p->record.packed.values))->gnb_id;
	t->length = strlen(t->data);
	t->owner=0;
	return 0;
}

static inline gs_retval_t get_sgnb_addreq_for_ue__id_MeNB_UE_X2AP_ID(struct packet *p, gs_int64_t *t){
	*t = ((struct _sgnb_addreq_for_ue *)(p->record.packed.values))->id_MeNB_UE_X2AP_ID;
	return 0;
}

static inline gs_retval_t get_sgnb_addreq_for_ue__uEaggregateMaximumBitRateDownlink(struct packet *p, gs_int64_t *t){
	*t = ((struct _sgnb_addreq_for_ue *)(p->record.packed.values))->uEaggregateMaximumBitRateDownlink;
	return (((struct _sgnb_addreq_for_ue *)(p->record.packed.values))->uEaggregateMaximumBitRateDownlink==0);
}

static inline gs_retval_t get_sgnb_addreq_for_ue__id_MeNB_UE_X2AP_ID_Extension(struct packet *p, gs_uint32_t *t){
	*t = ((struct _sgnb_addreq_for_ue *)(p->record.packed.values))->id_MeNB_UE_X2AP_ID_Extension;
	return 0;
}

static inline gs_retval_t get_sgnb_addreq_for_ue__eUTRANcellIdentifier(struct packet *p, struct gs_string *t){
t->data = ((struct _sgnb_addreq_for_ue *)(p->record.packed.values))->eUTRANcellIdentifier;
	t->length = strlen(t->data);
	t->owner=0;
	return 0;
}

static inline gs_retval_t get_sgnb_addreq_for_ue__pLMN_Identity(struct packet *p, struct gs_string *t){
t->data = ((struct _sgnb_addreq_for_ue *)(p->record.packed.values))->pLMN_Identity;
	t->length = strlen(t->data);
	t->owner=0;
	return 0;
}

#endif
