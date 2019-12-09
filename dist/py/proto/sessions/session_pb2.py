# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/sessions/session.proto

from google.protobuf.internal import enum_type_wrapper
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
  serialized_pb=b'\n\x1cproto/sessions/session.proto\x12\rubii.sessions\x1a$proto/interactions/interaction.proto\x1a\x1eproto/sessions/ioMapping.proto\"\x9c\x02\n\x07Session\x12\n\n\x02id\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x34\n\x0cinteractions\x18\x03 \x03(\x0b\x32\x1e.ubii.interactions.Interaction\x12-\n\x0bio_mappings\x18\x04 \x03(\x0b\x32\x18.ubii.sessions.IOMapping\x12\x0c\n\x04tags\x18\x05 \x03(\t\x12\x13\n\x0b\x64\x65scription\x18\x06 \x01(\t\x12\x0f\n\x07\x61uthors\x18\x07 \x03(\t\x12\x30\n\x0cprocess_mode\x18\x08 \x01(\x0e\x32\x1a.ubii.sessions.ProcessMode\x12,\n\x06status\x18\t \x01(\x0e\x32\x1c.ubii.sessions.SessionStatus\"7\n\x0bSessionList\x12(\n\x08\x65lements\x18\x01 \x03(\x0b\x32\x16.ubii.sessions.Session*I\n\x0bProcessMode\x12\x16\n\x12\x43YCLE_INTERACTIONS\x10\x00\x12\"\n\x1eINDIVIDUAL_PROCESS_FREQUENCIES\x10\x01*B\n\rSessionStatus\x12\x0b\n\x07\x43REATED\x10\x00\x12\x0b\n\x07RUNNING\x10\x01\x12\n\n\x06PAUSED\x10\x02\x12\x0b\n\x07STOPPED\x10\x03\x62\x06proto3'
  ,
  dependencies=[proto_dot_interactions_dot_interaction__pb2.DESCRIPTOR,proto_dot_sessions_dot_ioMapping__pb2.DESCRIPTOR,])

_PROCESSMODE = _descriptor.EnumDescriptor(
  name='ProcessMode',
  full_name='ubii.sessions.ProcessMode',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='CYCLE_INTERACTIONS', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='INDIVIDUAL_PROCESS_FREQUENCIES', index=1, number=1,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=461,
  serialized_end=534,
)
_sym_db.RegisterEnumDescriptor(_PROCESSMODE)

ProcessMode = enum_type_wrapper.EnumTypeWrapper(_PROCESSMODE)
_SESSIONSTATUS = _descriptor.EnumDescriptor(
  name='SessionStatus',
  full_name='ubii.sessions.SessionStatus',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='CREATED', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='RUNNING', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PAUSED', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='STOPPED', index=3, number=3,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=536,
  serialized_end=602,
)
_sym_db.RegisterEnumDescriptor(_SESSIONSTATUS)

SessionStatus = enum_type_wrapper.EnumTypeWrapper(_SESSIONSTATUS)
CYCLE_INTERACTIONS = 0
INDIVIDUAL_PROCESS_FREQUENCIES = 1
CREATED = 0
RUNNING = 1
PAUSED = 2
STOPPED = 3



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
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='name', full_name='ubii.sessions.Session.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
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
    _descriptor.FieldDescriptor(
      name='tags', full_name='ubii.sessions.Session.tags', index=4,
      number=5, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='description', full_name='ubii.sessions.Session.description', index=5,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='authors', full_name='ubii.sessions.Session.authors', index=6,
      number=7, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='process_mode', full_name='ubii.sessions.Session.process_mode', index=7,
      number=8, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='status', full_name='ubii.sessions.Session.status', index=8,
      number=9, type=14, cpp_type=8, label=1,
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
  serialized_start=118,
  serialized_end=402,
)


_SESSIONLIST = _descriptor.Descriptor(
  name='SessionList',
  full_name='ubii.sessions.SessionList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.sessions.SessionList.elements', index=0,
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
  serialized_start=404,
  serialized_end=459,
)

_SESSION.fields_by_name['interactions'].message_type = proto_dot_interactions_dot_interaction__pb2._INTERACTION
_SESSION.fields_by_name['io_mappings'].message_type = proto_dot_sessions_dot_ioMapping__pb2._IOMAPPING
_SESSION.fields_by_name['process_mode'].enum_type = _PROCESSMODE
_SESSION.fields_by_name['status'].enum_type = _SESSIONSTATUS
_SESSIONLIST.fields_by_name['elements'].message_type = _SESSION
DESCRIPTOR.message_types_by_name['Session'] = _SESSION
DESCRIPTOR.message_types_by_name['SessionList'] = _SESSIONLIST
DESCRIPTOR.enum_types_by_name['ProcessMode'] = _PROCESSMODE
DESCRIPTOR.enum_types_by_name['SessionStatus'] = _SESSIONSTATUS
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Session = _reflection.GeneratedProtocolMessageType('Session', (_message.Message,), {
  'DESCRIPTOR' : _SESSION,
  '__module__' : 'proto.sessions.session_pb2'
  # @@protoc_insertion_point(class_scope:ubii.sessions.Session)
  })
_sym_db.RegisterMessage(Session)

SessionList = _reflection.GeneratedProtocolMessageType('SessionList', (_message.Message,), {
  'DESCRIPTOR' : _SESSIONLIST,
  '__module__' : 'proto.sessions.session_pb2'
  # @@protoc_insertion_point(class_scope:ubii.sessions.SessionList)
  })
_sym_db.RegisterMessage(SessionList)


# @@protoc_insertion_point(module_scope)
