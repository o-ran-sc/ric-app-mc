/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: rrc_failure_information.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "rrc_failure_information.pb-c.h"
void   streaming_protobufs__failure_information__init
                     (StreamingProtobufs__FailureInformation         *message)
{
  static const StreamingProtobufs__FailureInformation init_value = STREAMING_PROTOBUFS__FAILURE_INFORMATION__INIT;
  *message = init_value;
}
size_t streaming_protobufs__failure_information__get_packed_size
                     (const StreamingProtobufs__FailureInformation *message)
{
  assert(message->base.descriptor == &streaming_protobufs__failure_information__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t streaming_protobufs__failure_information__pack
                     (const StreamingProtobufs__FailureInformation *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &streaming_protobufs__failure_information__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t streaming_protobufs__failure_information__pack_to_buffer
                     (const StreamingProtobufs__FailureInformation *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &streaming_protobufs__failure_information__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StreamingProtobufs__FailureInformation *
       streaming_protobufs__failure_information__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StreamingProtobufs__FailureInformation *)
     protobuf_c_message_unpack (&streaming_protobufs__failure_information__descriptor,
                                allocator, len, data);
}
void   streaming_protobufs__failure_information__free_unpacked
                     (StreamingProtobufs__FailureInformation *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &streaming_protobufs__failure_information__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   streaming_protobufs__failure_information__ies__init
                     (StreamingProtobufs__FailureInformationIEs         *message)
{
  static const StreamingProtobufs__FailureInformationIEs init_value = STREAMING_PROTOBUFS__FAILURE_INFORMATION__IES__INIT;
  *message = init_value;
}
size_t streaming_protobufs__failure_information__ies__get_packed_size
                     (const StreamingProtobufs__FailureInformationIEs *message)
{
  assert(message->base.descriptor == &streaming_protobufs__failure_information__ies__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t streaming_protobufs__failure_information__ies__pack
                     (const StreamingProtobufs__FailureInformationIEs *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &streaming_protobufs__failure_information__ies__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t streaming_protobufs__failure_information__ies__pack_to_buffer
                     (const StreamingProtobufs__FailureInformationIEs *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &streaming_protobufs__failure_information__ies__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StreamingProtobufs__FailureInformationIEs *
       streaming_protobufs__failure_information__ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StreamingProtobufs__FailureInformationIEs *)
     protobuf_c_message_unpack (&streaming_protobufs__failure_information__ies__descriptor,
                                allocator, len, data);
}
void   streaming_protobufs__failure_information__ies__free_unpacked
                     (StreamingProtobufs__FailureInformationIEs *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &streaming_protobufs__failure_information__ies__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   streaming_protobufs__failure_info_rlc__bearer__init
                     (StreamingProtobufs__FailureInfoRLCBearer         *message)
{
  static const StreamingProtobufs__FailureInfoRLCBearer init_value = STREAMING_PROTOBUFS__FAILURE_INFO_RLC__BEARER__INIT;
  *message = init_value;
}
size_t streaming_protobufs__failure_info_rlc__bearer__get_packed_size
                     (const StreamingProtobufs__FailureInfoRLCBearer *message)
{
  assert(message->base.descriptor == &streaming_protobufs__failure_info_rlc__bearer__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t streaming_protobufs__failure_info_rlc__bearer__pack
                     (const StreamingProtobufs__FailureInfoRLCBearer *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &streaming_protobufs__failure_info_rlc__bearer__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t streaming_protobufs__failure_info_rlc__bearer__pack_to_buffer
                     (const StreamingProtobufs__FailureInfoRLCBearer *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &streaming_protobufs__failure_info_rlc__bearer__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StreamingProtobufs__FailureInfoRLCBearer *
       streaming_protobufs__failure_info_rlc__bearer__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StreamingProtobufs__FailureInfoRLCBearer *)
     protobuf_c_message_unpack (&streaming_protobufs__failure_info_rlc__bearer__descriptor,
                                allocator, len, data);
}
void   streaming_protobufs__failure_info_rlc__bearer__free_unpacked
                     (StreamingProtobufs__FailureInfoRLCBearer *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &streaming_protobufs__failure_info_rlc__bearer__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor streaming_protobufs__failure_information__field_descriptors[1] =
{
  {
    "failureInformation",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__FailureInformation, failureinformation),
    &streaming_protobufs__failure_information__ies__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned streaming_protobufs__failure_information__field_indices_by_name[] = {
  0,   /* field[0] = failureInformation */
};
static const ProtobufCIntRange streaming_protobufs__failure_information__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor streaming_protobufs__failure_information__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "streaming_protobufs.FailureInformation",
  "FailureInformation",
  "StreamingProtobufs__FailureInformation",
  "streaming_protobufs",
  sizeof(StreamingProtobufs__FailureInformation),
  1,
  streaming_protobufs__failure_information__field_descriptors,
  streaming_protobufs__failure_information__field_indices_by_name,
  1,  streaming_protobufs__failure_information__number_ranges,
  (ProtobufCMessageInit) streaming_protobufs__failure_information__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor streaming_protobufs__failure_information__ies__field_descriptors[2] =
{
  {
    "failureInfoRLC_Bearer",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__FailureInformationIEs, failureinforlc_bearer),
    &streaming_protobufs__failure_info_rlc__bearer__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "lateNonCriticalExtension",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__FailureInformationIEs, latenoncriticalextension),
    &google__protobuf__bytes_value__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned streaming_protobufs__failure_information__ies__field_indices_by_name[] = {
  0,   /* field[0] = failureInfoRLC_Bearer */
  1,   /* field[1] = lateNonCriticalExtension */
};
static const ProtobufCIntRange streaming_protobufs__failure_information__ies__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor streaming_protobufs__failure_information__ies__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "streaming_protobufs.FailureInformation_IEs",
  "FailureInformationIEs",
  "StreamingProtobufs__FailureInformationIEs",
  "streaming_protobufs",
  sizeof(StreamingProtobufs__FailureInformationIEs),
  2,
  streaming_protobufs__failure_information__ies__field_descriptors,
  streaming_protobufs__failure_information__ies__field_indices_by_name,
  1,  streaming_protobufs__failure_information__ies__number_ranges,
  (ProtobufCMessageInit) streaming_protobufs__failure_information__ies__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue streaming_protobufs__failure_info_rlc__bearer__failure_type__enum_values_by_number[2] =
{
  { "protobuf_unspecified", "STREAMING_PROTOBUFS__FAILURE_INFO_RLC__BEARER__FAILURE_TYPE__protobuf_unspecified", 0 },
  { "duplication", "STREAMING_PROTOBUFS__FAILURE_INFO_RLC__BEARER__FAILURE_TYPE__duplication", 1 },
};
static const ProtobufCIntRange streaming_protobufs__failure_info_rlc__bearer__failure_type__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex streaming_protobufs__failure_info_rlc__bearer__failure_type__enum_values_by_name[2] =
{
  { "duplication", 1 },
  { "protobuf_unspecified", 0 },
};
const ProtobufCEnumDescriptor streaming_protobufs__failure_info_rlc__bearer__failure_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "streaming_protobufs.FailureInfoRLC_Bearer.FailureType",
  "FailureType",
  "StreamingProtobufs__FailureInfoRLCBearer__FailureType",
  "streaming_protobufs",
  2,
  streaming_protobufs__failure_info_rlc__bearer__failure_type__enum_values_by_number,
  2,
  streaming_protobufs__failure_info_rlc__bearer__failure_type__enum_values_by_name,
  1,
  streaming_protobufs__failure_info_rlc__bearer__failure_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor streaming_protobufs__failure_info_rlc__bearer__field_descriptors[3] =
{
  {
    "cellGroupId",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__FailureInfoRLCBearer, cellgroupid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "logicalChannelIdentity",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__FailureInfoRLCBearer, logicalchannelidentity),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "failureType",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__FailureInfoRLCBearer, failuretype),
    &streaming_protobufs__failure_info_rlc__bearer__failure_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned streaming_protobufs__failure_info_rlc__bearer__field_indices_by_name[] = {
  0,   /* field[0] = cellGroupId */
  2,   /* field[2] = failureType */
  1,   /* field[1] = logicalChannelIdentity */
};
static const ProtobufCIntRange streaming_protobufs__failure_info_rlc__bearer__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor streaming_protobufs__failure_info_rlc__bearer__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "streaming_protobufs.FailureInfoRLC_Bearer",
  "FailureInfoRLCBearer",
  "StreamingProtobufs__FailureInfoRLCBearer",
  "streaming_protobufs",
  sizeof(StreamingProtobufs__FailureInfoRLCBearer),
  3,
  streaming_protobufs__failure_info_rlc__bearer__field_descriptors,
  streaming_protobufs__failure_info_rlc__bearer__field_indices_by_name,
  1,  streaming_protobufs__failure_info_rlc__bearer__number_ranges,
  (ProtobufCMessageInit) streaming_protobufs__failure_info_rlc__bearer__init,
  NULL,NULL,NULL    /* reserved[123] */
};
