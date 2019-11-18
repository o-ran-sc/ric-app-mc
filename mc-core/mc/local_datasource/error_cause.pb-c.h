/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: error_cause.proto */

#ifndef PROTOBUF_C_error_5fcause_2eproto__INCLUDED
#define PROTOBUF_C_error_5fcause_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Uenibstreamprotobuf__Cause Uenibstreamprotobuf__Cause;
typedef struct _Uenibstreamprotobuf__CauseRadioNetwork Uenibstreamprotobuf__CauseRadioNetwork;
typedef struct _Uenibstreamprotobuf__CauseTransport Uenibstreamprotobuf__CauseTransport;
typedef struct _Uenibstreamprotobuf__CauseProtocol Uenibstreamprotobuf__CauseProtocol;
typedef struct _Uenibstreamprotobuf__CauseMisc Uenibstreamprotobuf__CauseMisc;


/* --- enums --- */

typedef enum _Uenibstreamprotobuf__CauseRadioNetwork__Value {
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__protobuf_unspecified = 0,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__handover_desirable_for_radio_reasons = 1,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__time_critical_handover = 2,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__resource_optimisation_handover = 3,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__reduce_load_in_serving_cell = 4,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__partial_handover = 5,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__unknown_new_eNB_UE_X2AP_ID = 6,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__unknown_old_eNB_UE_X2AP_ID = 7,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__unknown_pair_of_UE_X2AP_ID = 8,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__ho_target_not_allowed = 9,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__tx2relocoverall_expiry = 10,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__trelocprep_expiry = 11,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__cell_not_available = 12,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__no_radio_resources_available_in_target_cell = 13,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__invalid_MME_GroupID = 14,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__unknown_MME_Code = 15,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__encryption_and_or_integrity_protection_algorithms_not_supported = 16,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__reportCharacteristicsEmpty = 17,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__noReportPeriodicity = 18,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__existingMeasurementID = 19,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__unknown_eNB_Measurement_ID = 20,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__measurement_temporarily_not_available = 21,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__unspecified = 22,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__load_balancing = 23,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__handover_optimisation = 24,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__value_out_of_allowed_range = 25,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__multiple_E_RAB_ID_instances = 26,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__switch_off_ongoing = 27,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__not_supported_QCI_value = 28,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__measurement_not_supported_for_the_object = 29,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__tDCoverall_expiry = 30,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__tDCprep_expiry = 31,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__action_desirable_for_radio_reasons = 32,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__reduce_load = 33,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__resource_optimisation = 34,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__time_critical_action = 35,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__target_not_allowed = 36,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__no_radio_resources_available = 37,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__invalid_QoS_combination = 38,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__encryption_algorithms_not_aupported = 39,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__procedure_cancelled = 40,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__rRM_purpose = 41,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__improve_user_bit_rate = 42,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__user_inactivity = 43,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__radio_connection_with_UE_lost = 44,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__failure_in_the_radio_interface_procedure = 45,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__bearer_option_not_supported = 46,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__mCG_Mobility = 47,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__sCG_Mobility = 48,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__count_reaches_max_value = 49,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__unknown_old_en_gNB_UE_X2AP_ID = 50,
  UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__pDCP_Overload = 51
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE)
} Uenibstreamprotobuf__CauseRadioNetwork__Value;
typedef enum _Uenibstreamprotobuf__CauseTransport__Value {
  UENIBSTREAMPROTOBUF__CAUSE_TRANSPORT__VALUE__protobuf_unspecified = 0,
  UENIBSTREAMPROTOBUF__CAUSE_TRANSPORT__VALUE__transport_resource_unavailable = 1,
  UENIBSTREAMPROTOBUF__CAUSE_TRANSPORT__VALUE__unspecified = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(UENIBSTREAMPROTOBUF__CAUSE_TRANSPORT__VALUE)
} Uenibstreamprotobuf__CauseTransport__Value;
typedef enum _Uenibstreamprotobuf__CauseProtocol__Value {
  UENIBSTREAMPROTOBUF__CAUSE_PROTOCOL__VALUE__protobuf_unspecified = 0,
  UENIBSTREAMPROTOBUF__CAUSE_PROTOCOL__VALUE__transfer_syntax_error = 1,
  UENIBSTREAMPROTOBUF__CAUSE_PROTOCOL__VALUE__abstract_syntax_error_reject = 2,
  UENIBSTREAMPROTOBUF__CAUSE_PROTOCOL__VALUE__abstract_syntax_error_ignore_and_notify = 3,
  UENIBSTREAMPROTOBUF__CAUSE_PROTOCOL__VALUE__message_not_compatible_with_receiver_state = 4,
  UENIBSTREAMPROTOBUF__CAUSE_PROTOCOL__VALUE__semantic_error = 5,
  UENIBSTREAMPROTOBUF__CAUSE_PROTOCOL__VALUE__unspecified = 6,
  UENIBSTREAMPROTOBUF__CAUSE_PROTOCOL__VALUE__abstract_syntax_error_falsely_constructed_message = 7
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(UENIBSTREAMPROTOBUF__CAUSE_PROTOCOL__VALUE)
} Uenibstreamprotobuf__CauseProtocol__Value;
typedef enum _Uenibstreamprotobuf__CauseMisc__Value {
  UENIBSTREAMPROTOBUF__CAUSE_MISC__VALUE__protobuf_unspecified = 0,
  UENIBSTREAMPROTOBUF__CAUSE_MISC__VALUE__control_processing_overload = 1,
  UENIBSTREAMPROTOBUF__CAUSE_MISC__VALUE__hardware_failure = 2,
  UENIBSTREAMPROTOBUF__CAUSE_MISC__VALUE__om_intervention = 3,
  UENIBSTREAMPROTOBUF__CAUSE_MISC__VALUE__not_enough_user_plane_processing_resources = 4,
  UENIBSTREAMPROTOBUF__CAUSE_MISC__VALUE__unspecified = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(UENIBSTREAMPROTOBUF__CAUSE_MISC__VALUE)
} Uenibstreamprotobuf__CauseMisc__Value;

/* --- messages --- */

typedef enum {
  UENIBSTREAMPROTOBUF__CAUSE__VALUE__NOT_SET = 0,
  UENIBSTREAMPROTOBUF__CAUSE__VALUE_RADIO_NETWORK = 1,
  UENIBSTREAMPROTOBUF__CAUSE__VALUE_TRANSPORT = 2,
  UENIBSTREAMPROTOBUF__CAUSE__VALUE_PROTOCOL = 3,
  UENIBSTREAMPROTOBUF__CAUSE__VALUE_MISC = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(UENIBSTREAMPROTOBUF__CAUSE__VALUE)
} Uenibstreamprotobuf__Cause__ValueCase;

struct  _Uenibstreamprotobuf__Cause
{
  ProtobufCMessage base;
  Uenibstreamprotobuf__Cause__ValueCase value_case;
  union {
    Uenibstreamprotobuf__CauseRadioNetwork *radionetwork;
    Uenibstreamprotobuf__CauseTransport *transport;
    Uenibstreamprotobuf__CauseProtocol *protocol;
    Uenibstreamprotobuf__CauseMisc *misc;
  };
};
#define UENIBSTREAMPROTOBUF__CAUSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__cause__descriptor) \
    , UENIBSTREAMPROTOBUF__CAUSE__VALUE__NOT_SET, {0} }


struct  _Uenibstreamprotobuf__CauseRadioNetwork
{
  ProtobufCMessage base;
  Uenibstreamprotobuf__CauseRadioNetwork__Value value;
};
#define UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__cause_radio_network__descriptor) \
    , UENIBSTREAMPROTOBUF__CAUSE_RADIO_NETWORK__VALUE__protobuf_unspecified }


struct  _Uenibstreamprotobuf__CauseTransport
{
  ProtobufCMessage base;
  Uenibstreamprotobuf__CauseTransport__Value value;
};
#define UENIBSTREAMPROTOBUF__CAUSE_TRANSPORT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__cause_transport__descriptor) \
    , UENIBSTREAMPROTOBUF__CAUSE_TRANSPORT__VALUE__protobuf_unspecified }


struct  _Uenibstreamprotobuf__CauseProtocol
{
  ProtobufCMessage base;
  Uenibstreamprotobuf__CauseProtocol__Value value;
};
#define UENIBSTREAMPROTOBUF__CAUSE_PROTOCOL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__cause_protocol__descriptor) \
    , UENIBSTREAMPROTOBUF__CAUSE_PROTOCOL__VALUE__protobuf_unspecified }


struct  _Uenibstreamprotobuf__CauseMisc
{
  ProtobufCMessage base;
  Uenibstreamprotobuf__CauseMisc__Value value;
};
#define UENIBSTREAMPROTOBUF__CAUSE_MISC__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__cause_misc__descriptor) \
    , UENIBSTREAMPROTOBUF__CAUSE_MISC__VALUE__protobuf_unspecified }


/* Uenibstreamprotobuf__Cause methods */
void   uenibstreamprotobuf__cause__init
                     (Uenibstreamprotobuf__Cause         *message);
size_t uenibstreamprotobuf__cause__get_packed_size
                     (const Uenibstreamprotobuf__Cause   *message);
size_t uenibstreamprotobuf__cause__pack
                     (const Uenibstreamprotobuf__Cause   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__cause__pack_to_buffer
                     (const Uenibstreamprotobuf__Cause   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__Cause *
       uenibstreamprotobuf__cause__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__cause__free_unpacked
                     (Uenibstreamprotobuf__Cause *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__CauseRadioNetwork methods */
void   uenibstreamprotobuf__cause_radio_network__init
                     (Uenibstreamprotobuf__CauseRadioNetwork         *message);
size_t uenibstreamprotobuf__cause_radio_network__get_packed_size
                     (const Uenibstreamprotobuf__CauseRadioNetwork   *message);
size_t uenibstreamprotobuf__cause_radio_network__pack
                     (const Uenibstreamprotobuf__CauseRadioNetwork   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__cause_radio_network__pack_to_buffer
                     (const Uenibstreamprotobuf__CauseRadioNetwork   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__CauseRadioNetwork *
       uenibstreamprotobuf__cause_radio_network__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__cause_radio_network__free_unpacked
                     (Uenibstreamprotobuf__CauseRadioNetwork *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__CauseTransport methods */
void   uenibstreamprotobuf__cause_transport__init
                     (Uenibstreamprotobuf__CauseTransport         *message);
size_t uenibstreamprotobuf__cause_transport__get_packed_size
                     (const Uenibstreamprotobuf__CauseTransport   *message);
size_t uenibstreamprotobuf__cause_transport__pack
                     (const Uenibstreamprotobuf__CauseTransport   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__cause_transport__pack_to_buffer
                     (const Uenibstreamprotobuf__CauseTransport   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__CauseTransport *
       uenibstreamprotobuf__cause_transport__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__cause_transport__free_unpacked
                     (Uenibstreamprotobuf__CauseTransport *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__CauseProtocol methods */
void   uenibstreamprotobuf__cause_protocol__init
                     (Uenibstreamprotobuf__CauseProtocol         *message);
size_t uenibstreamprotobuf__cause_protocol__get_packed_size
                     (const Uenibstreamprotobuf__CauseProtocol   *message);
size_t uenibstreamprotobuf__cause_protocol__pack
                     (const Uenibstreamprotobuf__CauseProtocol   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__cause_protocol__pack_to_buffer
                     (const Uenibstreamprotobuf__CauseProtocol   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__CauseProtocol *
       uenibstreamprotobuf__cause_protocol__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__cause_protocol__free_unpacked
                     (Uenibstreamprotobuf__CauseProtocol *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__CauseMisc methods */
void   uenibstreamprotobuf__cause_misc__init
                     (Uenibstreamprotobuf__CauseMisc         *message);
size_t uenibstreamprotobuf__cause_misc__get_packed_size
                     (const Uenibstreamprotobuf__CauseMisc   *message);
size_t uenibstreamprotobuf__cause_misc__pack
                     (const Uenibstreamprotobuf__CauseMisc   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__cause_misc__pack_to_buffer
                     (const Uenibstreamprotobuf__CauseMisc   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__CauseMisc *
       uenibstreamprotobuf__cause_misc__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__cause_misc__free_unpacked
                     (Uenibstreamprotobuf__CauseMisc *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Uenibstreamprotobuf__Cause_Closure)
                 (const Uenibstreamprotobuf__Cause *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__CauseRadioNetwork_Closure)
                 (const Uenibstreamprotobuf__CauseRadioNetwork *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__CauseTransport_Closure)
                 (const Uenibstreamprotobuf__CauseTransport *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__CauseProtocol_Closure)
                 (const Uenibstreamprotobuf__CauseProtocol *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__CauseMisc_Closure)
                 (const Uenibstreamprotobuf__CauseMisc *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor uenibstreamprotobuf__cause__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__cause_radio_network__descriptor;
extern const ProtobufCEnumDescriptor    uenibstreamprotobuf__cause_radio_network__value__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__cause_transport__descriptor;
extern const ProtobufCEnumDescriptor    uenibstreamprotobuf__cause_transport__value__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__cause_protocol__descriptor;
extern const ProtobufCEnumDescriptor    uenibstreamprotobuf__cause_protocol__value__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__cause_misc__descriptor;
extern const ProtobufCEnumDescriptor    uenibstreamprotobuf__cause_misc__value__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_error_5fcause_2eproto__INCLUDED */