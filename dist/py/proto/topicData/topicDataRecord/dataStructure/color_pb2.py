# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/topicData/topicDataRecord/dataStructure/color.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/topicData/topicDataRecord/dataStructure/color.proto',
  package='ubii.dataStructure',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n9proto/topicData/topicDataRecord/dataStructure/color.proto\x12\x12ubii.dataStructure\"3\n\x05\x43olor\x12\t\n\x01r\x18\x01 \x01(\x01\x12\t\n\x01g\x18\x02 \x01(\x01\x12\t\n\x01\x62\x18\x03 \x01(\x01\x12\t\n\x01\x61\x18\x04 \x01(\x01\x62\x06proto3'
)




_COLOR = _descriptor.Descriptor(
  name='Color',
  full_name='ubii.dataStructure.Color',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='r', full_name='ubii.dataStructure.Color.r', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='g', full_name='ubii.dataStructure.Color.g', index=1,
      number=2, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='b', full_name='ubii.dataStructure.Color.b', index=2,
      number=3, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='a', full_name='ubii.dataStructure.Color.a', index=3,
      number=4, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
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
  serialized_start=81,
  serialized_end=132,
)

DESCRIPTOR.message_types_by_name['Color'] = _COLOR
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Color = _reflection.GeneratedProtocolMessageType('Color', (_message.Message,), {
  'DESCRIPTOR' : _COLOR,
  '__module__' : 'proto.topicData.topicDataRecord.dataStructure.color_pb2'
  # @@protoc_insertion_point(class_scope:ubii.dataStructure.Color)
  })
_sym_db.RegisterMessage(Color)


# @@protoc_insertion_point(module_scope)
