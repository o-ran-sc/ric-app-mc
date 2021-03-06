/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: rrc_failure_information.proto */

#ifndef PROTOBUF_C_rrc_5ffailure_5finformation_2eproto__INCLUDED
#define PROTOBUF_C_rrc_5ffailure_5finformation_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "google/protobuf/wrappers.pb-c.h"

typedef struct _StreamingProtobufs__FailureInformation StreamingProtobufs__FailureInformation;
typedef struct _StreamingProtobufs__FailureInformationIEs StreamingProtobufs__FailureInformationIEs;
typedef struct _StreamingProtobufs__FailureInfoRLCBearer StreamingProtobufs__FailureInfoRLCBearer;


/* --- enums --- */

typedef enum _StreamingProtobufs__FailureInfoRLCBearer__FailureType {
  STREAMING_PROTOBUFS__FAILURE_INFO_RLC__BEARER__FAILURE_TYPE__protobuf_unspecified = 0,
  STREAMING_PROTOBUFS__FAILURE_INFO_RLC__BEARER__FAILURE_TYPE__duplication = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(STREAMING_PROTOBUFS__FAILURE_INFO_RLC__BEARER__FAILURE_TYPE)
} StreamingProtobufs__FailureInfoRLCBearer__FailureType;

/* --- messages --- */

struct  _StreamingProtobufs__FailureInformation
{
  ProtobufCMessage base;
  StreamingProtobufs__FailureInformationIEs *failureinformation;
};
#define STREAMING_PROTOBUFS__FAILURE_INFORMATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&streaming_protobufs__failure_information__descriptor) \
    , NULL }


struct  _StreamingProtobufs__FailureInformationIEs
{
  ProtobufCMessage base;
  StreamingProtobufs__FailureInfoRLCBearer *failureinforlc_bearer;
  Google__Protobuf__BytesValue *latenoncriticalextension;
};
#define STREAMING_PROTOBUFS__FAILURE_INFORMATION__IES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&streaming_protobufs__failure_information__ies__descriptor) \
    , NULL, NULL }


struct  _StreamingProtobufs__FailureInfoRLCBearer
{
  ProtobufCMessage base;
  uint32_t cellgroupid;
  uint32_t logicalchannelidentity;
  StreamingProtobufs__FailureInfoRLCBearer__FailureType failuretype;
};
#define STREAMING_PROTOBUFS__FAILURE_INFO_RLC__BEARER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&streaming_protobufs__failure_info_rlc__bearer__descriptor) \
    , 0, 0, STREAMING_PROTOBUFS__FAILURE_INFO_RLC__BEARER__FAILURE_TYPE__protobuf_unspecified }


/* StreamingProtobufs__FailureInformation methods */
void   streaming_protobufs__failure_information__init
                     (StreamingProtobufs__FailureInformation         *message);
size_t streaming_protobufs__failure_information__get_packed_size
                     (const StreamingProtobufs__FailureInformation   *message);
size_t streaming_protobufs__failure_information__pack
                     (const StreamingProtobufs__FailureInformation   *message,
                      uint8_t             *out);
size_t streaming_protobufs__failure_information__pack_to_buffer
                     (const StreamingProtobufs__FailureInformation   *message,
                      ProtobufCBuffer     *buffer);
StreamingProtobufs__FailureInformation *
       streaming_protobufs__failure_information__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   streaming_protobufs__failure_information__free_unpacked
                     (StreamingProtobufs__FailureInformation *message,
                      ProtobufCAllocator *allocator);
/* StreamingProtobufs__FailureInformationIEs methods */
void   streaming_protobufs__failure_information__ies__init
                     (StreamingProtobufs__FailureInformationIEs         *message);
size_t streaming_protobufs__failure_information__ies__get_packed_size
                     (const StreamingProtobufs__FailureInformationIEs   *message);
size_t streaming_protobufs__failure_information__ies__pack
                     (const StreamingProtobufs__FailureInformationIEs   *message,
                      uint8_t             *out);
size_t streaming_protobufs__failure_information__ies__pack_to_buffer
                     (const StreamingProtobufs__FailureInformationIEs   *message,
                      ProtobufCBuffer     *buffer);
StreamingProtobufs__FailureInformationIEs *
       streaming_protobufs__failure_information__ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   streaming_protobufs__failure_information__ies__free_unpacked
                     (StreamingProtobufs__FailureInformationIEs *message,
                      ProtobufCAllocator *allocator);
/* StreamingProtobufs__FailureInfoRLCBearer methods */
void   streaming_protobufs__failure_info_rlc__bearer__init
                     (StreamingProtobufs__FailureInfoRLCBearer         *message);
size_t streaming_protobufs__failure_info_rlc__bearer__get_packed_size
                     (const StreamingProtobufs__FailureInfoRLCBearer   *message);
size_t streaming_protobufs__failure_info_rlc__bearer__pack
                     (const StreamingProtobufs__FailureInfoRLCBearer   *message,
                      uint8_t             *out);
size_t streaming_protobufs__failure_info_rlc__bearer__pack_to_buffer
                     (const StreamingProtobufs__FailureInfoRLCBearer   *message,
                      ProtobufCBuffer     *buffer);
StreamingProtobufs__FailureInfoRLCBearer *
       streaming_protobufs__failure_info_rlc__bearer__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   streaming_protobufs__failure_info_rlc__bearer__free_unpacked
                     (StreamingProtobufs__FailureInfoRLCBearer *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*StreamingProtobufs__FailureInformation_Closure)
                 (const StreamingProtobufs__FailureInformation *message,
                  void *closure_data);
typedef void (*StreamingProtobufs__FailureInformationIEs_Closure)
                 (const StreamingProtobufs__FailureInformationIEs *message,
                  void *closure_data);
typedef void (*StreamingProtobufs__FailureInfoRLCBearer_Closure)
                 (const StreamingProtobufs__FailureInfoRLCBearer *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor streaming_protobufs__failure_information__descriptor;
extern const ProtobufCMessageDescriptor streaming_protobufs__failure_information__ies__descriptor;
extern const ProtobufCMessageDescriptor streaming_protobufs__failure_info_rlc__bearer__descriptor;
extern const ProtobufCEnumDescriptor    streaming_protobufs__failure_info_rlc__bearer__failure_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_rrc_5ffailure_5finformation_2eproto__INCLUDED */
