# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: sgnb_release_request.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import wrappers_pb2 as google_dot_protobuf_dot_wrappers__pb2
import x2ap_common_types_pb2 as x2ap__common__types__pb2
import rrc_cg_config_info_pb2 as rrc__cg__config__info__pb2
import error_cause_pb2 as error__cause__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='sgnb_release_request.proto',
  package='uenibstreamprotobuf',
  syntax='proto3',
  serialized_options=_b('Z8gerrit.o-ran-sc.org/r/ric-plt/ue-nib/uenibstreamprotobuf'),
  serialized_pb=_b('\n\x1asgnb_release_request.proto\x12\x13uenibstreamprotobuf\x1a\x1egoogle/protobuf/wrappers.proto\x1a\x17x2ap_common_types.proto\x1a\x18rrc_cg_config_info.proto\x1a\x11\x65rror_cause.proto\"V\n\x12SgNBReleaseRequest\x12@\n\x0bprotocolIEs\x18\x01 \x01(\x0b\x32+.uenibstreamprotobuf.SgNBReleaseRequest_IEs\"\xde\x03\n\x16SgNBReleaseRequest_IEs\x12\x1a\n\x12id_MeNB_UE_X2AP_ID\x18\x01 \x01(\r\x12\x38\n\x12id_SgNB_UE_X2AP_ID\x18\x02 \x01(\x0b\x32\x1c.google.protobuf.UInt32Value\x12,\n\x08id_Cause\x18\x03 \x01(\x0b\x32\x1a.uenibstreamprotobuf.Cause\x12\x66\n%id_E_RABs_ToBeReleased_SgNBRelReqList\x18\x04 \x01(\x0b\x32\x37.uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReqList\x12P\n\x1aid_UE_ContextKeptIndicator\x18\x05 \x01(\x0b\x32,.uenibstreamprotobuf.UE_ContextKeptIndicator\x12\x42\n\x1cid_MeNB_UE_X2AP_ID_Extension\x18\x06 \x01(\x0b\x32\x1c.google.protobuf.UInt32Value\x12\x42\n\x16id_MeNBtoSgNBContainer\x18\x07 \x01(\x0b\x32\".uenibstreamprotobuf.CG_ConfigInfo\"\x8e\x01\n\"E_RABs_ToBeReleased_SgNBRelReqList\x12h\n&id_E_RABs_ToBeReleased_SgNBRelReq_Item\x18\x01 \x03(\x0b\x32\x38.uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_Item\"\x89\x01\n\x17UE_ContextKeptIndicator\x12\x41\n\x05value\x18\x01 \x01(\x0e\x32\x32.uenibstreamprotobuf.UE_ContextKeptIndicator.Value\"+\n\x05Value\x12\x18\n\x14protobuf_unspecified\x10\x00\x12\x08\n\x04true\x10\x01\"\xc5\x03\n#E_RABs_ToBeReleased_SgNBRelReq_Item\x12\x10\n\x08\x65_RAB_ID\x18\x01 \x01(\r\x12U\n\x1b\x65n_DC_ResourceConfiguration\x18\x02 \x01(\x0b\x32\x30.uenibstreamprotobuf.EN_DC_ResourceConfiguration\x12^\n\x0fsgNBPDCPpresent\x18\x03 \x01(\x0b\x32\x43.uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPpresentH\x00\x12\x64\n\x12sgNBPDCPnotpresent\x18\x04 \x01(\x0b\x32\x46.uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresentH\x00\x12U\n\riE_Extensions\x18\x05 \x03(\x0b\x32>.uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_ItemExtIEsB\x18\n\x16resource_configuration\"+\n)E_RABs_ToBeReleased_SgNBRelReq_ItemExtIEs\"\xbc\x01\n.E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPpresent\x12\x44\n\x14uL_GTPtunnelEndpoint\x18\x01 \x01(\x0b\x32&.uenibstreamprotobuf.GTPtunnelEndpoint\x12\x44\n\x14\x64L_GTPtunnelEndpoint\x18\x02 \x01(\x0b\x32&.uenibstreamprotobuf.GTPtunnelEndpoint\"\x98\x01\n1E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresent\x12\x63\n\riE_Extensions\x18\x01 \x03(\x0b\x32L.uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresentExtIEs\"9\n7E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresentExtIEsB:Z8gerrit.o-ran-sc.org/r/ric-plt/ue-nib/uenibstreamprotobufb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_wrappers__pb2.DESCRIPTOR,x2ap__common__types__pb2.DESCRIPTOR,rrc__cg__config__info__pb2.DESCRIPTOR,error__cause__pb2.DESCRIPTOR,])



_UE_CONTEXTKEPTINDICATOR_VALUE = _descriptor.EnumDescriptor(
  name='Value',
  full_name='uenibstreamprotobuf.UE_ContextKeptIndicator.Value',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='protobuf_unspecified', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='true', index=1, number=1,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=962,
  serialized_end=1005,
)
_sym_db.RegisterEnumDescriptor(_UE_CONTEXTKEPTINDICATOR_VALUE)


_SGNBRELEASEREQUEST = _descriptor.Descriptor(
  name='SgNBReleaseRequest',
  full_name='uenibstreamprotobuf.SgNBReleaseRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='protocolIEs', full_name='uenibstreamprotobuf.SgNBReleaseRequest.protocolIEs', index=0,
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
  serialized_start=153,
  serialized_end=239,
)


_SGNBRELEASEREQUEST_IES = _descriptor.Descriptor(
  name='SgNBReleaseRequest_IEs',
  full_name='uenibstreamprotobuf.SgNBReleaseRequest_IEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id_MeNB_UE_X2AP_ID', full_name='uenibstreamprotobuf.SgNBReleaseRequest_IEs.id_MeNB_UE_X2AP_ID', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_SgNB_UE_X2AP_ID', full_name='uenibstreamprotobuf.SgNBReleaseRequest_IEs.id_SgNB_UE_X2AP_ID', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_Cause', full_name='uenibstreamprotobuf.SgNBReleaseRequest_IEs.id_Cause', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_E_RABs_ToBeReleased_SgNBRelReqList', full_name='uenibstreamprotobuf.SgNBReleaseRequest_IEs.id_E_RABs_ToBeReleased_SgNBRelReqList', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_UE_ContextKeptIndicator', full_name='uenibstreamprotobuf.SgNBReleaseRequest_IEs.id_UE_ContextKeptIndicator', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_MeNB_UE_X2AP_ID_Extension', full_name='uenibstreamprotobuf.SgNBReleaseRequest_IEs.id_MeNB_UE_X2AP_ID_Extension', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_MeNBtoSgNBContainer', full_name='uenibstreamprotobuf.SgNBReleaseRequest_IEs.id_MeNBtoSgNBContainer', index=6,
      number=7, type=11, cpp_type=10, label=1,
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
  serialized_start=242,
  serialized_end=720,
)


_E_RABS_TOBERELEASED_SGNBRELREQLIST = _descriptor.Descriptor(
  name='E_RABs_ToBeReleased_SgNBRelReqList',
  full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReqList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id_E_RABs_ToBeReleased_SgNBRelReq_Item', full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReqList.id_E_RABs_ToBeReleased_SgNBRelReq_Item', index=0,
      number=1, type=11, cpp_type=10, label=3,
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
  serialized_start=723,
  serialized_end=865,
)


_UE_CONTEXTKEPTINDICATOR = _descriptor.Descriptor(
  name='UE_ContextKeptIndicator',
  full_name='uenibstreamprotobuf.UE_ContextKeptIndicator',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='value', full_name='uenibstreamprotobuf.UE_ContextKeptIndicator.value', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _UE_CONTEXTKEPTINDICATOR_VALUE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=868,
  serialized_end=1005,
)


_E_RABS_TOBERELEASED_SGNBRELREQ_ITEM = _descriptor.Descriptor(
  name='E_RABs_ToBeReleased_SgNBRelReq_Item',
  full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_Item',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='e_RAB_ID', full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_Item.e_RAB_ID', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='en_DC_ResourceConfiguration', full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_Item.en_DC_ResourceConfiguration', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBPDCPpresent', full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_Item.sgNBPDCPpresent', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBPDCPnotpresent', full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_Item.sgNBPDCPnotpresent', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='iE_Extensions', full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_Item.iE_Extensions', index=4,
      number=5, type=11, cpp_type=10, label=3,
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
    _descriptor.OneofDescriptor(
      name='resource_configuration', full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_Item.resource_configuration',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=1008,
  serialized_end=1461,
)


_E_RABS_TOBERELEASED_SGNBRELREQ_ITEMEXTIES = _descriptor.Descriptor(
  name='E_RABs_ToBeReleased_SgNBRelReq_ItemExtIEs',
  full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_ItemExtIEs',
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
  serialized_start=1463,
  serialized_end=1506,
)


_E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPPRESENT = _descriptor.Descriptor(
  name='E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPpresent',
  full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPpresent',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='uL_GTPtunnelEndpoint', full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPpresent.uL_GTPtunnelEndpoint', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dL_GTPtunnelEndpoint', full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPpresent.dL_GTPtunnelEndpoint', index=1,
      number=2, type=11, cpp_type=10, label=1,
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
  serialized_start=1509,
  serialized_end=1697,
)


_E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPNOTPRESENT = _descriptor.Descriptor(
  name='E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresent',
  full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresent',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='iE_Extensions', full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresent.iE_Extensions', index=0,
      number=1, type=11, cpp_type=10, label=3,
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
  serialized_start=1700,
  serialized_end=1852,
)


_E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPNOTPRESENTEXTIES = _descriptor.Descriptor(
  name='E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresentExtIEs',
  full_name='uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresentExtIEs',
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
  serialized_start=1854,
  serialized_end=1911,
)

_SGNBRELEASEREQUEST.fields_by_name['protocolIEs'].message_type = _SGNBRELEASEREQUEST_IES
_SGNBRELEASEREQUEST_IES.fields_by_name['id_SgNB_UE_X2AP_ID'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
_SGNBRELEASEREQUEST_IES.fields_by_name['id_Cause'].message_type = error__cause__pb2._CAUSE
_SGNBRELEASEREQUEST_IES.fields_by_name['id_E_RABs_ToBeReleased_SgNBRelReqList'].message_type = _E_RABS_TOBERELEASED_SGNBRELREQLIST
_SGNBRELEASEREQUEST_IES.fields_by_name['id_UE_ContextKeptIndicator'].message_type = _UE_CONTEXTKEPTINDICATOR
_SGNBRELEASEREQUEST_IES.fields_by_name['id_MeNB_UE_X2AP_ID_Extension'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
_SGNBRELEASEREQUEST_IES.fields_by_name['id_MeNBtoSgNBContainer'].message_type = rrc__cg__config__info__pb2._CG_CONFIGINFO
_E_RABS_TOBERELEASED_SGNBRELREQLIST.fields_by_name['id_E_RABs_ToBeReleased_SgNBRelReq_Item'].message_type = _E_RABS_TOBERELEASED_SGNBRELREQ_ITEM
_UE_CONTEXTKEPTINDICATOR.fields_by_name['value'].enum_type = _UE_CONTEXTKEPTINDICATOR_VALUE
_UE_CONTEXTKEPTINDICATOR_VALUE.containing_type = _UE_CONTEXTKEPTINDICATOR
_E_RABS_TOBERELEASED_SGNBRELREQ_ITEM.fields_by_name['en_DC_ResourceConfiguration'].message_type = x2ap__common__types__pb2._EN_DC_RESOURCECONFIGURATION
_E_RABS_TOBERELEASED_SGNBRELREQ_ITEM.fields_by_name['sgNBPDCPpresent'].message_type = _E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPPRESENT
_E_RABS_TOBERELEASED_SGNBRELREQ_ITEM.fields_by_name['sgNBPDCPnotpresent'].message_type = _E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPNOTPRESENT
_E_RABS_TOBERELEASED_SGNBRELREQ_ITEM.fields_by_name['iE_Extensions'].message_type = _E_RABS_TOBERELEASED_SGNBRELREQ_ITEMEXTIES
_E_RABS_TOBERELEASED_SGNBRELREQ_ITEM.oneofs_by_name['resource_configuration'].fields.append(
  _E_RABS_TOBERELEASED_SGNBRELREQ_ITEM.fields_by_name['sgNBPDCPpresent'])
_E_RABS_TOBERELEASED_SGNBRELREQ_ITEM.fields_by_name['sgNBPDCPpresent'].containing_oneof = _E_RABS_TOBERELEASED_SGNBRELREQ_ITEM.oneofs_by_name['resource_configuration']
_E_RABS_TOBERELEASED_SGNBRELREQ_ITEM.oneofs_by_name['resource_configuration'].fields.append(
  _E_RABS_TOBERELEASED_SGNBRELREQ_ITEM.fields_by_name['sgNBPDCPnotpresent'])
_E_RABS_TOBERELEASED_SGNBRELREQ_ITEM.fields_by_name['sgNBPDCPnotpresent'].containing_oneof = _E_RABS_TOBERELEASED_SGNBRELREQ_ITEM.oneofs_by_name['resource_configuration']
_E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPPRESENT.fields_by_name['uL_GTPtunnelEndpoint'].message_type = x2ap__common__types__pb2._GTPTUNNELENDPOINT
_E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPPRESENT.fields_by_name['dL_GTPtunnelEndpoint'].message_type = x2ap__common__types__pb2._GTPTUNNELENDPOINT
_E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPNOTPRESENT.fields_by_name['iE_Extensions'].message_type = _E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPNOTPRESENTEXTIES
DESCRIPTOR.message_types_by_name['SgNBReleaseRequest'] = _SGNBRELEASEREQUEST
DESCRIPTOR.message_types_by_name['SgNBReleaseRequest_IEs'] = _SGNBRELEASEREQUEST_IES
DESCRIPTOR.message_types_by_name['E_RABs_ToBeReleased_SgNBRelReqList'] = _E_RABS_TOBERELEASED_SGNBRELREQLIST
DESCRIPTOR.message_types_by_name['UE_ContextKeptIndicator'] = _UE_CONTEXTKEPTINDICATOR
DESCRIPTOR.message_types_by_name['E_RABs_ToBeReleased_SgNBRelReq_Item'] = _E_RABS_TOBERELEASED_SGNBRELREQ_ITEM
DESCRIPTOR.message_types_by_name['E_RABs_ToBeReleased_SgNBRelReq_ItemExtIEs'] = _E_RABS_TOBERELEASED_SGNBRELREQ_ITEMEXTIES
DESCRIPTOR.message_types_by_name['E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPpresent'] = _E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPPRESENT
DESCRIPTOR.message_types_by_name['E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresent'] = _E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPNOTPRESENT
DESCRIPTOR.message_types_by_name['E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresentExtIEs'] = _E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPNOTPRESENTEXTIES
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SgNBReleaseRequest = _reflection.GeneratedProtocolMessageType('SgNBReleaseRequest', (_message.Message,), {
  'DESCRIPTOR' : _SGNBRELEASEREQUEST,
  '__module__' : 'sgnb_release_request_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.SgNBReleaseRequest)
  })
_sym_db.RegisterMessage(SgNBReleaseRequest)

SgNBReleaseRequest_IEs = _reflection.GeneratedProtocolMessageType('SgNBReleaseRequest_IEs', (_message.Message,), {
  'DESCRIPTOR' : _SGNBRELEASEREQUEST_IES,
  '__module__' : 'sgnb_release_request_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.SgNBReleaseRequest_IEs)
  })
_sym_db.RegisterMessage(SgNBReleaseRequest_IEs)

E_RABs_ToBeReleased_SgNBRelReqList = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeReleased_SgNBRelReqList', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBERELEASED_SGNBRELREQLIST,
  '__module__' : 'sgnb_release_request_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReqList)
  })
_sym_db.RegisterMessage(E_RABs_ToBeReleased_SgNBRelReqList)

UE_ContextKeptIndicator = _reflection.GeneratedProtocolMessageType('UE_ContextKeptIndicator', (_message.Message,), {
  'DESCRIPTOR' : _UE_CONTEXTKEPTINDICATOR,
  '__module__' : 'sgnb_release_request_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.UE_ContextKeptIndicator)
  })
_sym_db.RegisterMessage(UE_ContextKeptIndicator)

E_RABs_ToBeReleased_SgNBRelReq_Item = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeReleased_SgNBRelReq_Item', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBERELEASED_SGNBRELREQ_ITEM,
  '__module__' : 'sgnb_release_request_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_Item)
  })
_sym_db.RegisterMessage(E_RABs_ToBeReleased_SgNBRelReq_Item)

E_RABs_ToBeReleased_SgNBRelReq_ItemExtIEs = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeReleased_SgNBRelReq_ItemExtIEs', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBERELEASED_SGNBRELREQ_ITEMEXTIES,
  '__module__' : 'sgnb_release_request_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_ItemExtIEs)
  })
_sym_db.RegisterMessage(E_RABs_ToBeReleased_SgNBRelReq_ItemExtIEs)

E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPpresent = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPpresent', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPPRESENT,
  '__module__' : 'sgnb_release_request_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPpresent)
  })
_sym_db.RegisterMessage(E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPpresent)

E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresent = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresent', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPNOTPRESENT,
  '__module__' : 'sgnb_release_request_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresent)
  })
_sym_db.RegisterMessage(E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresent)

E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresentExtIEs = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresentExtIEs', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBERELEASED_SGNBRELREQ_SGNBPDCPNOTPRESENTEXTIES,
  '__module__' : 'sgnb_release_request_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresentExtIEs)
  })
_sym_db.RegisterMessage(E_RABs_ToBeReleased_SgNBRelReq_SgNBPDCPnotpresentExtIEs)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)