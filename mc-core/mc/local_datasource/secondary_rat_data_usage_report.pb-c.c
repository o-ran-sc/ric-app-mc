/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: secondary_rat_data_usage_report.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "secondary_rat_data_usage_report.pb-c.h"
void   uenibstreamprotobuf__secondary_ratdata_usage_report__init
                     (Uenibstreamprotobuf__SecondaryRATDataUsageReport         *message)
{
  static const Uenibstreamprotobuf__SecondaryRATDataUsageReport init_value = UENIBSTREAMPROTOBUF__SECONDARY_RATDATA_USAGE_REPORT__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__secondary_ratdata_usage_report__get_packed_size
                     (const Uenibstreamprotobuf__SecondaryRATDataUsageReport *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratdata_usage_report__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__secondary_ratdata_usage_report__pack
                     (const Uenibstreamprotobuf__SecondaryRATDataUsageReport *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratdata_usage_report__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__secondary_ratdata_usage_report__pack_to_buffer
                     (const Uenibstreamprotobuf__SecondaryRATDataUsageReport *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratdata_usage_report__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__SecondaryRATDataUsageReport *
       uenibstreamprotobuf__secondary_ratdata_usage_report__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__SecondaryRATDataUsageReport *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__secondary_ratdata_usage_report__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__secondary_ratdata_usage_report__free_unpacked
                     (Uenibstreamprotobuf__SecondaryRATDataUsageReport *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratdata_usage_report__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__secondary_ratdata_usage_report__ies__init
                     (Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs         *message)
{
  static const Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs init_value = UENIBSTREAMPROTOBUF__SECONDARY_RATDATA_USAGE_REPORT__IES__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__secondary_ratdata_usage_report__ies__get_packed_size
                     (const Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratdata_usage_report__ies__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__secondary_ratdata_usage_report__ies__pack
                     (const Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratdata_usage_report__ies__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__secondary_ratdata_usage_report__ies__pack_to_buffer
                     (const Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratdata_usage_report__ies__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs *
       uenibstreamprotobuf__secondary_ratdata_usage_report__ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__secondary_ratdata_usage_report__ies__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__secondary_ratdata_usage_report__ies__free_unpacked
                     (Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratdata_usage_report__ies__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__secondary_ratusage_report_list__init
                     (Uenibstreamprotobuf__SecondaryRATUsageReportList         *message)
{
  static const Uenibstreamprotobuf__SecondaryRATUsageReportList init_value = UENIBSTREAMPROTOBUF__SECONDARY_RATUSAGE_REPORT_LIST__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__secondary_ratusage_report_list__get_packed_size
                     (const Uenibstreamprotobuf__SecondaryRATUsageReportList *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratusage_report_list__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__secondary_ratusage_report_list__pack
                     (const Uenibstreamprotobuf__SecondaryRATUsageReportList *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratusage_report_list__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__secondary_ratusage_report_list__pack_to_buffer
                     (const Uenibstreamprotobuf__SecondaryRATUsageReportList *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratusage_report_list__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__SecondaryRATUsageReportList *
       uenibstreamprotobuf__secondary_ratusage_report_list__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__SecondaryRATUsageReportList *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__secondary_ratusage_report_list__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__secondary_ratusage_report_list__free_unpacked
                     (Uenibstreamprotobuf__SecondaryRATUsageReportList *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratusage_report_list__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__secondary_ratusage_report__item_ies__init
                     (Uenibstreamprotobuf__SecondaryRATUsageReportItemIEs         *message)
{
  static const Uenibstreamprotobuf__SecondaryRATUsageReportItemIEs init_value = UENIBSTREAMPROTOBUF__SECONDARY_RATUSAGE_REPORT__ITEM_IES__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__secondary_ratusage_report__item_ies__get_packed_size
                     (const Uenibstreamprotobuf__SecondaryRATUsageReportItemIEs *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratusage_report__item_ies__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__secondary_ratusage_report__item_ies__pack
                     (const Uenibstreamprotobuf__SecondaryRATUsageReportItemIEs *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratusage_report__item_ies__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__secondary_ratusage_report__item_ies__pack_to_buffer
                     (const Uenibstreamprotobuf__SecondaryRATUsageReportItemIEs *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratusage_report__item_ies__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__SecondaryRATUsageReportItemIEs *
       uenibstreamprotobuf__secondary_ratusage_report__item_ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__SecondaryRATUsageReportItemIEs *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__secondary_ratusage_report__item_ies__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__secondary_ratusage_report__item_ies__free_unpacked
                     (Uenibstreamprotobuf__SecondaryRATUsageReportItemIEs *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratusage_report__item_ies__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__secondary_ratusage_report__item__init
                     (Uenibstreamprotobuf__SecondaryRATUsageReportItem         *message)
{
  static const Uenibstreamprotobuf__SecondaryRATUsageReportItem init_value = UENIBSTREAMPROTOBUF__SECONDARY_RATUSAGE_REPORT__ITEM__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__secondary_ratusage_report__item__get_packed_size
                     (const Uenibstreamprotobuf__SecondaryRATUsageReportItem *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratusage_report__item__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__secondary_ratusage_report__item__pack
                     (const Uenibstreamprotobuf__SecondaryRATUsageReportItem *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratusage_report__item__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__secondary_ratusage_report__item__pack_to_buffer
                     (const Uenibstreamprotobuf__SecondaryRATUsageReportItem *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratusage_report__item__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__SecondaryRATUsageReportItem *
       uenibstreamprotobuf__secondary_ratusage_report__item__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__SecondaryRATUsageReportItem *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__secondary_ratusage_report__item__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__secondary_ratusage_report__item__free_unpacked
                     (Uenibstreamprotobuf__SecondaryRATUsageReportItem *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__secondary_ratusage_report__item__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__e__rabusage_report_list__init
                     (Uenibstreamprotobuf__ERABUsageReportList         *message)
{
  static const Uenibstreamprotobuf__ERABUsageReportList init_value = UENIBSTREAMPROTOBUF__E__RABUSAGE_REPORT_LIST__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__e__rabusage_report_list__get_packed_size
                     (const Uenibstreamprotobuf__ERABUsageReportList *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__e__rabusage_report_list__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__e__rabusage_report_list__pack
                     (const Uenibstreamprotobuf__ERABUsageReportList *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__e__rabusage_report_list__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__e__rabusage_report_list__pack_to_buffer
                     (const Uenibstreamprotobuf__ERABUsageReportList *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__e__rabusage_report_list__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__ERABUsageReportList *
       uenibstreamprotobuf__e__rabusage_report_list__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__ERABUsageReportList *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__e__rabusage_report_list__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__e__rabusage_report_list__free_unpacked
                     (Uenibstreamprotobuf__ERABUsageReportList *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__e__rabusage_report_list__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__e__rabusage_report__item_ies__init
                     (Uenibstreamprotobuf__ERABUsageReportItemIEs         *message)
{
  static const Uenibstreamprotobuf__ERABUsageReportItemIEs init_value = UENIBSTREAMPROTOBUF__E__RABUSAGE_REPORT__ITEM_IES__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__e__rabusage_report__item_ies__get_packed_size
                     (const Uenibstreamprotobuf__ERABUsageReportItemIEs *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__e__rabusage_report__item_ies__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__e__rabusage_report__item_ies__pack
                     (const Uenibstreamprotobuf__ERABUsageReportItemIEs *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__e__rabusage_report__item_ies__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__e__rabusage_report__item_ies__pack_to_buffer
                     (const Uenibstreamprotobuf__ERABUsageReportItemIEs *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__e__rabusage_report__item_ies__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__ERABUsageReportItemIEs *
       uenibstreamprotobuf__e__rabusage_report__item_ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__ERABUsageReportItemIEs *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__e__rabusage_report__item_ies__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__e__rabusage_report__item_ies__free_unpacked
                     (Uenibstreamprotobuf__ERABUsageReportItemIEs *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__e__rabusage_report__item_ies__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   uenibstreamprotobuf__e__rabusage_report__item__init
                     (Uenibstreamprotobuf__ERABUsageReportItem         *message)
{
  static const Uenibstreamprotobuf__ERABUsageReportItem init_value = UENIBSTREAMPROTOBUF__E__RABUSAGE_REPORT__ITEM__INIT;
  *message = init_value;
}
size_t uenibstreamprotobuf__e__rabusage_report__item__get_packed_size
                     (const Uenibstreamprotobuf__ERABUsageReportItem *message)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__e__rabusage_report__item__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t uenibstreamprotobuf__e__rabusage_report__item__pack
                     (const Uenibstreamprotobuf__ERABUsageReportItem *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__e__rabusage_report__item__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t uenibstreamprotobuf__e__rabusage_report__item__pack_to_buffer
                     (const Uenibstreamprotobuf__ERABUsageReportItem *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &uenibstreamprotobuf__e__rabusage_report__item__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Uenibstreamprotobuf__ERABUsageReportItem *
       uenibstreamprotobuf__e__rabusage_report__item__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Uenibstreamprotobuf__ERABUsageReportItem *)
     protobuf_c_message_unpack (&uenibstreamprotobuf__e__rabusage_report__item__descriptor,
                                allocator, len, data);
}
void   uenibstreamprotobuf__e__rabusage_report__item__free_unpacked
                     (Uenibstreamprotobuf__ERABUsageReportItem *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &uenibstreamprotobuf__e__rabusage_report__item__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor uenibstreamprotobuf__secondary_ratdata_usage_report__field_descriptors[1] =
{
  {
    "protocolIEs",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__SecondaryRATDataUsageReport, protocolies),
    &uenibstreamprotobuf__secondary_ratdata_usage_report__ies__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__secondary_ratdata_usage_report__field_indices_by_name[] = {
  0,   /* field[0] = protocolIEs */
};
static const ProtobufCIntRange uenibstreamprotobuf__secondary_ratdata_usage_report__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__secondary_ratdata_usage_report__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.SecondaryRATDataUsageReport",
  "SecondaryRATDataUsageReport",
  "Uenibstreamprotobuf__SecondaryRATDataUsageReport",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__SecondaryRATDataUsageReport),
  1,
  uenibstreamprotobuf__secondary_ratdata_usage_report__field_descriptors,
  uenibstreamprotobuf__secondary_ratdata_usage_report__field_indices_by_name,
  1,  uenibstreamprotobuf__secondary_ratdata_usage_report__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__secondary_ratdata_usage_report__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__secondary_ratdata_usage_report__ies__field_descriptors[4] =
{
  {
    "id_MeNB_UE_X2AP_ID",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs, id_menb_ue_x2ap_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "id_SgNB_UE_X2AP_ID",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs, id_sgnb_ue_x2ap_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "id_SecondaryRATUsageReportList",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs, id_secondaryratusagereportlist),
    &uenibstreamprotobuf__secondary_ratusage_report_list__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "id_MeNB_UE_X2AP_ID_Extension",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs, id_menb_ue_x2ap_id_extension),
    &google__protobuf__uint32_value__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__secondary_ratdata_usage_report__ies__field_indices_by_name[] = {
  0,   /* field[0] = id_MeNB_UE_X2AP_ID */
  3,   /* field[3] = id_MeNB_UE_X2AP_ID_Extension */
  2,   /* field[2] = id_SecondaryRATUsageReportList */
  1,   /* field[1] = id_SgNB_UE_X2AP_ID */
};
static const ProtobufCIntRange uenibstreamprotobuf__secondary_ratdata_usage_report__ies__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__secondary_ratdata_usage_report__ies__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.SecondaryRATDataUsageReport_IEs",
  "SecondaryRATDataUsageReportIEs",
  "Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__SecondaryRATDataUsageReportIEs),
  4,
  uenibstreamprotobuf__secondary_ratdata_usage_report__ies__field_descriptors,
  uenibstreamprotobuf__secondary_ratdata_usage_report__ies__field_indices_by_name,
  1,  uenibstreamprotobuf__secondary_ratdata_usage_report__ies__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__secondary_ratdata_usage_report__ies__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__secondary_ratusage_report_list__field_descriptors[1] =
{
  {
    "items",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Uenibstreamprotobuf__SecondaryRATUsageReportList, n_items),
    offsetof(Uenibstreamprotobuf__SecondaryRATUsageReportList, items),
    &uenibstreamprotobuf__secondary_ratusage_report__item_ies__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__secondary_ratusage_report_list__field_indices_by_name[] = {
  0,   /* field[0] = items */
};
static const ProtobufCIntRange uenibstreamprotobuf__secondary_ratusage_report_list__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__secondary_ratusage_report_list__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.SecondaryRATUsageReportList",
  "SecondaryRATUsageReportList",
  "Uenibstreamprotobuf__SecondaryRATUsageReportList",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__SecondaryRATUsageReportList),
  1,
  uenibstreamprotobuf__secondary_ratusage_report_list__field_descriptors,
  uenibstreamprotobuf__secondary_ratusage_report_list__field_indices_by_name,
  1,  uenibstreamprotobuf__secondary_ratusage_report_list__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__secondary_ratusage_report_list__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__secondary_ratusage_report__item_ies__field_descriptors[1] =
{
  {
    "id_SecondaryRATUsageReport_Item",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__SecondaryRATUsageReportItemIEs, id_secondaryratusagereport_item),
    &uenibstreamprotobuf__secondary_ratusage_report__item__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__secondary_ratusage_report__item_ies__field_indices_by_name[] = {
  0,   /* field[0] = id_SecondaryRATUsageReport_Item */
};
static const ProtobufCIntRange uenibstreamprotobuf__secondary_ratusage_report__item_ies__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__secondary_ratusage_report__item_ies__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.SecondaryRATUsageReport_ItemIEs",
  "SecondaryRATUsageReportItemIEs",
  "Uenibstreamprotobuf__SecondaryRATUsageReportItemIEs",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__SecondaryRATUsageReportItemIEs),
  1,
  uenibstreamprotobuf__secondary_ratusage_report__item_ies__field_descriptors,
  uenibstreamprotobuf__secondary_ratusage_report__item_ies__field_indices_by_name,
  1,  uenibstreamprotobuf__secondary_ratusage_report__item_ies__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__secondary_ratusage_report__item_ies__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue uenibstreamprotobuf__secondary_ratusage_report__item__secondary_rattype__enum_values_by_number[2] =
{
  { "protobuf_unspecified", "UENIBSTREAMPROTOBUF__SECONDARY_RATUSAGE_REPORT__ITEM__SECONDARY_RATTYPE__protobuf_unspecified", 0 },
  { "nr", "UENIBSTREAMPROTOBUF__SECONDARY_RATUSAGE_REPORT__ITEM__SECONDARY_RATTYPE__nr", 1 },
};
static const ProtobufCIntRange uenibstreamprotobuf__secondary_ratusage_report__item__secondary_rattype__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex uenibstreamprotobuf__secondary_ratusage_report__item__secondary_rattype__enum_values_by_name[2] =
{
  { "nr", 1 },
  { "protobuf_unspecified", 0 },
};
const ProtobufCEnumDescriptor uenibstreamprotobuf__secondary_ratusage_report__item__secondary_rattype__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.SecondaryRATUsageReport_Item.SecondaryRATType",
  "SecondaryRATType",
  "Uenibstreamprotobuf__SecondaryRATUsageReportItem__SecondaryRATType",
  "uenibstreamprotobuf",
  2,
  uenibstreamprotobuf__secondary_ratusage_report__item__secondary_rattype__enum_values_by_number,
  2,
  uenibstreamprotobuf__secondary_ratusage_report__item__secondary_rattype__enum_values_by_name,
  1,
  uenibstreamprotobuf__secondary_ratusage_report__item__secondary_rattype__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__secondary_ratusage_report__item__field_descriptors[3] =
{
  {
    "e_RAB_ID",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__SecondaryRATUsageReportItem, e_rab_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "secondaryRATType",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__SecondaryRATUsageReportItem, secondaryrattype),
    &uenibstreamprotobuf__secondary_ratusage_report__item__secondary_rattype__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "e_RABUsageReportList",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__SecondaryRATUsageReportItem, e_rabusagereportlist),
    &uenibstreamprotobuf__e__rabusage_report_list__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__secondary_ratusage_report__item__field_indices_by_name[] = {
  2,   /* field[2] = e_RABUsageReportList */
  0,   /* field[0] = e_RAB_ID */
  1,   /* field[1] = secondaryRATType */
};
static const ProtobufCIntRange uenibstreamprotobuf__secondary_ratusage_report__item__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__secondary_ratusage_report__item__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.SecondaryRATUsageReport_Item",
  "SecondaryRATUsageReportItem",
  "Uenibstreamprotobuf__SecondaryRATUsageReportItem",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__SecondaryRATUsageReportItem),
  3,
  uenibstreamprotobuf__secondary_ratusage_report__item__field_descriptors,
  uenibstreamprotobuf__secondary_ratusage_report__item__field_indices_by_name,
  1,  uenibstreamprotobuf__secondary_ratusage_report__item__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__secondary_ratusage_report__item__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__e__rabusage_report_list__field_descriptors[1] =
{
  {
    "items",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Uenibstreamprotobuf__ERABUsageReportList, n_items),
    offsetof(Uenibstreamprotobuf__ERABUsageReportList, items),
    &uenibstreamprotobuf__e__rabusage_report__item_ies__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__e__rabusage_report_list__field_indices_by_name[] = {
  0,   /* field[0] = items */
};
static const ProtobufCIntRange uenibstreamprotobuf__e__rabusage_report_list__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__e__rabusage_report_list__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.E_RABUsageReportList",
  "ERABUsageReportList",
  "Uenibstreamprotobuf__ERABUsageReportList",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__ERABUsageReportList),
  1,
  uenibstreamprotobuf__e__rabusage_report_list__field_descriptors,
  uenibstreamprotobuf__e__rabusage_report_list__field_indices_by_name,
  1,  uenibstreamprotobuf__e__rabusage_report_list__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__e__rabusage_report_list__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__e__rabusage_report__item_ies__field_descriptors[1] =
{
  {
    "id_E_RABUsageReport_Item",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__ERABUsageReportItemIEs, id_e_rabusagereport_item),
    &uenibstreamprotobuf__e__rabusage_report__item__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__e__rabusage_report__item_ies__field_indices_by_name[] = {
  0,   /* field[0] = id_E_RABUsageReport_Item */
};
static const ProtobufCIntRange uenibstreamprotobuf__e__rabusage_report__item_ies__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__e__rabusage_report__item_ies__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.E_RABUsageReport_ItemIEs",
  "ERABUsageReportItemIEs",
  "Uenibstreamprotobuf__ERABUsageReportItemIEs",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__ERABUsageReportItemIEs),
  1,
  uenibstreamprotobuf__e__rabusage_report__item_ies__field_descriptors,
  uenibstreamprotobuf__e__rabusage_report__item_ies__field_indices_by_name,
  1,  uenibstreamprotobuf__e__rabusage_report__item_ies__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__e__rabusage_report__item_ies__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor uenibstreamprotobuf__e__rabusage_report__item__field_descriptors[4] =
{
  {
    "startTimeStamp",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__ERABUsageReportItem, starttimestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "endTimeStamp",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__ERABUsageReportItem, endtimestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "usageCountUL",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__ERABUsageReportItem, usagecountul),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "usageCountDL",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Uenibstreamprotobuf__ERABUsageReportItem, usagecountdl),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned uenibstreamprotobuf__e__rabusage_report__item__field_indices_by_name[] = {
  1,   /* field[1] = endTimeStamp */
  0,   /* field[0] = startTimeStamp */
  3,   /* field[3] = usageCountDL */
  2,   /* field[2] = usageCountUL */
};
static const ProtobufCIntRange uenibstreamprotobuf__e__rabusage_report__item__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor uenibstreamprotobuf__e__rabusage_report__item__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "uenibstreamprotobuf.E_RABUsageReport_Item",
  "ERABUsageReportItem",
  "Uenibstreamprotobuf__ERABUsageReportItem",
  "uenibstreamprotobuf",
  sizeof(Uenibstreamprotobuf__ERABUsageReportItem),
  4,
  uenibstreamprotobuf__e__rabusage_report__item__field_descriptors,
  uenibstreamprotobuf__e__rabusage_report__item__field_indices_by_name,
  1,  uenibstreamprotobuf__e__rabusage_report__item__number_ranges,
  (ProtobufCMessageInit) uenibstreamprotobuf__e__rabusage_report__item__init,
  NULL,NULL,NULL    /* reserved[123] */
};