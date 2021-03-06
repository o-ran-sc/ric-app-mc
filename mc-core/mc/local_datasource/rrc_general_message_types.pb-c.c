/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: rrc_general_message_types.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "rrc_general_message_types.pb-c.h"
void   streaming_protobufs__rrccontainer__init
                     (StreamingProtobufs__RRCContainer         *message)
{
  static const StreamingProtobufs__RRCContainer init_value = STREAMING_PROTOBUFS__RRCCONTAINER__INIT;
  *message = init_value;
}
size_t streaming_protobufs__rrccontainer__get_packed_size
                     (const StreamingProtobufs__RRCContainer *message)
{
  assert(message->base.descriptor == &streaming_protobufs__rrccontainer__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t streaming_protobufs__rrccontainer__pack
                     (const StreamingProtobufs__RRCContainer *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &streaming_protobufs__rrccontainer__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t streaming_protobufs__rrccontainer__pack_to_buffer
                     (const StreamingProtobufs__RRCContainer *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &streaming_protobufs__rrccontainer__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StreamingProtobufs__RRCContainer *
       streaming_protobufs__rrccontainer__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StreamingProtobufs__RRCContainer *)
     protobuf_c_message_unpack (&streaming_protobufs__rrccontainer__descriptor,
                                allocator, len, data);
}
void   streaming_protobufs__rrccontainer__free_unpacked
                     (StreamingProtobufs__RRCContainer *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &streaming_protobufs__rrccontainer__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   streaming_protobufs__ul__dcch__message_type__init
                     (StreamingProtobufs__ULDCCHMessageType         *message)
{
  static const StreamingProtobufs__ULDCCHMessageType init_value = STREAMING_PROTOBUFS__UL__DCCH__MESSAGE_TYPE__INIT;
  *message = init_value;
}
size_t streaming_protobufs__ul__dcch__message_type__get_packed_size
                     (const StreamingProtobufs__ULDCCHMessageType *message)
{
  assert(message->base.descriptor == &streaming_protobufs__ul__dcch__message_type__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t streaming_protobufs__ul__dcch__message_type__pack
                     (const StreamingProtobufs__ULDCCHMessageType *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &streaming_protobufs__ul__dcch__message_type__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t streaming_protobufs__ul__dcch__message_type__pack_to_buffer
                     (const StreamingProtobufs__ULDCCHMessageType *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &streaming_protobufs__ul__dcch__message_type__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StreamingProtobufs__ULDCCHMessageType *
       streaming_protobufs__ul__dcch__message_type__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StreamingProtobufs__ULDCCHMessageType *)
     protobuf_c_message_unpack (&streaming_protobufs__ul__dcch__message_type__descriptor,
                                allocator, len, data);
}
void   streaming_protobufs__ul__dcch__message_type__free_unpacked
                     (StreamingProtobufs__ULDCCHMessageType *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &streaming_protobufs__ul__dcch__message_type__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor streaming_protobufs__rrccontainer__field_descriptors[1] =
{
  {
    "UL_DCCH_message",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__RRCContainer, ul_dcch_message),
    &streaming_protobufs__ul__dcch__message_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned streaming_protobufs__rrccontainer__field_indices_by_name[] = {
  0,   /* field[0] = UL_DCCH_message */
};
static const ProtobufCIntRange streaming_protobufs__rrccontainer__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor streaming_protobufs__rrccontainer__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "streaming_protobufs.RRCContainer",
  "RRCContainer",
  "StreamingProtobufs__RRCContainer",
  "streaming_protobufs",
  sizeof(StreamingProtobufs__RRCContainer),
  1,
  streaming_protobufs__rrccontainer__field_descriptors,
  streaming_protobufs__rrccontainer__field_indices_by_name,
  1,  streaming_protobufs__rrccontainer__number_ranges,
  (ProtobufCMessageInit) streaming_protobufs__rrccontainer__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor streaming_protobufs__ul__dcch__message_type__field_descriptors[2] =
{
  {
    "measurementReport",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__ULDCCHMessageType, c1_case),
    offsetof(StreamingProtobufs__ULDCCHMessageType, measurementreport),
    &streaming_protobufs__measurement_report__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "failureInformation",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__ULDCCHMessageType, c1_case),
    offsetof(StreamingProtobufs__ULDCCHMessageType, failureinformation),
    &streaming_protobufs__failure_information__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned streaming_protobufs__ul__dcch__message_type__field_indices_by_name[] = {
  1,   /* field[1] = failureInformation */
  0,   /* field[0] = measurementReport */
};
static const ProtobufCIntRange streaming_protobufs__ul__dcch__message_type__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor streaming_protobufs__ul__dcch__message_type__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "streaming_protobufs.UL_DCCH_MessageType",
  "ULDCCHMessageType",
  "StreamingProtobufs__ULDCCHMessageType",
  "streaming_protobufs",
  sizeof(StreamingProtobufs__ULDCCHMessageType),
  2,
  streaming_protobufs__ul__dcch__message_type__field_descriptors,
  streaming_protobufs__ul__dcch__message_type__field_indices_by_name,
  1,  streaming_protobufs__ul__dcch__message_type__number_ranges,
  (ProtobufCMessageInit) streaming_protobufs__ul__dcch__message_type__init,
  NULL,NULL,NULL    /* reserved[123] */
};
