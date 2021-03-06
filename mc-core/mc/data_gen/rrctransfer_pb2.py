# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: rrctransfer.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import wrappers_pb2 as google_dot_protobuf_dot_wrappers__pb2
import rrc_general_message_types_pb2 as rrc__general__message__types__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='rrctransfer.proto',
  package='streaming_protobufs',
  syntax='proto3',
  serialized_options=_b('Z1gerrit.o-ran-sc.org/r/ric-plt/streaming-protobufs'),
  serialized_pb=_b('\n\x11rrctransfer.proto\x12\x13streaming_protobufs\x1a\x1egoogle/protobuf/wrappers.proto\x1a\x1frrc_general_message_types.proto\"\x18\n\x16UENRMeasurement_ExtIEs\"\x92\x01\n\x0fUENRMeasurement\x12;\n\x10uENRMeasurements\x18\x01 \x01(\x0b\x32!.streaming_protobufs.RRCContainer\x12\x42\n\riE_Extensions\x18\x02 \x03(\x0b\x32+.streaming_protobufs.UENRMeasurement_ExtIEs\"\x11\n\x0fSplitSRB_ExtIEs\"\x17\n\x15\x44\x65liveryStatus_ExtIEs\"z\n\x0e\x44\x65liveryStatus\x12%\n\x1dhighestSuccessDeliveredPDCPSN\x18\x01 \x01(\r\x12\x41\n\riE_Extensions\x18\x02 \x03(\x0b\x32*.streaming_protobufs.DeliveryStatus_ExtIEs\"\xae\x02\n\x08SplitSRB\x12\x37\n\x0crrcContainer\x18\x01 \x01(\x0b\x32!.streaming_protobufs.RRCContainer\x12\x36\n\x07srbType\x18\x02 \x01(\x0e\x32%.streaming_protobufs.SplitSRB.SRBType\x12;\n\x0e\x64\x65liveryStatus\x18\x03 \x01(\x0b\x32#.streaming_protobufs.DeliveryStatus\x12;\n\riE_Extensions\x18\x04 \x03(\x0b\x32$.streaming_protobufs.SplitSRB_ExtIEs\"7\n\x07SRBType\x12\x18\n\x14protobuf_unspecified\x10\x00\x12\x08\n\x04srb1\x10\x01\x12\x08\n\x04srb2\x10\x02\"\x83\x02\n\x0fRRCTransfer_IEs\x12\x1a\n\x12id_MeNB_UE_X2AP_ID\x18\x01 \x01(\r\x12\x1a\n\x12id_SgNB_UE_X2AP_ID\x18\x02 \x01(\r\x12\x32\n\x0bid_SplitSRB\x18\x03 \x01(\x0b\x32\x1d.streaming_protobufs.SplitSRB\x12@\n\x12id_UENRMeasurement\x18\x04 \x01(\x0b\x32$.streaming_protobufs.UENRMeasurement\x12\x42\n\x1cid_MeNB_UE_X2AP_ID_Extension\x18\x05 \x01(\x0b\x32\x1c.google.protobuf.UInt32Value\"L\n\x0bRRCTransfer\x12=\n\x0frrcTransfer_IEs\x18\x01 \x01(\x0b\x32$.streaming_protobufs.RRCTransfer_IEsB3Z1gerrit.o-ran-sc.org/r/ric-plt/streaming-protobufsb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_wrappers__pb2.DESCRIPTOR,rrc__general__message__types__pb2.DESCRIPTOR,])



_SPLITSRB_SRBTYPE = _descriptor.EnumDescriptor(
  name='SRBType',
  full_name='streaming_protobufs.SplitSRB.SRBType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='protobuf_unspecified', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='srb1', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='srb2', index=2, number=2,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=698,
  serialized_end=753,
)
_sym_db.RegisterEnumDescriptor(_SPLITSRB_SRBTYPE)


_UENRMEASUREMENT_EXTIES = _descriptor.Descriptor(
  name='UENRMeasurement_ExtIEs',
  full_name='streaming_protobufs.UENRMeasurement_ExtIEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=107,
  serialized_end=131,
)


_UENRMEASUREMENT = _descriptor.Descriptor(
  name='UENRMeasurement',
  full_name='streaming_protobufs.UENRMeasurement',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='uENRMeasurements', full_name='streaming_protobufs.UENRMeasurement.uENRMeasurements', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='iE_Extensions', full_name='streaming_protobufs.UENRMeasurement.iE_Extensions', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=134,
  serialized_end=280,
)


_SPLITSRB_EXTIES = _descriptor.Descriptor(
  name='SplitSRB_ExtIEs',
  full_name='streaming_protobufs.SplitSRB_ExtIEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=282,
  serialized_end=299,
)


_DELIVERYSTATUS_EXTIES = _descriptor.Descriptor(
  name='DeliveryStatus_ExtIEs',
  full_name='streaming_protobufs.DeliveryStatus_ExtIEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=301,
  serialized_end=324,
)


_DELIVERYSTATUS = _descriptor.Descriptor(
  name='DeliveryStatus',
  full_name='streaming_protobufs.DeliveryStatus',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='highestSuccessDeliveredPDCPSN', full_name='streaming_protobufs.DeliveryStatus.highestSuccessDeliveredPDCPSN', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='iE_Extensions', full_name='streaming_protobufs.DeliveryStatus.iE_Extensions', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=326,
  serialized_end=448,
)


_SPLITSRB = _descriptor.Descriptor(
  name='SplitSRB',
  full_name='streaming_protobufs.SplitSRB',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='rrcContainer', full_name='streaming_protobufs.SplitSRB.rrcContainer', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='srbType', full_name='streaming_protobufs.SplitSRB.srbType', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='deliveryStatus', full_name='streaming_protobufs.SplitSRB.deliveryStatus', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='iE_Extensions', full_name='streaming_protobufs.SplitSRB.iE_Extensions', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _SPLITSRB_SRBTYPE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=451,
  serialized_end=753,
)


_RRCTRANSFER_IES = _descriptor.Descriptor(
  name='RRCTransfer_IEs',
  full_name='streaming_protobufs.RRCTransfer_IEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id_MeNB_UE_X2AP_ID', full_name='streaming_protobufs.RRCTransfer_IEs.id_MeNB_UE_X2AP_ID', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_SgNB_UE_X2AP_ID', full_name='streaming_protobufs.RRCTransfer_IEs.id_SgNB_UE_X2AP_ID', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_SplitSRB', full_name='streaming_protobufs.RRCTransfer_IEs.id_SplitSRB', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_UENRMeasurement', full_name='streaming_protobufs.RRCTransfer_IEs.id_UENRMeasurement', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_MeNB_UE_X2AP_ID_Extension', full_name='streaming_protobufs.RRCTransfer_IEs.id_MeNB_UE_X2AP_ID_Extension', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=756,
  serialized_end=1015,
)


_RRCTRANSFER = _descriptor.Descriptor(
  name='RRCTransfer',
  full_name='streaming_protobufs.RRCTransfer',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='rrcTransfer_IEs', full_name='streaming_protobufs.RRCTransfer.rrcTransfer_IEs', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1017,
  serialized_end=1093,
)

_UENRMEASUREMENT.fields_by_name['uENRMeasurements'].message_type = rrc__general__message__types__pb2._RRCCONTAINER
_UENRMEASUREMENT.fields_by_name['iE_Extensions'].message_type = _UENRMEASUREMENT_EXTIES
_DELIVERYSTATUS.fields_by_name['iE_Extensions'].message_type = _DELIVERYSTATUS_EXTIES
_SPLITSRB.fields_by_name['rrcContainer'].message_type = rrc__general__message__types__pb2._RRCCONTAINER
_SPLITSRB.fields_by_name['srbType'].enum_type = _SPLITSRB_SRBTYPE
_SPLITSRB.fields_by_name['deliveryStatus'].message_type = _DELIVERYSTATUS
_SPLITSRB.fields_by_name['iE_Extensions'].message_type = _SPLITSRB_EXTIES
_SPLITSRB_SRBTYPE.containing_type = _SPLITSRB
_RRCTRANSFER_IES.fields_by_name['id_SplitSRB'].message_type = _SPLITSRB
_RRCTRANSFER_IES.fields_by_name['id_UENRMeasurement'].message_type = _UENRMEASUREMENT
_RRCTRANSFER_IES.fields_by_name['id_MeNB_UE_X2AP_ID_Extension'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
_RRCTRANSFER.fields_by_name['rrcTransfer_IEs'].message_type = _RRCTRANSFER_IES
DESCRIPTOR.message_types_by_name['UENRMeasurement_ExtIEs'] = _UENRMEASUREMENT_EXTIES
DESCRIPTOR.message_types_by_name['UENRMeasurement'] = _UENRMEASUREMENT
DESCRIPTOR.message_types_by_name['SplitSRB_ExtIEs'] = _SPLITSRB_EXTIES
DESCRIPTOR.message_types_by_name['DeliveryStatus_ExtIEs'] = _DELIVERYSTATUS_EXTIES
DESCRIPTOR.message_types_by_name['DeliveryStatus'] = _DELIVERYSTATUS
DESCRIPTOR.message_types_by_name['SplitSRB'] = _SPLITSRB
DESCRIPTOR.message_types_by_name['RRCTransfer_IEs'] = _RRCTRANSFER_IES
DESCRIPTOR.message_types_by_name['RRCTransfer'] = _RRCTRANSFER
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

UENRMeasurement_ExtIEs = _reflection.GeneratedProtocolMessageType('UENRMeasurement_ExtIEs', (_message.Message,), {
  'DESCRIPTOR' : _UENRMEASUREMENT_EXTIES,
  '__module__' : 'rrctransfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.UENRMeasurement_ExtIEs)
  })
_sym_db.RegisterMessage(UENRMeasurement_ExtIEs)

UENRMeasurement = _reflection.GeneratedProtocolMessageType('UENRMeasurement', (_message.Message,), {
  'DESCRIPTOR' : _UENRMEASUREMENT,
  '__module__' : 'rrctransfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.UENRMeasurement)
  })
_sym_db.RegisterMessage(UENRMeasurement)

SplitSRB_ExtIEs = _reflection.GeneratedProtocolMessageType('SplitSRB_ExtIEs', (_message.Message,), {
  'DESCRIPTOR' : _SPLITSRB_EXTIES,
  '__module__' : 'rrctransfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.SplitSRB_ExtIEs)
  })
_sym_db.RegisterMessage(SplitSRB_ExtIEs)

DeliveryStatus_ExtIEs = _reflection.GeneratedProtocolMessageType('DeliveryStatus_ExtIEs', (_message.Message,), {
  'DESCRIPTOR' : _DELIVERYSTATUS_EXTIES,
  '__module__' : 'rrctransfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.DeliveryStatus_ExtIEs)
  })
_sym_db.RegisterMessage(DeliveryStatus_ExtIEs)

DeliveryStatus = _reflection.GeneratedProtocolMessageType('DeliveryStatus', (_message.Message,), {
  'DESCRIPTOR' : _DELIVERYSTATUS,
  '__module__' : 'rrctransfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.DeliveryStatus)
  })
_sym_db.RegisterMessage(DeliveryStatus)

SplitSRB = _reflection.GeneratedProtocolMessageType('SplitSRB', (_message.Message,), {
  'DESCRIPTOR' : _SPLITSRB,
  '__module__' : 'rrctransfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.SplitSRB)
  })
_sym_db.RegisterMessage(SplitSRB)

RRCTransfer_IEs = _reflection.GeneratedProtocolMessageType('RRCTransfer_IEs', (_message.Message,), {
  'DESCRIPTOR' : _RRCTRANSFER_IES,
  '__module__' : 'rrctransfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.RRCTransfer_IEs)
  })
_sym_db.RegisterMessage(RRCTransfer_IEs)

RRCTransfer = _reflection.GeneratedProtocolMessageType('RRCTransfer', (_message.Message,), {
  'DESCRIPTOR' : _RRCTRANSFER,
  '__module__' : 'rrctransfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.RRCTransfer)
  })
_sym_db.RegisterMessage(RRCTransfer)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
