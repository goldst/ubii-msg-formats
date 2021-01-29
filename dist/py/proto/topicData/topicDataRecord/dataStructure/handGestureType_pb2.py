# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/topicData/topicDataRecord/dataStructure/handGestureType.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/topicData/topicDataRecord/dataStructure/handGestureType.proto',
  package='ubii.dataStructure',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\nCproto/topicData/topicDataRecord/dataStructure/handGestureType.proto\x12\x12ubii.dataStructure*d\n\x0fHandGestureType\x12\x08\n\x04REST\x10\x00\x12\x12\n\x0e\x46INGERS_SPREAD\x10\x01\x12\x0b\n\x07WAVE_IN\x10\x02\x12\x0c\n\x08WAVE_OUT\x10\x03\x12\x08\n\x04\x46IST\x10\x04\x12\x0e\n\nDOUBLE_TAP\x10\x05\x62\x06proto3'
)

_HANDGESTURETYPE = _descriptor.EnumDescriptor(
  name='HandGestureType',
  full_name='ubii.dataStructure.HandGestureType',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='REST', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='FINGERS_SPREAD', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='WAVE_IN', index=2, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='WAVE_OUT', index=3, number=3,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='FIST', index=4, number=4,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='DOUBLE_TAP', index=5, number=5,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=91,
  serialized_end=191,
)
_sym_db.RegisterEnumDescriptor(_HANDGESTURETYPE)

HandGestureType = enum_type_wrapper.EnumTypeWrapper(_HANDGESTURETYPE)
REST = 0
FINGERS_SPREAD = 1
WAVE_IN = 2
WAVE_OUT = 3
FIST = 4
DOUBLE_TAP = 5


DESCRIPTOR.enum_types_by_name['HandGestureType'] = _HANDGESTURETYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)


# @@protoc_insertion_point(module_scope)
