/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: common_types.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "common_types.pb-c.h"
void   uenibstreamprotobuf__null__init
                     (Uenibstreamprotobuf__Null         *message)
{
  static const Uenibstreamprotobuf__Null init_value = UENIBSTREAMPROTOBUF__NULL__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__null__get_packed_size
                     (const Uenibstreamprotobuf__Null *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__null__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__null__pack
                     (const Uenibstreamprotobuf__Null *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__null__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__null__pack_to_buffer
                     (const Uenibstreamprotobuf__Null *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__null__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__Null *
       uenibstreamprotobuf__null__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__Null *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__null__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__null__free_unpacked
                     (Uenibstreamprotobuf__Null *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__null__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__configured_opt__init
                     (Uenibstreamprotobuf__ConfiguredOpt         *message)
{
  static const Uenibstreamprotobuf__ConfiguredOpt init_value = UENIBSTREAMPROTOBUF__CONFIGURED_OPT__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__configured_opt__get_packed_size
                     (const Uenibstreamprotobuf__ConfiguredOpt *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__configured_opt__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__configured_opt__pack
                     (const Uenibstreamprotobuf__ConfiguredOpt *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__configured_opt__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__configured_opt__pack_to_buffer
                     (const Uenibstreamprotobuf__ConfiguredOpt *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__configured_opt__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__ConfiguredOpt *
       uenibstreamprotobuf__configured_opt__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__ConfiguredOpt *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__configured_opt__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__configured_opt__free_unpacked
                     (Uenibstreamprotobuf__ConfiguredOpt *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__configured_opt__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__true_opt__init
                     (Uenibstreamprotobuf__TrueOpt         *message)
{
  static const Uenibstreamprotobuf__TrueOpt init_value = UENIBSTREAMPROTOBUF__TRUE_OPT__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__true_opt__get_packed_size
                     (const Uenibstreamprotobuf__TrueOpt *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__true_opt__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__true_opt__pack
                     (const Uenibstreamprotobuf__TrueOpt *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__true_opt__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__true_opt__pack_to_buffer
                     (const Uenibstreamprotobuf__TrueOpt *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__true_opt__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__TrueOpt *
       uenibstreamprotobuf__true_opt__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__TrueOpt *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__true_opt__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__true_opt__free_unpacked
                     (Uenibstreamprotobuf__TrueOpt *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__true_opt__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__false_opt__init
                     (Uenibstreamprotobuf__FalseOpt         *message)
{
  static const Uenibstreamprotobuf__FalseOpt init_value = UENIBSTREAMPROTOBUF__FALSE_OPT__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__false_opt__get_packed_size
                     (const Uenibstreamprotobuf__FalseOpt *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__false_opt__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__false_opt__pack
                     (const Uenibstreamprotobuf__FalseOpt *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__false_opt__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__false_opt__pack_to_buffer
                     (const Uenibstreamprotobuf__FalseOpt *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__false_opt__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__FalseOpt *
       uenibstreamprotobuf__false_opt__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__FalseOpt *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__false_opt__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__false_opt__free_unpacked
                     (Uenibstreamprotobuf__FalseOpt *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__false_opt__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__enabled_opt__init
                     (Uenibstreamprotobuf__EnabledOpt         *message)
{
  static const Uenibstreamprotobuf__EnabledOpt init_value = UENIBSTREAMPROTOBUF__ENABLED_OPT__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__enabled_opt__get_packed_size
                     (const Uenibstreamprotobuf__EnabledOpt *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__enabled_opt__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__enabled_opt__pack
                     (const Uenibstreamprotobuf__EnabledOpt *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__enabled_opt__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__enabled_opt__pack_to_buffer
                     (const Uenibstreamprotobuf__EnabledOpt *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__enabled_opt__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__EnabledOpt *
       uenibstreamprotobuf__enabled_opt__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__EnabledOpt *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__enabled_opt__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__enabled_opt__free_unpacked
                     (Uenibstreamprotobuf__EnabledOpt *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__enabled_opt__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__disabled_opt__init
                     (Uenibstreamprotobuf__DisabledOpt         *message)
{
  static const Uenibstreamprotobuf__DisabledOpt init_value = UENIBSTREAMPROTOBUF__DISABLED_OPT__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__disabled_opt__get_packed_size
                     (const Uenibstreamprotobuf__DisabledOpt *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__disabled_opt__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__disabled_opt__pack
                     (const Uenibstreamprotobuf__DisabledOpt *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__disabled_opt__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__disabled_opt__pack_to_buffer
                     (const Uenibstreamprotobuf__DisabledOpt *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__disabled_opt__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__DisabledOpt *
       uenibstreamprotobuf__disabled_opt__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__DisabledOpt *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__disabled_opt__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__disabled_opt__free_unpacked
                     (Uenibstreamprotobuf__DisabledOpt *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__disabled_opt__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__enabled_disabled_opt__init
                     (Uenibstreamprotobuf__EnabledDisabledOpt         *message)
{
  static const Uenibstreamprotobuf__EnabledDisabledOpt init_value = UENIBSTREAMPROTOBUF__ENABLED_DISABLED_OPT__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__enabled_disabled_opt__get_packed_size
                     (const Uenibstreamprotobuf__EnabledDisabledOpt *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__enabled_disabled_opt__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__enabled_disabled_opt__pack
                     (const Uenibstreamprotobuf__EnabledDisabledOpt *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__enabled_disabled_opt__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__enabled_disabled_opt__pack_to_buffer
                     (const Uenibstreamprotobuf__EnabledDisabledOpt *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__enabled_disabled_opt__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__EnabledDisabledOpt *
       uenibstreamprotobuf__enabled_disabled_opt__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__EnabledDisabledOpt *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__enabled_disabled_opt__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__enabled_disabled_opt__free_unpacked
                     (Uenibstreamprotobuf__EnabledDisabledOpt *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__enabled_disabled_opt__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__on_off_opt__init
                     (Uenibstreamprotobuf__OnOffOpt         *message)
{
  static const Uenibstreamprotobuf__OnOffOpt init_value = UENIBSTREAMPROTOBUF__ON_OFF_OPT__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__on_off_opt__get_packed_size
                     (const Uenibstreamprotobuf__OnOffOpt *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__on_off_opt__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__on_off_opt__pack
                     (const Uenibstreamprotobuf__OnOffOpt *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__on_off_opt__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__on_off_opt__pack_to_buffer
                     (const Uenibstreamprotobuf__OnOffOpt *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__on_off_opt__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__OnOffOpt *
       uenibstreamprotobuf__on_off_opt__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__OnOffOpt *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__on_off_opt__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__on_off_opt__free_unpacked
                     (Uenibstreamprotobuf__OnOffOpt *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__on_off_opt__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
#define uenibstreamprotobuf__null__field_descriptors NULL
#define uenibstreamprotobuf__null__field_indices_by_name NULL
#define uenibstreamprotobuf__null__number_ranges NULL
const ProtobufCMessageDescriptor uenibstreamprotobuf__null__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.Null",
  "Null",
  "Uenibstreamprotobuf__Null",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__Null),
  0,
  uenibstreamprotobuf__null__field_descriptors,
  uenibstreamprotobuf__null__field_indices_by_name,
  0,  uenibstreamprotobuf__null__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__null__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue uenibstreamprotobuf__configured_opt__value__enum_values_by_number[2] =
{
  { "protobuf_unspecified", "UENIBSTREAMPROTOBUF__CONFIGURED_OPT__VALUE__protobuf_unspecified", 0 },
  { "configured", "UENIBSTREAMPROTOBUF__CONFIGURED_OPT__VALUE__configured", 1 },
};
static const ProtobufCIntRange uenibstreamprotobuf__configured_opt__value__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex uenibstreamprotobuf__configured_opt__value__enum_values_by_name[2] =
{
  { "configured", 1 },
  { "protobuf_unspecified", 0 },
};
const ProtobufCEnumDescriptor uenibstreamprotobuf__configured_opt__value__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.ConfiguredOpt.Value",
  "Value",
  "Uenibstreamprotobuf__ConfiguredOpt__Value",
  "uenibstreamprotobuf",
  2,
  uenibstreamprotobuf__configured_opt__value__enum_values_by_number,
  2,
  uenibstreamprotobuf__configured_opt__value__enum_values_by_name,
  1,
  uenibstreamprotobuf__configured_opt__value__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__configured_opt__field_descriptors[1] =
{
  {
    "value",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__ConfiguredOpt, value),
    &uenibstreamprotobuf__configured_opt__value__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__configured_opt__field_indices_by_name[] = {
  0,   /* field[0] = value */
};
static const ProtobufCIntRange uenibstreamprotobuf__configured_opt__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__configured_opt__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.ConfiguredOpt",
  "ConfiguredOpt",
  "Uenibstreamprotobuf__ConfiguredOpt",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__ConfiguredOpt),
  1,
  uenibstreamprotobuf__configured_opt__field_descriptors,
  uenibstreamprotobuf__configured_opt__field_indices_by_name,
  1,  uenibstreamprotobuf__configured_opt__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__configured_opt__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue uenibstreamprotobuf__true_opt__value__enum_values_by_number[2] =
{
  { "protobuf_unspecified", "UENIBSTREAMPROTOBUF__TRUE_OPT__VALUE__protobuf_unspecified", 0 },
  { "true", "UENIBSTREAMPROTOBUF__TRUE_OPT__VALUE__true", 1 },
};
static const ProtobufCIntRange uenibstreamprotobuf__true_opt__value__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex uenibstreamprotobuf__true_opt__value__enum_values_by_name[2] =
{
  { "protobuf_unspecified", 0 },
  { "true", 1 },
};
const ProtobufCEnumDescriptor uenibstreamprotobuf__true_opt__value__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.TrueOpt.Value",
  "Value",
  "Uenibstreamprotobuf__TrueOpt__Value",
  "uenibstreamprotobuf",
  2,
  uenibstreamprotobuf__true_opt__value__enum_values_by_number,
  2,
  uenibstreamprotobuf__true_opt__value__enum_values_by_name,
  1,
  uenibstreamprotobuf__true_opt__value__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__true_opt__field_descriptors[1] =
{
  {
    "value",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__TrueOpt, value),
    &uenibstreamprotobuf__true_opt__value__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__true_opt__field_indices_by_name[] = {
  0,   /* field[0] = value */
};
static const ProtobufCIntRange uenibstreamprotobuf__true_opt__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__true_opt__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.TrueOpt",
  "TrueOpt",
  "Uenibstreamprotobuf__TrueOpt",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__TrueOpt),
  1,
  uenibstreamprotobuf__true_opt__field_descriptors,
  uenibstreamprotobuf__true_opt__field_indices_by_name,
  1,  uenibstreamprotobuf__true_opt__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__true_opt__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue uenibstreamprotobuf__false_opt__value__enum_values_by_number[2] =
{
  { "protobuf_unspecified", "UENIBSTREAMPROTOBUF__FALSE_OPT__VALUE__protobuf_unspecified", 0 },
  { "false", "UENIBSTREAMPROTOBUF__FALSE_OPT__VALUE__false", 1 },
};
static const ProtobufCIntRange uenibstreamprotobuf__false_opt__value__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex uenibstreamprotobuf__false_opt__value__enum_values_by_name[2] =
{
  { "false", 1 },
  { "protobuf_unspecified", 0 },
};
const ProtobufCEnumDescriptor uenibstreamprotobuf__false_opt__value__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.FalseOpt.Value",
  "Value",
  "Uenibstreamprotobuf__FalseOpt__Value",
  "uenibstreamprotobuf",
  2,
  uenibstreamprotobuf__false_opt__value__enum_values_by_number,
  2,
  uenibstreamprotobuf__false_opt__value__enum_values_by_name,
  1,
  uenibstreamprotobuf__false_opt__value__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__false_opt__field_descriptors[1] =
{
  {
    "value",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__FalseOpt, value),
    &uenibstreamprotobuf__false_opt__value__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__false_opt__field_indices_by_name[] = {
  0,   /* field[0] = value */
};
static const ProtobufCIntRange uenibstreamprotobuf__false_opt__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__false_opt__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.FalseOpt",
  "FalseOpt",
  "Uenibstreamprotobuf__FalseOpt",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__FalseOpt),
  1,
  uenibstreamprotobuf__false_opt__field_descriptors,
  uenibstreamprotobuf__false_opt__field_indices_by_name,
  1,  uenibstreamprotobuf__false_opt__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__false_opt__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue uenibstreamprotobuf__enabled_opt__value__enum_values_by_number[2] =
{
  { "protobuf_unspecified", "UENIBSTREAMPROTOBUF__ENABLED_OPT__VALUE__protobuf_unspecified", 0 },
  { "enabled", "UENIBSTREAMPROTOBUF__ENABLED_OPT__VALUE__enabled", 1 },
};
static const ProtobufCIntRange uenibstreamprotobuf__enabled_opt__value__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex uenibstreamprotobuf__enabled_opt__value__enum_values_by_name[2] =
{
  { "enabled", 1 },
  { "protobuf_unspecified", 0 },
};
const ProtobufCEnumDescriptor uenibstreamprotobuf__enabled_opt__value__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.EnabledOpt.Value",
  "Value",
  "Uenibstreamprotobuf__EnabledOpt__Value",
  "uenibstreamprotobuf",
  2,
  uenibstreamprotobuf__enabled_opt__value__enum_values_by_number,
  2,
  uenibstreamprotobuf__enabled_opt__value__enum_values_by_name,
  1,
  uenibstreamprotobuf__enabled_opt__value__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__enabled_opt__field_descriptors[1] =
{
  {
    "value",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__EnabledOpt, value),
    &uenibstreamprotobuf__enabled_opt__value__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__enabled_opt__field_indices_by_name[] = {
  0,   /* field[0] = value */
};
static const ProtobufCIntRange uenibstreamprotobuf__enabled_opt__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__enabled_opt__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.EnabledOpt",
  "EnabledOpt",
  "Uenibstreamprotobuf__EnabledOpt",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__EnabledOpt),
  1,
  uenibstreamprotobuf__enabled_opt__field_descriptors,
  uenibstreamprotobuf__enabled_opt__field_indices_by_name,
  1,  uenibstreamprotobuf__enabled_opt__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__enabled_opt__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue uenibstreamprotobuf__disabled_opt__value__enum_values_by_number[2] =
{
  { "protobuf_unspecified", "UENIBSTREAMPROTOBUF__DISABLED_OPT__VALUE__protobuf_unspecified", 0 },
  { "disabled", "UENIBSTREAMPROTOBUF__DISABLED_OPT__VALUE__disabled", 1 },
};
static const ProtobufCIntRange uenibstreamprotobuf__disabled_opt__value__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex uenibstreamprotobuf__disabled_opt__value__enum_values_by_name[2] =
{
  { "disabled", 1 },
  { "protobuf_unspecified", 0 },
};
const ProtobufCEnumDescriptor uenibstreamprotobuf__disabled_opt__value__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.DisabledOpt.Value",
  "Value",
  "Uenibstreamprotobuf__DisabledOpt__Value",
  "uenibstreamprotobuf",
  2,
  uenibstreamprotobuf__disabled_opt__value__enum_values_by_number,
  2,
  uenibstreamprotobuf__disabled_opt__value__enum_values_by_name,
  1,
  uenibstreamprotobuf__disabled_opt__value__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__disabled_opt__field_descriptors[1] =
{
  {
    "value",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__DisabledOpt, value),
    &uenibstreamprotobuf__disabled_opt__value__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__disabled_opt__field_indices_by_name[] = {
  0,   /* field[0] = value */
};
static const ProtobufCIntRange uenibstreamprotobuf__disabled_opt__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__disabled_opt__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.DisabledOpt",
  "DisabledOpt",
  "Uenibstreamprotobuf__DisabledOpt",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__DisabledOpt),
  1,
  uenibstreamprotobuf__disabled_opt__field_descriptors,
  uenibstreamprotobuf__disabled_opt__field_indices_by_name,
  1,  uenibstreamprotobuf__disabled_opt__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__disabled_opt__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue uenibstreamprotobuf__enabled_disabled_opt__value__enum_values_by_number[3] =
{
  { "protobuf_unspecified", "UENIBSTREAMPROTOBUF__ENABLED_DISABLED_OPT__VALUE__protobuf_unspecified", 0 },
  { "enabled", "UENIBSTREAMPROTOBUF__ENABLED_DISABLED_OPT__VALUE__enabled", 1 },
  { "disabled", "UENIBSTREAMPROTOBUF__ENABLED_DISABLED_OPT__VALUE__disabled", 2 },
};
static const ProtobufCIntRange uenibstreamprotobuf__enabled_disabled_opt__value__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex uenibstreamprotobuf__enabled_disabled_opt__value__enum_values_by_name[3] =
{
  { "disabled", 2 },
  { "enabled", 1 },
  { "protobuf_unspecified", 0 },
};
const ProtobufCEnumDescriptor uenibstreamprotobuf__enabled_disabled_opt__value__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.EnabledDisabledOpt.Value",
  "Value",
  "Uenibstreamprotobuf__EnabledDisabledOpt__Value",
  "uenibstreamprotobuf",
  3,
  uenibstreamprotobuf__enabled_disabled_opt__value__enum_values_by_number,
  3,
  uenibstreamprotobuf__enabled_disabled_opt__value__enum_values_by_name,
  1,
  uenibstreamprotobuf__enabled_disabled_opt__value__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__enabled_disabled_opt__field_descriptors[1] =
{
  {
    "value",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__EnabledDisabledOpt, value),
    &uenibstreamprotobuf__enabled_disabled_opt__value__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__enabled_disabled_opt__field_indices_by_name[] = {
  0,   /* field[0] = value */
};
static const ProtobufCIntRange uenibstreamprotobuf__enabled_disabled_opt__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__enabled_disabled_opt__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.EnabledDisabledOpt",
  "EnabledDisabledOpt",
  "Uenibstreamprotobuf__EnabledDisabledOpt",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__EnabledDisabledOpt),
  1,
  uenibstreamprotobuf__enabled_disabled_opt__field_descriptors,
  uenibstreamprotobuf__enabled_disabled_opt__field_indices_by_name,
  1,  uenibstreamprotobuf__enabled_disabled_opt__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__enabled_disabled_opt__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue uenibstreamprotobuf__on_off_opt__value__enum_values_by_number[3] =
{
  { "protobuf_unspecified", "UENIBSTREAMPROTOBUF__ON_OFF_OPT__VALUE__protobuf_unspecified", 0 },
  { "on", "UENIBSTREAMPROTOBUF__ON_OFF_OPT__VALUE__on", 1 },
  { "off", "UENIBSTREAMPROTOBUF__ON_OFF_OPT__VALUE__off", 2 },
};
static const ProtobufCIntRange uenibstreamprotobuf__on_off_opt__value__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex uenibstreamprotobuf__on_off_opt__value__enum_values_by_name[3] =
{
  { "off", 2 },
  { "on", 1 },
  { "protobuf_unspecified", 0 },
};
const ProtobufCEnumDescriptor uenibstreamprotobuf__on_off_opt__value__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.OnOffOpt.Value",
  "Value",
  "Uenibstreamprotobuf__OnOffOpt__Value",
  "uenibstreamprotobuf",
  3,
  uenibstreamprotobuf__on_off_opt__value__enum_values_by_number,
  3,
  uenibstreamprotobuf__on_off_opt__value__enum_values_by_name,
  1,
  uenibstreamprotobuf__on_off_opt__value__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__on_off_opt__field_descriptors[1] =
{
  {
    "value",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__OnOffOpt, value),
    &uenibstreamprotobuf__on_off_opt__value__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__on_off_opt__field_indices_by_name[] = {
  0,   /* field[0] = value */
};
static const ProtobufCIntRange uenibstreamprotobuf__on_off_opt__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__on_off_opt__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.OnOffOpt",
  "OnOffOpt",
  "Uenibstreamprotobuf__OnOffOpt",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__OnOffOpt),
  1,
  uenibstreamprotobuf__on_off_opt__field_descriptors,
  uenibstreamprotobuf__on_off_opt__field_indices_by_name,
  1,  uenibstreamprotobuf__on_off_opt__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__on_off_opt__init,
  NULL,NULL,NULL    /* reserved[123] */
};