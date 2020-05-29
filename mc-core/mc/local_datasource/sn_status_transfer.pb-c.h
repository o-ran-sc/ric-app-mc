/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: sn_status_transfer.proto */

#ifndef PROTOBUF_C_sn_5fstatus_5ftransfer_2eproto__INCLUDED
#define PROTOBUF_C_sn_5fstatus_5ftransfer_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "google/protobuf/wrappers.pb-c.h"
#include "x2ap_common_types.pb-c.h"

typedef struct _StreamingProtobufs__SNStatusTransfer StreamingProtobufs__SNStatusTransfer;
typedef struct _StreamingProtobufs__SNStatusTransferIEs StreamingProtobufs__SNStatusTransferIEs;
typedef struct _StreamingProtobufs__ERABsSubjectToStatusTransferList StreamingProtobufs__ERABsSubjectToStatusTransferList;
typedef struct _StreamingProtobufs__ERABsSubjectToStatusTransferItemIEs StreamingProtobufs__ERABsSubjectToStatusTransferItemIEs;
typedef struct _StreamingProtobufs__ERABsSubjectToStatusTransferItem StreamingProtobufs__ERABsSubjectToStatusTransferItem;
typedef struct _StreamingProtobufs__ERABsSubjectToStatusTransferItemExtIEs StreamingProtobufs__ERABsSubjectToStatusTransferItemExtIEs;


/* --- enums --- */


/* --- messages --- */

struct  _StreamingProtobufs__SNStatusTransfer
{
  ProtobufCMessage base;
  StreamingProtobufs__SNStatusTransferIEs *protocolies;
};
#define STREAMING_PROTOBUFS__SNSTATUS_TRANSFER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&streaming_protobufs__snstatus_transfer__descriptor) \
    , NULL }


struct  _StreamingProtobufs__SNStatusTransferIEs
{
  ProtobufCMessage base;
  uint32_t id_old_enb_ue_x2ap_id;
  uint32_t id_new_enb_ue_x2ap_id;
  StreamingProtobufs__ERABsSubjectToStatusTransferList *id_e_rabs_subjecttostatustransfer_list;
  Google__Protobuf__UInt32Value *id_old_enb_ue_x2ap_id_extension;
  Google__Protobuf__UInt32Value *id_new_enb_ue_x2ap_id_extension;
  Google__Protobuf__UInt32Value *id_sgnb_ue_x2ap_id;
};
#define STREAMING_PROTOBUFS__SNSTATUS_TRANSFER__IES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&streaming_protobufs__snstatus_transfer__ies__descriptor) \
    , 0, 0, NULL, NULL, NULL, NULL }


struct  _StreamingProtobufs__ERABsSubjectToStatusTransferList
{
  ProtobufCMessage base;
  size_t n_items;
  StreamingProtobufs__ERABsSubjectToStatusTransferItemIEs **items;
};
#define STREAMING_PROTOBUFS__E__RABS__SUBJECT_TO_STATUS_TRANSFER__LIST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&streaming_protobufs__e__rabs__subject_to_status_transfer__list__descriptor) \
    , 0,NULL }


struct  _StreamingProtobufs__ERABsSubjectToStatusTransferItemIEs
{
  ProtobufCMessage base;
  StreamingProtobufs__ERABsSubjectToStatusTransferItem *id_e_rabs_subjecttostatustransfer_item;
};
#define STREAMING_PROTOBUFS__E__RABS__SUBJECT_TO_STATUS_TRANSFER__ITEM_IES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&streaming_protobufs__e__rabs__subject_to_status_transfer__item_ies__descriptor) \
    , NULL }


struct  _StreamingProtobufs__ERABsSubjectToStatusTransferItem
{
  ProtobufCMessage base;
  uint32_t e_rab_id;
  Google__Protobuf__BytesValue *receivestatusofulpdcpsdus;
  StreamingProtobufs__COUNTvalue *ul_countvalue;
  StreamingProtobufs__COUNTvalue *dl_countvalue;
  size_t n_ie_extensions;
  StreamingProtobufs__ERABsSubjectToStatusTransferItemExtIEs **ie_extensions;
};
#define STREAMING_PROTOBUFS__E__RABS__SUBJECT_TO_STATUS_TRANSFER__ITEM__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&streaming_protobufs__e__rabs__subject_to_status_transfer__item__descriptor) \
    , 0, NULL, NULL, NULL, 0,NULL }


struct  _StreamingProtobufs__ERABsSubjectToStatusTransferItemExtIEs
{
  ProtobufCMessage base;
  Google__Protobuf__BytesValue *id_receivestatusofulpdcpsdusextended;
  StreamingProtobufs__COUNTValueExtended *id_ulcountvalueextended;
  StreamingProtobufs__COUNTValueExtended *id_dlcountvalueextended;
  Google__Protobuf__BytesValue *id_receivestatusofulpdcpsduspdcp_snlength18;
  StreamingProtobufs__COUNTvaluePDCPSNlength18 *id_ulcountvaluepdcp_snlength18;
  StreamingProtobufs__COUNTvaluePDCPSNlength18 *id_dlcountvaluepdcp_snlength18;
};
#define STREAMING_PROTOBUFS__E__RABS__SUBJECT_TO_STATUS_TRANSFER__ITEM_EXT_IES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&streaming_protobufs__e__rabs__subject_to_status_transfer__item_ext_ies__descriptor) \
    , NULL, NULL, NULL, NULL, NULL, NULL }


/* StreamingProtobufs__SNStatusTransfer methods */
void   streaming_protobufs__snstatus_transfer__init
                     (StreamingProtobufs__SNStatusTransfer         *message);
size_t streaming_protobufs__snstatus_transfer__get_packed_size
                     (const StreamingProtobufs__SNStatusTransfer   *message);
size_t streaming_protobufs__snstatus_transfer__pack
                     (const StreamingProtobufs__SNStatusTransfer   *message,
                      uint8_t             *out);
size_t streaming_protobufs__snstatus_transfer__pack_to_buffer
                     (const StreamingProtobufs__SNStatusTransfer   *message,
                      ProtobufCBuffer     *buffer);
StreamingProtobufs__SNStatusTransfer *
       streaming_protobufs__snstatus_transfer__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   streaming_protobufs__snstatus_transfer__free_unpacked
                     (StreamingProtobufs__SNStatusTransfer *message,
                      ProtobufCAllocator *allocator);
/* StreamingProtobufs__SNStatusTransferIEs methods */
void   streaming_protobufs__snstatus_transfer__ies__init
                     (StreamingProtobufs__SNStatusTransferIEs         *message);
size_t streaming_protobufs__snstatus_transfer__ies__get_packed_size
                     (const StreamingProtobufs__SNStatusTransferIEs   *message);
size_t streaming_protobufs__snstatus_transfer__ies__pack
                     (const StreamingProtobufs__SNStatusTransferIEs   *message,
                      uint8_t             *out);
size_t streaming_protobufs__snstatus_transfer__ies__pack_to_buffer
                     (const StreamingProtobufs__SNStatusTransferIEs   *message,
                      ProtobufCBuffer     *buffer);
StreamingProtobufs__SNStatusTransferIEs *
       streaming_protobufs__snstatus_transfer__ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   streaming_protobufs__snstatus_transfer__ies__free_unpacked
                     (StreamingProtobufs__SNStatusTransferIEs *message,
                      ProtobufCAllocator *allocator);
/* StreamingProtobufs__ERABsSubjectToStatusTransferList methods */
void   streaming_protobufs__e__rabs__subject_to_status_transfer__list__init
                     (StreamingProtobufs__ERABsSubjectToStatusTransferList         *message);
size_t streaming_protobufs__e__rabs__subject_to_status_transfer__list__get_packed_size
                     (const StreamingProtobufs__ERABsSubjectToStatusTransferList   *message);
size_t streaming_protobufs__e__rabs__subject_to_status_transfer__list__pack
                     (const StreamingProtobufs__ERABsSubjectToStatusTransferList   *message,
                      uint8_t             *out);
size_t streaming_protobufs__e__rabs__subject_to_status_transfer__list__pack_to_buffer
                     (const StreamingProtobufs__ERABsSubjectToStatusTransferList   *message,
                      ProtobufCBuffer     *buffer);
StreamingProtobufs__ERABsSubjectToStatusTransferList *
       streaming_protobufs__e__rabs__subject_to_status_transfer__list__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   streaming_protobufs__e__rabs__subject_to_status_transfer__list__free_unpacked
                     (StreamingProtobufs__ERABsSubjectToStatusTransferList *message,
                      ProtobufCAllocator *allocator);
/* StreamingProtobufs__ERABsSubjectToStatusTransferItemIEs methods */
void   streaming_protobufs__e__rabs__subject_to_status_transfer__item_ies__init
                     (StreamingProtobufs__ERABsSubjectToStatusTransferItemIEs         *message);
size_t streaming_protobufs__e__rabs__subject_to_status_transfer__item_ies__get_packed_size
                     (const StreamingProtobufs__ERABsSubjectToStatusTransferItemIEs   *message);
size_t streaming_protobufs__e__rabs__subject_to_status_transfer__item_ies__pack
                     (const StreamingProtobufs__ERABsSubjectToStatusTransferItemIEs   *message,
                      uint8_t             *out);
size_t streaming_protobufs__e__rabs__subject_to_status_transfer__item_ies__pack_to_buffer
                     (const StreamingProtobufs__ERABsSubjectToStatusTransferItemIEs   *message,
                      ProtobufCBuffer     *buffer);
StreamingProtobufs__ERABsSubjectToStatusTransferItemIEs *
       streaming_protobufs__e__rabs__subject_to_status_transfer__item_ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   streaming_protobufs__e__rabs__subject_to_status_transfer__item_ies__free_unpacked
                     (StreamingProtobufs__ERABsSubjectToStatusTransferItemIEs *message,
                      ProtobufCAllocator *allocator);
/* StreamingProtobufs__ERABsSubjectToStatusTransferItem methods */
void   streaming_protobufs__e__rabs__subject_to_status_transfer__item__init
                     (StreamingProtobufs__ERABsSubjectToStatusTransferItem         *message);
size_t streaming_protobufs__e__rabs__subject_to_status_transfer__item__get_packed_size
                     (const StreamingProtobufs__ERABsSubjectToStatusTransferItem   *message);
size_t streaming_protobufs__e__rabs__subject_to_status_transfer__item__pack
                     (const StreamingProtobufs__ERABsSubjectToStatusTransferItem   *message,
                      uint8_t             *out);
size_t streaming_protobufs__e__rabs__subject_to_status_transfer__item__pack_to_buffer
                     (const StreamingProtobufs__ERABsSubjectToStatusTransferItem   *message,
                      ProtobufCBuffer     *buffer);
StreamingProtobufs__ERABsSubjectToStatusTransferItem *
       streaming_protobufs__e__rabs__subject_to_status_transfer__item__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   streaming_protobufs__e__rabs__subject_to_status_transfer__item__free_unpacked
                     (StreamingProtobufs__ERABsSubjectToStatusTransferItem *message,
                      ProtobufCAllocator *allocator);
/* StreamingProtobufs__ERABsSubjectToStatusTransferItemExtIEs methods */
void   streaming_protobufs__e__rabs__subject_to_status_transfer__item_ext_ies__init
                     (StreamingProtobufs__ERABsSubjectToStatusTransferItemExtIEs         *message);
size_t streaming_protobufs__e__rabs__subject_to_status_transfer__item_ext_ies__get_packed_size
                     (const StreamingProtobufs__ERABsSubjectToStatusTransferItemExtIEs   *message);
size_t streaming_protobufs__e__rabs__subject_to_status_transfer__item_ext_ies__pack
                     (const StreamingProtobufs__ERABsSubjectToStatusTransferItemExtIEs   *message,
                      uint8_t             *out);
size_t streaming_protobufs__e__rabs__subject_to_status_transfer__item_ext_ies__pack_to_buffer
                     (const StreamingProtobufs__ERABsSubjectToStatusTransferItemExtIEs   *message,
                      ProtobufCBuffer     *buffer);
StreamingProtobufs__ERABsSubjectToStatusTransferItemExtIEs *
       streaming_protobufs__e__rabs__subject_to_status_transfer__item_ext_ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   streaming_protobufs__e__rabs__subject_to_status_transfer__item_ext_ies__free_unpacked
                     (StreamingProtobufs__ERABsSubjectToStatusTransferItemExtIEs *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*StreamingProtobufs__SNStatusTransfer_Closure)
                 (const StreamingProtobufs__SNStatusTransfer *message,
                  void *closure_data);
typedef void (*StreamingProtobufs__SNStatusTransferIEs_Closure)
                 (const StreamingProtobufs__SNStatusTransferIEs *message,
                  void *closure_data);
typedef void (*StreamingProtobufs__ERABsSubjectToStatusTransferList_Closure)
                 (const StreamingProtobufs__ERABsSubjectToStatusTransferList *message,
                  void *closure_data);
typedef void (*StreamingProtobufs__ERABsSubjectToStatusTransferItemIEs_Closure)
                 (const StreamingProtobufs__ERABsSubjectToStatusTransferItemIEs *message,
                  void *closure_data);
typedef void (*StreamingProtobufs__ERABsSubjectToStatusTransferItem_Closure)
                 (const StreamingProtobufs__ERABsSubjectToStatusTransferItem *message,
                  void *closure_data);
typedef void (*StreamingProtobufs__ERABsSubjectToStatusTransferItemExtIEs_Closure)
                 (const StreamingProtobufs__ERABsSubjectToStatusTransferItemExtIEs *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor streaming_protobufs__snstatus_transfer__descriptor;
extern const ProtobufCMessageDescriptor streaming_protobufs__snstatus_transfer__ies__descriptor;
extern const ProtobufCMessageDescriptor streaming_protobufs__e__rabs__subject_to_status_transfer__list__descriptor;
extern const ProtobufCMessageDescriptor streaming_protobufs__e__rabs__subject_to_status_transfer__item_ies__descriptor;
extern const ProtobufCMessageDescriptor streaming_protobufs__e__rabs__subject_to_status_transfer__item__descriptor;
extern const ProtobufCMessageDescriptor streaming_protobufs__e__rabs__subject_to_status_transfer__item_ext_ies__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_sn_5fstatus_5ftransfer_2eproto__INCLUDED */