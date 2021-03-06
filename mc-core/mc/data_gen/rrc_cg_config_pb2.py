# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: rrc_cg_config.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import wrappers_pb2 as google_dot_protobuf_dot_wrappers__pb2
import rrc_common_types_pb2 as rrc__common__types__pb2
import rrc_reconfiguration_pb2 as rrc__reconfiguration__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='rrc_cg_config.proto',
  package='streaming_protobufs',
  syntax='proto3',
  serialized_options=_b('Z1gerrit.o-ran-sc.org/r/ric-plt/streaming-protobufs'),
  serialized_pb=_b('\n\x13rrc_cg_config.proto\x12\x13streaming_protobufs\x1a\x1egoogle/protobuf/wrappers.proto\x1a\x16rrc_common_types.proto\x1a\x19rrc_reconfiguration.proto\"\x7f\n\tCG_Config\x12\\\n\x19\x63riticalExtensionsChoice1\x18\x01 \x01(\x0b\x32\x37.streaming_protobufs.CG_ConfigCriticalExtensionsChoice1H\x00\x42\x14\n\x12\x63riticalExtensions\"e\n\"CG_ConfigCriticalExtensionsChoice1\x12\x39\n\x0bprotocolIEs\x18\x01 \x01(\x0b\x32\".streaming_protobufs.CG_Config_IEsH\x00\x42\x04\n\x02\x63\x31\"\xbc\x05\n\rCG_Config_IEs\x12\x44\n\x13scg_CellGroupConfig\x18\x01 \x01(\x0b\x32\'.streaming_protobufs.RRCReconfiguration\x12=\n\rscg_RB_Config\x18\x02 \x01(\x0b\x32&.streaming_protobufs.RadioBearerConfig\x12J\n\x14\x63onfigRestrictModReq\x18\x03 \x01(\x0b\x32,.streaming_protobufs.ConfigRestrictModReqSCG\x12\x32\n\x0b\x64rx_InfoSCG\x18\x04 \x01(\x0b\x32\x1d.streaming_protobufs.DRX_Info\x12G\n\x17\x63\x61ndidateCellInfoListSN\x18\x05 \x01(\x0b\x32&.streaming_protobufs.MeasResultList2NR\x12\x37\n\x0cmeasConfigSN\x18\x06 \x01(\x0b\x32!.streaming_protobufs.MeasConfigSN\x12M\n\x19selectedBandCombinationNR\x18\x07 \x01(\x0b\x32*.streaming_protobufs.BandCombinationInfoSN\x12\x38\n\x0e\x66r_InfoListSCG\x18\x08 \x01(\x0b\x32 .streaming_protobufs.FR_InfoList\x12S\n\x1a\x63\x61ndidateServingFreqListNR\x18\t \x01(\x0b\x32/.streaming_protobufs.CandidateServingFreqListNR\x12\x46\n\x14nonCriticalExtension\x18\n \x01(\x0b\x32(.streaming_protobufs.CG_Config_v1540_IEs\"\x97\x01\n\x17\x43onfigRestrictModReqSCG\x12\x44\n\x10requestedBC_MRDC\x18\x01 \x01(\x0b\x32*.streaming_protobufs.BandCombinationInfoSN\x12\x36\n\x11requestedP_MaxFR1\x18\x02 \x01(\x0b\x32\x1b.google.protobuf.Int32Value\"S\n\x15\x42\x61ndCombinationInfoSN\x12\x1c\n\x14\x62\x61ndCombinationIndex\x18\x01 \x01(\r\x12\x1c\n\x14requestedFeatureSets\x18\x02 \x01(\r\":\n\x0b\x46R_InfoList\x12+\n\x05items\x18\x01 \x03(\x0b\x32\x1c.streaming_protobufs.FR_Info\"O\n\x07\x46R_Info\x12\x15\n\rservCellIndex\x18\x01 \x01(\r\x12-\n\x07\x66r_Type\x18\x02 \x01(\x0b\x32\x1c.streaming_protobufs.FR_Type\"q\n\x07\x46R_Type\x12\x31\n\x05value\x18\x01 \x01(\x0e\x32\".streaming_protobufs.FR_Type.Value\"3\n\x05Value\x12\x18\n\x14protobuf_unspecified\x10\x00\x12\x07\n\x03\x66r1\x10\x01\x12\x07\n\x03\x66r2\x10\x02\"+\n\x1a\x43\x61ndidateServingFreqListNR\x12\r\n\x05items\x18\x01 \x03(\r\"\xc8\x01\n\x13\x43G_Config_v1540_IEs\x12\x35\n\x0fpSCellFrequency\x18\x01 \x01(\x0b\x32\x1c.google.protobuf.UInt32Value\x12\x41\n\x11reportCGI_Request\x18\x02 \x01(\x0b\x32&.streaming_protobufs.ReportCGI_Request\x12\x37\n\nph_InfoSCG\x18\x03 \x01(\x0b\x32#.streaming_protobufs.PH_TypeListSCG\"V\n\x11ReportCGI_Request\x12\x41\n\x11requestedCellInfo\x18\x01 \x01(\x0b\x32&.streaming_protobufs.RequestedCellInfo\"J\n\x11RequestedCellInfo\x12\x14\n\x0cssbFrequency\x18\x01 \x01(\r\x12\x1f\n\x17\x63\x65llForWhichToReportCGI\x18\x02 \x01(\r\"@\n\x0ePH_TypeListSCG\x12.\n\x05items\x18\x01 \x03(\x0b\x32\x1f.streaming_protobufs.PH_InfoSCG\"\xaa\x01\n\nPH_InfoSCG\x12\x15\n\rservCellIndex\x18\x01 \x01(\r\x12;\n\tph_Uplink\x18\x02 \x01(\x0b\x32(.streaming_protobufs.PH_UplinkCarrierSCG\x12H\n\x16ph_SupplementaryUplink\x18\x03 \x01(\x0b\x32(.streaming_protobufs.PH_UplinkCarrierSCG\"\x9f\x01\n\x13PH_UplinkCarrierSCG\x12I\n\x0bph_Type1or3\x18\x01 \x01(\x0e\x32\x34.streaming_protobufs.PH_UplinkCarrierSCG.PH_Type1or3\"=\n\x0bPH_Type1or3\x12\x18\n\x14protobuf_unspecified\x10\x00\x12\t\n\x05type1\x10\x01\x12\t\n\x05type3\x10\x02\"O\n\x0cMeasConfigSN\x12?\n\x15measuredFrequenciesSN\x18\x01 \x03(\x0b\x32 .streaming_protobufs.NR_FreqInfoB3Z1gerrit.o-ran-sc.org/r/ric-plt/streaming-protobufsb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_wrappers__pb2.DESCRIPTOR,rrc__common__types__pb2.DESCRIPTOR,rrc__reconfiguration__pb2.DESCRIPTOR,])



_FR_TYPE_VALUE = _descriptor.EnumDescriptor(
  name='Value',
  full_name='streaming_protobufs.FR_Type.Value',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='protobuf_unspecified', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='fr1', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='fr2', index=2, number=2,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1504,
  serialized_end=1555,
)
_sym_db.RegisterEnumDescriptor(_FR_TYPE_VALUE)

_PH_UPLINKCARRIERSCG_PH_TYPE1OR3 = _descriptor.EnumDescriptor(
  name='PH_Type1or3',
  full_name='streaming_protobufs.PH_UplinkCarrierSCG.PH_Type1or3',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='protobuf_unspecified', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='type1', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='type3', index=2, number=2,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=2307,
  serialized_end=2368,
)
_sym_db.RegisterEnumDescriptor(_PH_UPLINKCARRIERSCG_PH_TYPE1OR3)


_CG_CONFIG = _descriptor.Descriptor(
  name='CG_Config',
  full_name='streaming_protobufs.CG_Config',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='criticalExtensionsChoice1', full_name='streaming_protobufs.CG_Config.criticalExtensionsChoice1', index=0,
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
    _descriptor.OneofDescriptor(
      name='criticalExtensions', full_name='streaming_protobufs.CG_Config.criticalExtensions',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=127,
  serialized_end=254,
)


_CG_CONFIGCRITICALEXTENSIONSCHOICE1 = _descriptor.Descriptor(
  name='CG_ConfigCriticalExtensionsChoice1',
  full_name='streaming_protobufs.CG_ConfigCriticalExtensionsChoice1',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='protocolIEs', full_name='streaming_protobufs.CG_ConfigCriticalExtensionsChoice1.protocolIEs', index=0,
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
    _descriptor.OneofDescriptor(
      name='c1', full_name='streaming_protobufs.CG_ConfigCriticalExtensionsChoice1.c1',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=256,
  serialized_end=357,
)


_CG_CONFIG_IES = _descriptor.Descriptor(
  name='CG_Config_IEs',
  full_name='streaming_protobufs.CG_Config_IEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='scg_CellGroupConfig', full_name='streaming_protobufs.CG_Config_IEs.scg_CellGroupConfig', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='scg_RB_Config', full_name='streaming_protobufs.CG_Config_IEs.scg_RB_Config', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='configRestrictModReq', full_name='streaming_protobufs.CG_Config_IEs.configRestrictModReq', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='drx_InfoSCG', full_name='streaming_protobufs.CG_Config_IEs.drx_InfoSCG', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='candidateCellInfoListSN', full_name='streaming_protobufs.CG_Config_IEs.candidateCellInfoListSN', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='measConfigSN', full_name='streaming_protobufs.CG_Config_IEs.measConfigSN', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='selectedBandCombinationNR', full_name='streaming_protobufs.CG_Config_IEs.selectedBandCombinationNR', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='fr_InfoListSCG', full_name='streaming_protobufs.CG_Config_IEs.fr_InfoListSCG', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='candidateServingFreqListNR', full_name='streaming_protobufs.CG_Config_IEs.candidateServingFreqListNR', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='nonCriticalExtension', full_name='streaming_protobufs.CG_Config_IEs.nonCriticalExtension', index=9,
      number=10, type=11, cpp_type=10, label=1,
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
  serialized_start=360,
  serialized_end=1060,
)


_CONFIGRESTRICTMODREQSCG = _descriptor.Descriptor(
  name='ConfigRestrictModReqSCG',
  full_name='streaming_protobufs.ConfigRestrictModReqSCG',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='requestedBC_MRDC', full_name='streaming_protobufs.ConfigRestrictModReqSCG.requestedBC_MRDC', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='requestedP_MaxFR1', full_name='streaming_protobufs.ConfigRestrictModReqSCG.requestedP_MaxFR1', index=1,
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
  serialized_start=1063,
  serialized_end=1214,
)


_BANDCOMBINATIONINFOSN = _descriptor.Descriptor(
  name='BandCombinationInfoSN',
  full_name='streaming_protobufs.BandCombinationInfoSN',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='bandCombinationIndex', full_name='streaming_protobufs.BandCombinationInfoSN.bandCombinationIndex', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='requestedFeatureSets', full_name='streaming_protobufs.BandCombinationInfoSN.requestedFeatureSets', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=1216,
  serialized_end=1299,
)


_FR_INFOLIST = _descriptor.Descriptor(
  name='FR_InfoList',
  full_name='streaming_protobufs.FR_InfoList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='items', full_name='streaming_protobufs.FR_InfoList.items', index=0,
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
  serialized_start=1301,
  serialized_end=1359,
)


_FR_INFO = _descriptor.Descriptor(
  name='FR_Info',
  full_name='streaming_protobufs.FR_Info',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='servCellIndex', full_name='streaming_protobufs.FR_Info.servCellIndex', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='fr_Type', full_name='streaming_protobufs.FR_Info.fr_Type', index=1,
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
  serialized_start=1361,
  serialized_end=1440,
)


_FR_TYPE = _descriptor.Descriptor(
  name='FR_Type',
  full_name='streaming_protobufs.FR_Type',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='value', full_name='streaming_protobufs.FR_Type.value', index=0,
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
    _FR_TYPE_VALUE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1442,
  serialized_end=1555,
)


_CANDIDATESERVINGFREQLISTNR = _descriptor.Descriptor(
  name='CandidateServingFreqListNR',
  full_name='streaming_protobufs.CandidateServingFreqListNR',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='items', full_name='streaming_protobufs.CandidateServingFreqListNR.items', index=0,
      number=1, type=13, cpp_type=3, label=3,
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
  serialized_start=1557,
  serialized_end=1600,
)


_CG_CONFIG_V1540_IES = _descriptor.Descriptor(
  name='CG_Config_v1540_IEs',
  full_name='streaming_protobufs.CG_Config_v1540_IEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='pSCellFrequency', full_name='streaming_protobufs.CG_Config_v1540_IEs.pSCellFrequency', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='reportCGI_Request', full_name='streaming_protobufs.CG_Config_v1540_IEs.reportCGI_Request', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='ph_InfoSCG', full_name='streaming_protobufs.CG_Config_v1540_IEs.ph_InfoSCG', index=2,
      number=3, type=11, cpp_type=10, label=1,
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
  serialized_start=1603,
  serialized_end=1803,
)


_REPORTCGI_REQUEST = _descriptor.Descriptor(
  name='ReportCGI_Request',
  full_name='streaming_protobufs.ReportCGI_Request',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='requestedCellInfo', full_name='streaming_protobufs.ReportCGI_Request.requestedCellInfo', index=0,
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
  serialized_start=1805,
  serialized_end=1891,
)


_REQUESTEDCELLINFO = _descriptor.Descriptor(
  name='RequestedCellInfo',
  full_name='streaming_protobufs.RequestedCellInfo',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='ssbFrequency', full_name='streaming_protobufs.RequestedCellInfo.ssbFrequency', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='cellForWhichToReportCGI', full_name='streaming_protobufs.RequestedCellInfo.cellForWhichToReportCGI', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=1893,
  serialized_end=1967,
)


_PH_TYPELISTSCG = _descriptor.Descriptor(
  name='PH_TypeListSCG',
  full_name='streaming_protobufs.PH_TypeListSCG',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='items', full_name='streaming_protobufs.PH_TypeListSCG.items', index=0,
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
  serialized_start=1969,
  serialized_end=2033,
)


_PH_INFOSCG = _descriptor.Descriptor(
  name='PH_InfoSCG',
  full_name='streaming_protobufs.PH_InfoSCG',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='servCellIndex', full_name='streaming_protobufs.PH_InfoSCG.servCellIndex', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='ph_Uplink', full_name='streaming_protobufs.PH_InfoSCG.ph_Uplink', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='ph_SupplementaryUplink', full_name='streaming_protobufs.PH_InfoSCG.ph_SupplementaryUplink', index=2,
      number=3, type=11, cpp_type=10, label=1,
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
  serialized_start=2036,
  serialized_end=2206,
)


_PH_UPLINKCARRIERSCG = _descriptor.Descriptor(
  name='PH_UplinkCarrierSCG',
  full_name='streaming_protobufs.PH_UplinkCarrierSCG',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='ph_Type1or3', full_name='streaming_protobufs.PH_UplinkCarrierSCG.ph_Type1or3', index=0,
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
    _PH_UPLINKCARRIERSCG_PH_TYPE1OR3,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=2209,
  serialized_end=2368,
)


_MEASCONFIGSN = _descriptor.Descriptor(
  name='MeasConfigSN',
  full_name='streaming_protobufs.MeasConfigSN',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='measuredFrequenciesSN', full_name='streaming_protobufs.MeasConfigSN.measuredFrequenciesSN', index=0,
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
  serialized_start=2370,
  serialized_end=2449,
)

_CG_CONFIG.fields_by_name['criticalExtensionsChoice1'].message_type = _CG_CONFIGCRITICALEXTENSIONSCHOICE1
_CG_CONFIG.oneofs_by_name['criticalExtensions'].fields.append(
  _CG_CONFIG.fields_by_name['criticalExtensionsChoice1'])
_CG_CONFIG.fields_by_name['criticalExtensionsChoice1'].containing_oneof = _CG_CONFIG.oneofs_by_name['criticalExtensions']
_CG_CONFIGCRITICALEXTENSIONSCHOICE1.fields_by_name['protocolIEs'].message_type = _CG_CONFIG_IES
_CG_CONFIGCRITICALEXTENSIONSCHOICE1.oneofs_by_name['c1'].fields.append(
  _CG_CONFIGCRITICALEXTENSIONSCHOICE1.fields_by_name['protocolIEs'])
_CG_CONFIGCRITICALEXTENSIONSCHOICE1.fields_by_name['protocolIEs'].containing_oneof = _CG_CONFIGCRITICALEXTENSIONSCHOICE1.oneofs_by_name['c1']
_CG_CONFIG_IES.fields_by_name['scg_CellGroupConfig'].message_type = rrc__reconfiguration__pb2._RRCRECONFIGURATION
_CG_CONFIG_IES.fields_by_name['scg_RB_Config'].message_type = rrc__common__types__pb2._RADIOBEARERCONFIG
_CG_CONFIG_IES.fields_by_name['configRestrictModReq'].message_type = _CONFIGRESTRICTMODREQSCG
_CG_CONFIG_IES.fields_by_name['drx_InfoSCG'].message_type = rrc__common__types__pb2._DRX_INFO
_CG_CONFIG_IES.fields_by_name['candidateCellInfoListSN'].message_type = rrc__common__types__pb2._MEASRESULTLIST2NR
_CG_CONFIG_IES.fields_by_name['measConfigSN'].message_type = _MEASCONFIGSN
_CG_CONFIG_IES.fields_by_name['selectedBandCombinationNR'].message_type = _BANDCOMBINATIONINFOSN
_CG_CONFIG_IES.fields_by_name['fr_InfoListSCG'].message_type = _FR_INFOLIST
_CG_CONFIG_IES.fields_by_name['candidateServingFreqListNR'].message_type = _CANDIDATESERVINGFREQLISTNR
_CG_CONFIG_IES.fields_by_name['nonCriticalExtension'].message_type = _CG_CONFIG_V1540_IES
_CONFIGRESTRICTMODREQSCG.fields_by_name['requestedBC_MRDC'].message_type = _BANDCOMBINATIONINFOSN
_CONFIGRESTRICTMODREQSCG.fields_by_name['requestedP_MaxFR1'].message_type = google_dot_protobuf_dot_wrappers__pb2._INT32VALUE
_FR_INFOLIST.fields_by_name['items'].message_type = _FR_INFO
_FR_INFO.fields_by_name['fr_Type'].message_type = _FR_TYPE
_FR_TYPE.fields_by_name['value'].enum_type = _FR_TYPE_VALUE
_FR_TYPE_VALUE.containing_type = _FR_TYPE
_CG_CONFIG_V1540_IES.fields_by_name['pSCellFrequency'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
_CG_CONFIG_V1540_IES.fields_by_name['reportCGI_Request'].message_type = _REPORTCGI_REQUEST
_CG_CONFIG_V1540_IES.fields_by_name['ph_InfoSCG'].message_type = _PH_TYPELISTSCG
_REPORTCGI_REQUEST.fields_by_name['requestedCellInfo'].message_type = _REQUESTEDCELLINFO
_PH_TYPELISTSCG.fields_by_name['items'].message_type = _PH_INFOSCG
_PH_INFOSCG.fields_by_name['ph_Uplink'].message_type = _PH_UPLINKCARRIERSCG
_PH_INFOSCG.fields_by_name['ph_SupplementaryUplink'].message_type = _PH_UPLINKCARRIERSCG
_PH_UPLINKCARRIERSCG.fields_by_name['ph_Type1or3'].enum_type = _PH_UPLINKCARRIERSCG_PH_TYPE1OR3
_PH_UPLINKCARRIERSCG_PH_TYPE1OR3.containing_type = _PH_UPLINKCARRIERSCG
_MEASCONFIGSN.fields_by_name['measuredFrequenciesSN'].message_type = rrc__common__types__pb2._NR_FREQINFO
DESCRIPTOR.message_types_by_name['CG_Config'] = _CG_CONFIG
DESCRIPTOR.message_types_by_name['CG_ConfigCriticalExtensionsChoice1'] = _CG_CONFIGCRITICALEXTENSIONSCHOICE1
DESCRIPTOR.message_types_by_name['CG_Config_IEs'] = _CG_CONFIG_IES
DESCRIPTOR.message_types_by_name['ConfigRestrictModReqSCG'] = _CONFIGRESTRICTMODREQSCG
DESCRIPTOR.message_types_by_name['BandCombinationInfoSN'] = _BANDCOMBINATIONINFOSN
DESCRIPTOR.message_types_by_name['FR_InfoList'] = _FR_INFOLIST
DESCRIPTOR.message_types_by_name['FR_Info'] = _FR_INFO
DESCRIPTOR.message_types_by_name['FR_Type'] = _FR_TYPE
DESCRIPTOR.message_types_by_name['CandidateServingFreqListNR'] = _CANDIDATESERVINGFREQLISTNR
DESCRIPTOR.message_types_by_name['CG_Config_v1540_IEs'] = _CG_CONFIG_V1540_IES
DESCRIPTOR.message_types_by_name['ReportCGI_Request'] = _REPORTCGI_REQUEST
DESCRIPTOR.message_types_by_name['RequestedCellInfo'] = _REQUESTEDCELLINFO
DESCRIPTOR.message_types_by_name['PH_TypeListSCG'] = _PH_TYPELISTSCG
DESCRIPTOR.message_types_by_name['PH_InfoSCG'] = _PH_INFOSCG
DESCRIPTOR.message_types_by_name['PH_UplinkCarrierSCG'] = _PH_UPLINKCARRIERSCG
DESCRIPTOR.message_types_by_name['MeasConfigSN'] = _MEASCONFIGSN
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

CG_Config = _reflection.GeneratedProtocolMessageType('CG_Config', (_message.Message,), {
  'DESCRIPTOR' : _CG_CONFIG,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.CG_Config)
  })
_sym_db.RegisterMessage(CG_Config)

CG_ConfigCriticalExtensionsChoice1 = _reflection.GeneratedProtocolMessageType('CG_ConfigCriticalExtensionsChoice1', (_message.Message,), {
  'DESCRIPTOR' : _CG_CONFIGCRITICALEXTENSIONSCHOICE1,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.CG_ConfigCriticalExtensionsChoice1)
  })
_sym_db.RegisterMessage(CG_ConfigCriticalExtensionsChoice1)

CG_Config_IEs = _reflection.GeneratedProtocolMessageType('CG_Config_IEs', (_message.Message,), {
  'DESCRIPTOR' : _CG_CONFIG_IES,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.CG_Config_IEs)
  })
_sym_db.RegisterMessage(CG_Config_IEs)

ConfigRestrictModReqSCG = _reflection.GeneratedProtocolMessageType('ConfigRestrictModReqSCG', (_message.Message,), {
  'DESCRIPTOR' : _CONFIGRESTRICTMODREQSCG,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.ConfigRestrictModReqSCG)
  })
_sym_db.RegisterMessage(ConfigRestrictModReqSCG)

BandCombinationInfoSN = _reflection.GeneratedProtocolMessageType('BandCombinationInfoSN', (_message.Message,), {
  'DESCRIPTOR' : _BANDCOMBINATIONINFOSN,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.BandCombinationInfoSN)
  })
_sym_db.RegisterMessage(BandCombinationInfoSN)

FR_InfoList = _reflection.GeneratedProtocolMessageType('FR_InfoList', (_message.Message,), {
  'DESCRIPTOR' : _FR_INFOLIST,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.FR_InfoList)
  })
_sym_db.RegisterMessage(FR_InfoList)

FR_Info = _reflection.GeneratedProtocolMessageType('FR_Info', (_message.Message,), {
  'DESCRIPTOR' : _FR_INFO,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.FR_Info)
  })
_sym_db.RegisterMessage(FR_Info)

FR_Type = _reflection.GeneratedProtocolMessageType('FR_Type', (_message.Message,), {
  'DESCRIPTOR' : _FR_TYPE,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.FR_Type)
  })
_sym_db.RegisterMessage(FR_Type)

CandidateServingFreqListNR = _reflection.GeneratedProtocolMessageType('CandidateServingFreqListNR', (_message.Message,), {
  'DESCRIPTOR' : _CANDIDATESERVINGFREQLISTNR,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.CandidateServingFreqListNR)
  })
_sym_db.RegisterMessage(CandidateServingFreqListNR)

CG_Config_v1540_IEs = _reflection.GeneratedProtocolMessageType('CG_Config_v1540_IEs', (_message.Message,), {
  'DESCRIPTOR' : _CG_CONFIG_V1540_IES,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.CG_Config_v1540_IEs)
  })
_sym_db.RegisterMessage(CG_Config_v1540_IEs)

ReportCGI_Request = _reflection.GeneratedProtocolMessageType('ReportCGI_Request', (_message.Message,), {
  'DESCRIPTOR' : _REPORTCGI_REQUEST,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.ReportCGI_Request)
  })
_sym_db.RegisterMessage(ReportCGI_Request)

RequestedCellInfo = _reflection.GeneratedProtocolMessageType('RequestedCellInfo', (_message.Message,), {
  'DESCRIPTOR' : _REQUESTEDCELLINFO,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.RequestedCellInfo)
  })
_sym_db.RegisterMessage(RequestedCellInfo)

PH_TypeListSCG = _reflection.GeneratedProtocolMessageType('PH_TypeListSCG', (_message.Message,), {
  'DESCRIPTOR' : _PH_TYPELISTSCG,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.PH_TypeListSCG)
  })
_sym_db.RegisterMessage(PH_TypeListSCG)

PH_InfoSCG = _reflection.GeneratedProtocolMessageType('PH_InfoSCG', (_message.Message,), {
  'DESCRIPTOR' : _PH_INFOSCG,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.PH_InfoSCG)
  })
_sym_db.RegisterMessage(PH_InfoSCG)

PH_UplinkCarrierSCG = _reflection.GeneratedProtocolMessageType('PH_UplinkCarrierSCG', (_message.Message,), {
  'DESCRIPTOR' : _PH_UPLINKCARRIERSCG,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.PH_UplinkCarrierSCG)
  })
_sym_db.RegisterMessage(PH_UplinkCarrierSCG)

MeasConfigSN = _reflection.GeneratedProtocolMessageType('MeasConfigSN', (_message.Message,), {
  'DESCRIPTOR' : _MEASCONFIGSN,
  '__module__' : 'rrc_cg_config_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.MeasConfigSN)
  })
_sym_db.RegisterMessage(MeasConfigSN)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
