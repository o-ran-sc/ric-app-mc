# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ue_context_release.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import wrappers_pb2 as google_dot_protobuf_dot_wrappers__pb2
import common_types_pb2 as common__types__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='ue_context_release.proto',
  package='streaming_protobufs',
  syntax='proto3',
  serialized_options=_b('Z1gerrit.o-ran-sc.org/r/ric-plt/streaming-protobufs'),
  serialized_pb=_b('\n\x18ue_context_release.proto\x12\x13streaming_protobufs\x1a\x1egoogle/protobuf/wrappers.proto\x1a\x12\x63ommon_types.proto\"\xe5\x02\n\x10UEContextRelease\x12\x1d\n\x15id_Old_eNB_UE_X2AP_ID\x18\x01 \x01(\r\x12\x1d\n\x15id_New_eNB_UE_X2AP_ID\x18\x02 \x01(\r\x12\x45\n\x1fid_Old_eNB_UE_X2AP_ID_Extension\x18\x03 \x01(\x0b\x32\x1c.google.protobuf.UInt32Value\x12\x45\n\x1fid_New_eNB_UE_X2AP_ID_Extension\x18\x04 \x01(\x0b\x32\x1c.google.protobuf.UInt32Value\x12K\n%id_SIPTO_BearerDeactivationIndication\x18\x05 \x01(\x0b\x32\x1c.streaming_protobufs.TrueOpt\x12\x38\n\x12id_SgNB_UE_X2AP_ID\x18\x06 \x01(\x0b\x32\x1c.google.protobuf.UInt32ValueB3Z1gerrit.o-ran-sc.org/r/ric-plt/streaming-protobufsb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_wrappers__pb2.DESCRIPTOR,common__types__pb2.DESCRIPTOR,])




_UECONTEXTRELEASE = _descriptor.Descriptor(
  name='UEContextRelease',
  full_name='streaming_protobufs.UEContextRelease',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id_Old_eNB_UE_X2AP_ID', full_name='streaming_protobufs.UEContextRelease.id_Old_eNB_UE_X2AP_ID', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_New_eNB_UE_X2AP_ID', full_name='streaming_protobufs.UEContextRelease.id_New_eNB_UE_X2AP_ID', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_Old_eNB_UE_X2AP_ID_Extension', full_name='streaming_protobufs.UEContextRelease.id_Old_eNB_UE_X2AP_ID_Extension', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_New_eNB_UE_X2AP_ID_Extension', full_name='streaming_protobufs.UEContextRelease.id_New_eNB_UE_X2AP_ID_Extension', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_SIPTO_BearerDeactivationIndication', full_name='streaming_protobufs.UEContextRelease.id_SIPTO_BearerDeactivationIndication', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_SgNB_UE_X2AP_ID', full_name='streaming_protobufs.UEContextRelease.id_SgNB_UE_X2AP_ID', index=5,
      number=6, type=11, cpp_type=10, label=1,
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
  serialized_start=102,
  serialized_end=459,
)

_UECONTEXTRELEASE.fields_by_name['id_Old_eNB_UE_X2AP_ID_Extension'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
_UECONTEXTRELEASE.fields_by_name['id_New_eNB_UE_X2AP_ID_Extension'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
_UECONTEXTRELEASE.fields_by_name['id_SIPTO_BearerDeactivationIndication'].message_type = common__types__pb2._TRUEOPT
_UECONTEXTRELEASE.fields_by_name['id_SgNB_UE_X2AP_ID'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
DESCRIPTOR.message_types_by_name['UEContextRelease'] = _UECONTEXTRELEASE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

UEContextRelease = _reflection.GeneratedProtocolMessageType('UEContextRelease', (_message.Message,), {
  'DESCRIPTOR' : _UECONTEXTRELEASE,
  '__module__' : 'ue_context_release_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.UEContextRelease)
  })
_sym_db.RegisterMessage(UEContextRelease)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
