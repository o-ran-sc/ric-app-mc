/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: rrc_general_message_types.proto */

#ifndef PROTOBUF_C_rrc_5fgeneral_5fmessage_5ftypes_2eproto__INCLUDED
#define PROTOBUF_C_rrc_5fgeneral_5fmessage_5ftypes_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "rrc_measurement_report.pb-c.h"
#include "rrc_failure_information.pb-c.h"

typedef struct _StreamingProtobufs__RRCContainer StreamingProtobufs__RRCContainer;
typedef struct _StreamingProtobufs__ULDCCHMessageType StreamingProtobufs__ULDCCHMessageType;


/* --- enums --- */


/* --- messages --- */

struct  _StreamingProtobufs__RRCContainer
{
  ProtobufCMessage base;
  /*
   *oneof id_RRCContainer {
   *UL_DCCH_MessageType UL_DCCH_message = 1;
   *UL_DCCH_MessageType_36331 UL_DCCH_message_36331 = 2;
   *DL_DCCH_MessageType_36331 DL_DCCH_message_36331 = 3;
   *}
   */
  StreamingProtobufs__ULDCCHMessageType *ul_dcch_message;
};
#define STREAMING_PROTOBUFS__RRCCONTAINER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&streaming_protobufs__rrccontainer__descriptor) \
    , NULL }


typedef enum {
  STREAMING_PROTOBUFS__UL__DCCH__MESSAGE_TYPE__C1__NOT_SET = 0,
  STREAMING_PROTOBUFS__UL__DCCH__MESSAGE_TYPE__C1_MEASUREMENT_REPORT = 1,
  STREAMING_PROTOBUFS__UL__DCCH__MESSAGE_TYPE__C1_FAILURE_INFORMATION = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(STREAMING_PROTOBUFS__UL__DCCH__MESSAGE_TYPE__C1)
} StreamingProtobufs__ULDCCHMessageType__C1Case;

struct  _StreamingProtobufs__ULDCCHMessageType
{
  ProtobufCMessage base;
  StreamingProtobufs__ULDCCHMessageType__C1Case c1_case;
  union {
    StreamingProtobufs__MeasurementReport *measurementreport;
    StreamingProtobufs__FailureInformation *failureinformation;
  };
};
#define STREAMING_PROTOBUFS__UL__DCCH__MESSAGE_TYPE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&streaming_protobufs__ul__dcch__message_type__descriptor) \
    , STREAMING_PROTOBUFS__UL__DCCH__MESSAGE_TYPE__C1__NOT_SET, {0} }


/* StreamingProtobufs__RRCContainer methods */
void   streaming_protobufs__rrccontainer__init
                     (StreamingProtobufs__RRCContainer         *message);
size_t streaming_protobufs__rrccontainer__get_packed_size
                     (const StreamingProtobufs__RRCContainer   *message);
size_t streaming_protobufs__rrccontainer__pack
                     (const StreamingProtobufs__RRCContainer   *message,
                      uint8_t             *out);
size_t streaming_protobufs__rrccontainer__pack_to_buffer
                     (const StreamingProtobufs__RRCContainer   *message,
                      ProtobufCBuffer     *buffer);
StreamingProtobufs__RRCContainer *
       streaming_protobufs__rrccontainer__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   streaming_protobufs__rrccontainer__free_unpacked
                     (StreamingProtobufs__RRCContainer *message,
                      ProtobufCAllocator *allocator);
/* StreamingProtobufs__ULDCCHMessageType methods */
void   streaming_protobufs__ul__dcch__message_type__init
                     (StreamingProtobufs__ULDCCHMessageType         *message);
size_t streaming_protobufs__ul__dcch__message_type__get_packed_size
                     (const StreamingProtobufs__ULDCCHMessageType   *message);
size_t streaming_protobufs__ul__dcch__message_type__pack
                     (const StreamingProtobufs__ULDCCHMessageType   *message,
                      uint8_t             *out);
size_t streaming_protobufs__ul__dcch__message_type__pack_to_buffer
                     (const StreamingProtobufs__ULDCCHMessageType   *message,
                      ProtobufCBuffer     *buffer);
StreamingProtobufs__ULDCCHMessageType *
       streaming_protobufs__ul__dcch__message_type__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   streaming_protobufs__ul__dcch__message_type__free_unpacked
                     (StreamingProtobufs__ULDCCHMessageType *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*StreamingProtobufs__RRCContainer_Closure)
                 (const StreamingProtobufs__RRCContainer *message,
                  void *closure_data);
typedef void (*StreamingProtobufs__ULDCCHMessageType_Closure)
                 (const StreamingProtobufs__ULDCCHMessageType *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor streaming_protobufs__rrccontainer__descriptor;
extern const ProtobufCMessageDescriptor streaming_protobufs__ul__dcch__message_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_rrc_5fgeneral_5fmessage_5ftypes_2eproto__INCLUDED */
