/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: x2ap_streaming.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "x2ap_streaming.pb-c.h"
void   streaming_protobufs__x2_apstreaming__init
                     (StreamingProtobufs__X2APStreaming         *message)
{
  static const StreamingProtobufs__X2APStreaming init_value = STREAMING_PROTOBUFS__X2_APSTREAMING__INIT;
  *message = init_value;
}
size_t streaming_protobufs__x2_apstreaming__get_packed_size
                     (const StreamingProtobufs__X2APStreaming *message)
{
  assert(message->base.descriptor == &streaming_protobufs__x2_apstreaming__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t streaming_protobufs__x2_apstreaming__pack
                     (const StreamingProtobufs__X2APStreaming *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &streaming_protobufs__x2_apstreaming__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t streaming_protobufs__x2_apstreaming__pack_to_buffer
                     (const StreamingProtobufs__X2APStreaming *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &streaming_protobufs__x2_apstreaming__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StreamingProtobufs__X2APStreaming *
       streaming_protobufs__x2_apstreaming__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StreamingProtobufs__X2APStreaming *)
     protobuf_c_message_unpack (&streaming_protobufs__x2_apstreaming__descriptor,
                                allocator, len, data);
}
void   streaming_protobufs__x2_apstreaming__free_unpacked
                     (StreamingProtobufs__X2APStreaming *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &streaming_protobufs__x2_apstreaming__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   streaming_protobufs__x2_apstreaming_header__init
                     (StreamingProtobufs__X2APStreamingHeader         *message)
{
  static const StreamingProtobufs__X2APStreamingHeader init_value = STREAMING_PROTOBUFS__X2_APSTREAMING_HEADER__INIT;
  *message = init_value;
}
size_t streaming_protobufs__x2_apstreaming_header__get_packed_size
                     (const StreamingProtobufs__X2APStreamingHeader *message)
{
  assert(message->base.descriptor == &streaming_protobufs__x2_apstreaming_header__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t streaming_protobufs__x2_apstreaming_header__pack
                     (const StreamingProtobufs__X2APStreamingHeader *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &streaming_protobufs__x2_apstreaming_header__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t streaming_protobufs__x2_apstreaming_header__pack_to_buffer
                     (const StreamingProtobufs__X2APStreamingHeader *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &streaming_protobufs__x2_apstreaming_header__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StreamingProtobufs__X2APStreamingHeader *
       streaming_protobufs__x2_apstreaming_header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StreamingProtobufs__X2APStreamingHeader *)
     protobuf_c_message_unpack (&streaming_protobufs__x2_apstreaming_header__descriptor,
                                allocator, len, data);
}
void   streaming_protobufs__x2_apstreaming_header__free_unpacked
                     (StreamingProtobufs__X2APStreamingHeader *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &streaming_protobufs__x2_apstreaming_header__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor streaming_protobufs__x2_apstreaming__field_descriptors[24] =
{
  {
    "header",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__X2APStreaming, header),
    &streaming_protobufs__x2_apstreaming_header__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rrcTransfer",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, rrctransfer),
    &streaming_protobufs__rrctransfer__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBAdditionRequest",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbadditionrequest),
    &streaming_protobufs__sg_nbaddition_request__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBAdditionRequestAcknowledge",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbadditionrequestacknowledge),
    &streaming_protobufs__sg_nbaddition_request_acknowledge__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBAdditionRequestReject",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbadditionrequestreject),
    &streaming_protobufs__sg_nbaddition_request_reject__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBModificationRequest",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbmodificationrequest),
    &streaming_protobufs__sg_nbmodification_request__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBModificationRequestAcknowledge",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbmodificationrequestacknowledge),
    &streaming_protobufs__sg_nbmodification_request_acknowledge__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBModificationRequestReject",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbmodificationrequestreject),
    &streaming_protobufs__sg_nbmodification_request_reject__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBModificationRequired",
    9,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbmodificationrequired),
    &streaming_protobufs__sg_nbmodification_required__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBModificationConfirm",
    10,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbmodificationconfirm),
    &streaming_protobufs__sg_nbmodification_confirm__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBModificationRefuse",
    11,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbmodificationrefuse),
    &streaming_protobufs__sg_nbmodification_refuse__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBReconfigurationComplete",
    12,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbreconfigurationcomplete),
    &streaming_protobufs__sg_nbreconfiguration_complete__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNbReleaseRequest",
    13,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbreleaserequest),
    &streaming_protobufs__sg_nbrelease_request__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNbReleaseRequestAcknowledge",
    14,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbreleaserequestacknowledge),
    &streaming_protobufs__sg_nbrelease_request_acknowledge__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNbReleaseRequired",
    15,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbreleaserequired),
    &streaming_protobufs__sg_nbrelease_required__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNbReleaseConfirm",
    16,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbreleaseconfirm),
    &streaming_protobufs__sg_nbrelease_confirm__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "snStatusTransfer",
    17,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, snstatustransfer),
    &streaming_protobufs__snstatus_transfer__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ueContextRelease",
    18,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, uecontextrelease),
    &streaming_protobufs__uecontext_release__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "secondaryRATDataUsageReport",
    19,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, secondaryratdatausagereport),
    &streaming_protobufs__secondary_ratdata_usage_report__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBChangeRequired",
    20,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbchangerequired),
    &streaming_protobufs__sg_nbchange_required__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBChangeConfirm",
    21,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbchangeconfirm),
    &streaming_protobufs__sg_nbchange_confirm__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBChangeRefuse",
    22,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbchangerefuse),
    &streaming_protobufs__sg_nbchange_refuse__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sgNBActivityNotification",
    23,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, sgnbactivitynotification),
    &streaming_protobufs__sg_nbactivity_notification__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "gNBStatusIndication",
    24,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__X2APStreaming, x2ap_message_case),
    offsetof(StreamingProtobufs__X2APStreaming, gnbstatusindication),
    &streaming_protobufs__gnbstatus_indication__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned streaming_protobufs__x2_apstreaming__field_indices_by_name[] = {
  23,   /* field[23] = gNBStatusIndication */
  0,   /* field[0] = header */
  1,   /* field[1] = rrcTransfer */
  18,   /* field[18] = secondaryRATDataUsageReport */
  22,   /* field[22] = sgNBActivityNotification */
  2,   /* field[2] = sgNBAdditionRequest */
  3,   /* field[3] = sgNBAdditionRequestAcknowledge */
  4,   /* field[4] = sgNBAdditionRequestReject */
  20,   /* field[20] = sgNBChangeConfirm */
  21,   /* field[21] = sgNBChangeRefuse */
  19,   /* field[19] = sgNBChangeRequired */
  9,   /* field[9] = sgNBModificationConfirm */
  10,   /* field[10] = sgNBModificationRefuse */
  5,   /* field[5] = sgNBModificationRequest */
  6,   /* field[6] = sgNBModificationRequestAcknowledge */
  7,   /* field[7] = sgNBModificationRequestReject */
  8,   /* field[8] = sgNBModificationRequired */
  11,   /* field[11] = sgNBReconfigurationComplete */
  15,   /* field[15] = sgNbReleaseConfirm */
  12,   /* field[12] = sgNbReleaseRequest */
  13,   /* field[13] = sgNbReleaseRequestAcknowledge */
  14,   /* field[14] = sgNbReleaseRequired */
  16,   /* field[16] = snStatusTransfer */
  17,   /* field[17] = ueContextRelease */
};
static const ProtobufCIntRange streaming_protobufs__x2_apstreaming__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 24 }
};
const ProtobufCMessageDescriptor streaming_protobufs__x2_apstreaming__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "streaming_protobufs.X2APStreaming",
  "X2APStreaming",
  "StreamingProtobufs__X2APStreaming",
  "streaming_protobufs",
  sizeof(StreamingProtobufs__X2APStreaming),
  24,
  streaming_protobufs__x2_apstreaming__field_descriptors,
  streaming_protobufs__x2_apstreaming__field_indices_by_name,
  1,  streaming_protobufs__x2_apstreaming__number_ranges,
  (ProtobufCMessageInit) streaming_protobufs__x2_apstreaming__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor streaming_protobufs__x2_apstreaming_header__field_descriptors[3] =
{
  {
    "protobuf_revision",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__X2APStreamingHeader, protobuf_revision),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "gNbID",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__X2APStreamingHeader, gnbid),
    &google__protobuf__string_value__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__X2APStreamingHeader, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned streaming_protobufs__x2_apstreaming_header__field_indices_by_name[] = {
  1,   /* field[1] = gNbID */
  0,   /* field[0] = protobuf_revision */
  2,   /* field[2] = timestamp */
};
static const ProtobufCIntRange streaming_protobufs__x2_apstreaming_header__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor streaming_protobufs__x2_apstreaming_header__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "streaming_protobufs.X2APStreamingHeader",
  "X2APStreamingHeader",
  "StreamingProtobufs__X2APStreamingHeader",
  "streaming_protobufs",
  sizeof(StreamingProtobufs__X2APStreamingHeader),
  3,
  streaming_protobufs__x2_apstreaming_header__field_descriptors,
  streaming_protobufs__x2_apstreaming_header__field_indices_by_name,
  1,  streaming_protobufs__x2_apstreaming_header__number_ranges,
  (ProtobufCMessageInit) streaming_protobufs__x2_apstreaming_header__init,
  NULL,NULL,NULL    /* reserved[123] */
};
