# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/interactions/interaction.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.interactions import ioFormat_pb2 as proto_dot_interactions_dot_ioFormat__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/interactions/interaction.proto',
  package='ubii.interactions',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n$proto/interactions/interaction.proto\x12\x11ubii.interactions\x1a!proto/interactions/ioFormat.proto\"\xad\x01\n\x0bInteraction\x12\n\n\x02id\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x1b\n\x13processing_callback\x18\x03 \x01(\t\x12\x32\n\rinput_formats\x18\x04 \x03(\x0b\x32\x1b.ubii.interactions.IOFormat\x12\x33\n\x0eoutput_formats\x18\x05 \x03(\x0b\x32\x1b.ubii.interactions.IOFormat\"?\n\x0fInteractionList\x12,\n\x04list\x18\x01 \x03(\x0b\x32\x1e.ubii.interactions.Interactionb\x06proto3')
  ,
  dependencies=[proto_dot_interactions_dot_ioFormat__pb2.DESCRIPTOR,])




_INTERACTION = _descriptor.Descriptor(
  name='Interaction',
  full_name='ubii.interactions.Interaction',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='ubii.interactions.Interaction.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='name', full_name='ubii.interactions.Interaction.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='processing_callback', full_name='ubii.interactions.Interaction.processing_callback', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='input_formats', full_name='ubii.interactions.Interaction.input_formats', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='output_formats', full_name='ubii.interactions.Interaction.output_formats', index=4,
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
  ],
  serialized_start=95,
  serialized_end=268,
)


_INTERACTIONLIST = _descriptor.Descriptor(
  name='InteractionList',
  full_name='ubii.interactions.InteractionList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='list', full_name='ubii.interactions.InteractionList.list', index=0,
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
  serialized_start=270,
  serialized_end=333,
)

_INTERACTION.fields_by_name['input_formats'].message_type = proto_dot_interactions_dot_ioFormat__pb2._IOFORMAT
_INTERACTION.fields_by_name['output_formats'].message_type = proto_dot_interactions_dot_ioFormat__pb2._IOFORMAT
_INTERACTIONLIST.fields_by_name['list'].message_type = _INTERACTION
DESCRIPTOR.message_types_by_name['Interaction'] = _INTERACTION
DESCRIPTOR.message_types_by_name['InteractionList'] = _INTERACTIONLIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Interaction = _reflection.GeneratedProtocolMessageType('Interaction', (_message.Message,), dict(
  DESCRIPTOR = _INTERACTION,
  __module__ = 'proto.interactions.interaction_pb2'
  # @@protoc_insertion_point(class_scope:ubii.interactions.Interaction)
  ))
_sym_db.RegisterMessage(Interaction)

InteractionList = _reflection.GeneratedProtocolMessageType('InteractionList', (_message.Message,), dict(
  DESCRIPTOR = _INTERACTIONLIST,
  __module__ = 'proto.interactions.interaction_pb2'
  # @@protoc_insertion_point(class_scope:ubii.interactions.InteractionList)
  ))
_sym_db.RegisterMessage(InteractionList)


# @@protoc_insertion_point(module_scope)
