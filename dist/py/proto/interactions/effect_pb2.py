# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/interactions/effect.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/interactions/effect.proto',
  package='ubii.interactions',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\x1fproto/interactions/effect.proto\x12\x11ubii.interactions\"4\n\x06\x45\x66\x66\x65\x63t\x12\n\n\x02id\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x10\n\x08\x63\x61llback\x18\x03 \x01(\tb\x06proto3')
)




_EFFECT = _descriptor.Descriptor(
  name='Effect',
  full_name='ubii.interactions.Effect',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='ubii.interactions.Effect.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='name', full_name='ubii.interactions.Effect.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='callback', full_name='ubii.interactions.Effect.callback', index=2,
      number=3, type=9, cpp_type=9, label=1,
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
  serialized_start=54,
  serialized_end=106,
)

DESCRIPTOR.message_types_by_name['Effect'] = _EFFECT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Effect = _reflection.GeneratedProtocolMessageType('Effect', (_message.Message,), dict(
  DESCRIPTOR = _EFFECT,
  __module__ = 'proto.interactions.effect_pb2'
  # @@protoc_insertion_point(class_scope:ubii.interactions.Effect)
  ))
_sym_db.RegisterMessage(Effect)


# @@protoc_insertion_point(module_scope)