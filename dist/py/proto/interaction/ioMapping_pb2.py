# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/interaction/ioMapping.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/interaction/ioMapping.proto',
  package='ubii.interaction',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n!proto/interaction/ioMapping.proto\x12\x10ubii.interaction\"_\n\tIOMapping\x12\x15\n\rinternal_name\x18\x01 \x01(\t\x12\r\n\x05topic\x18\x02 \x01(\t\x12\x15\n\rprotobuf_type\x18\x03 \x01(\t\x12\x15\n\rprotobuf_file\x18\x04 \x01(\tb\x06proto3')
)




_IOMAPPING = _descriptor.Descriptor(
  name='IOMapping',
  full_name='ubii.interaction.IOMapping',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='internal_name', full_name='ubii.interaction.IOMapping.internal_name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='topic', full_name='ubii.interaction.IOMapping.topic', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='protobuf_type', full_name='ubii.interaction.IOMapping.protobuf_type', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='protobuf_file', full_name='ubii.interaction.IOMapping.protobuf_file', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
  serialized_start=55,
  serialized_end=150,
)

DESCRIPTOR.message_types_by_name['IOMapping'] = _IOMAPPING
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

IOMapping = _reflection.GeneratedProtocolMessageType('IOMapping', (_message.Message,), dict(
  DESCRIPTOR = _IOMAPPING,
  __module__ = 'proto.interaction.ioMapping_pb2'
  # @@protoc_insertion_point(class_scope:ubii.interaction.IOMapping)
  ))
_sym_db.RegisterMessage(IOMapping)


# @@protoc_insertion_point(module_scope)