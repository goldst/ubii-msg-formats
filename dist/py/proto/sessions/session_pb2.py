# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/sessions/session.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.interactions import interaction_pb2 as proto_dot_interactions_dot_interaction__pb2
from proto.sessions import ioMapping_pb2 as proto_dot_sessions_dot_ioMapping__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/sessions/session.proto',
  package='ubii.sessions',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\x1cproto/sessions/session.proto\x12\rubii.sessions\x1a$proto/interactions/interaction.proto\x1a\x1eproto/sessions/ioMapping.proto\"\x88\x01\n\x07Session\x12\n\n\x02id\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x34\n\x0cinteractions\x18\x03 \x03(\x0b\x32\x1e.ubii.interactions.Interaction\x12-\n\x0bio_mappings\x18\x04 \x03(\x0b\x32\x18.ubii.sessions.IOMappingb\x06proto3')
  ,
  dependencies=[proto_dot_interactions_dot_interaction__pb2.DESCRIPTOR,proto_dot_sessions_dot_ioMapping__pb2.DESCRIPTOR,])




_SESSION = _descriptor.Descriptor(
  name='Session',
  full_name='ubii.sessions.Session',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='ubii.sessions.Session.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='name', full_name='ubii.sessions.Session.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='interactions', full_name='ubii.sessions.Session.interactions', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='io_mappings', full_name='ubii.sessions.Session.io_mappings', index=3,
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
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=118,
  serialized_end=254,
)

_SESSION.fields_by_name['interactions'].message_type = proto_dot_interactions_dot_interaction__pb2._INTERACTION
_SESSION.fields_by_name['io_mappings'].message_type = proto_dot_sessions_dot_ioMapping__pb2._IOMAPPING
DESCRIPTOR.message_types_by_name['Session'] = _SESSION
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Session = _reflection.GeneratedProtocolMessageType('Session', (_message.Message,), dict(
  DESCRIPTOR = _SESSION,
  __module__ = 'proto.sessions.session_pb2'
  # @@protoc_insertion_point(class_scope:ubii.sessions.Session)
  ))
_sym_db.RegisterMessage(Session)


# @@protoc_insertion_point(module_scope)