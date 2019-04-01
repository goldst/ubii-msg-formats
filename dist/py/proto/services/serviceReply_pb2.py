# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/services/serviceReply.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.general import success_pb2 as proto_dot_general_dot_success__pb2
from proto.general import error_pb2 as proto_dot_general_dot_error__pb2
from proto.clients import client_pb2 as proto_dot_clients_dot_client__pb2
from proto.devices import device_pb2 as proto_dot_devices_dot_device__pb2
from proto.servers import server_pb2 as proto_dot_servers_dot_server__pb2
from proto.sessions import session_pb2 as proto_dot_sessions_dot_session__pb2
from proto.interactions import interaction_pb2 as proto_dot_interactions_dot_interaction__pb2
from proto.general import stringList_pb2 as proto_dot_general_dot_stringList__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/services/serviceReply.proto',
  package='ubii.services',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n!proto/services/serviceReply.proto\x12\rubii.services\x1a\x1bproto/general/success.proto\x1a\x19proto/general/error.proto\x1a\x1aproto/clients/client.proto\x1a\x1aproto/devices/device.proto\x1a\x1aproto/servers/server.proto\x1a\x1cproto/sessions/session.proto\x1a$proto/interactions/interaction.proto\x1a\x1eproto/general/stringList.proto\"\xe5\x03\n\x0cServiceReply\x12(\n\x07success\x18\x01 \x01(\x0b\x32\x15.ubii.general.SuccessH\x00\x12$\n\x05\x65rror\x18\x02 \x01(\x0b\x32\x13.ubii.general.ErrorH\x00\x12&\n\x06\x63lient\x18\x03 \x01(\x0b\x32\x14.ubii.clients.ClientH\x00\x12&\n\x06\x64\x65vice\x18\x04 \x01(\x0b\x32\x14.ubii.devices.DeviceH\x00\x12&\n\x06server\x18\x05 \x01(\x0b\x32\x14.ubii.servers.ServerH\x00\x12)\n\x07session\x18\x06 \x01(\x0b\x32\x16.ubii.sessions.SessionH\x00\x12\x32\n\x0csession_list\x18\x07 \x01(\x0b\x32\x1a.ubii.sessions.SessionListH\x00\x12\x35\n\x0binteraction\x18\x08 \x01(\x0b\x32\x1e.ubii.interactions.InteractionH\x00\x12>\n\x10interaction_list\x18\t \x01(\x0b\x32\".ubii.interactions.InteractionListH\x00\x12/\n\x0bstring_list\x18\n \x01(\x0b\x32\x18.ubii.general.StringListH\x00\x42\x06\n\x04typeb\x06proto3')
  ,
  dependencies=[proto_dot_general_dot_success__pb2.DESCRIPTOR,proto_dot_general_dot_error__pb2.DESCRIPTOR,proto_dot_clients_dot_client__pb2.DESCRIPTOR,proto_dot_devices_dot_device__pb2.DESCRIPTOR,proto_dot_servers_dot_server__pb2.DESCRIPTOR,proto_dot_sessions_dot_session__pb2.DESCRIPTOR,proto_dot_interactions_dot_interaction__pb2.DESCRIPTOR,proto_dot_general_dot_stringList__pb2.DESCRIPTOR,])




_SERVICEREPLY = _descriptor.Descriptor(
  name='ServiceReply',
  full_name='ubii.services.ServiceReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='success', full_name='ubii.services.ServiceReply.success', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='error', full_name='ubii.services.ServiceReply.error', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='client', full_name='ubii.services.ServiceReply.client', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='device', full_name='ubii.services.ServiceReply.device', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='server', full_name='ubii.services.ServiceReply.server', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='session', full_name='ubii.services.ServiceReply.session', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='session_list', full_name='ubii.services.ServiceReply.session_list', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='interaction', full_name='ubii.services.ServiceReply.interaction', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='interaction_list', full_name='ubii.services.ServiceReply.interaction_list', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='string_list', full_name='ubii.services.ServiceReply.string_list', index=9,
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
    _descriptor.OneofDescriptor(
      name='type', full_name='ubii.services.ServiceReply.type',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=293,
  serialized_end=778,
)

_SERVICEREPLY.fields_by_name['success'].message_type = proto_dot_general_dot_success__pb2._SUCCESS
_SERVICEREPLY.fields_by_name['error'].message_type = proto_dot_general_dot_error__pb2._ERROR
_SERVICEREPLY.fields_by_name['client'].message_type = proto_dot_clients_dot_client__pb2._CLIENT
_SERVICEREPLY.fields_by_name['device'].message_type = proto_dot_devices_dot_device__pb2._DEVICE
_SERVICEREPLY.fields_by_name['server'].message_type = proto_dot_servers_dot_server__pb2._SERVER
_SERVICEREPLY.fields_by_name['session'].message_type = proto_dot_sessions_dot_session__pb2._SESSION
_SERVICEREPLY.fields_by_name['session_list'].message_type = proto_dot_sessions_dot_session__pb2._SESSIONLIST
_SERVICEREPLY.fields_by_name['interaction'].message_type = proto_dot_interactions_dot_interaction__pb2._INTERACTION
_SERVICEREPLY.fields_by_name['interaction_list'].message_type = proto_dot_interactions_dot_interaction__pb2._INTERACTIONLIST
_SERVICEREPLY.fields_by_name['string_list'].message_type = proto_dot_general_dot_stringList__pb2._STRINGLIST
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['success'])
_SERVICEREPLY.fields_by_name['success'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['error'])
_SERVICEREPLY.fields_by_name['error'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['client'])
_SERVICEREPLY.fields_by_name['client'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['device'])
_SERVICEREPLY.fields_by_name['device'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['server'])
_SERVICEREPLY.fields_by_name['server'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['session'])
_SERVICEREPLY.fields_by_name['session'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['session_list'])
_SERVICEREPLY.fields_by_name['session_list'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['interaction'])
_SERVICEREPLY.fields_by_name['interaction'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['interaction_list'])
_SERVICEREPLY.fields_by_name['interaction_list'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['string_list'])
_SERVICEREPLY.fields_by_name['string_list'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
DESCRIPTOR.message_types_by_name['ServiceReply'] = _SERVICEREPLY
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ServiceReply = _reflection.GeneratedProtocolMessageType('ServiceReply', (_message.Message,), dict(
  DESCRIPTOR = _SERVICEREPLY,
  __module__ = 'proto.services.serviceReply_pb2'
  # @@protoc_insertion_point(class_scope:ubii.services.ServiceReply)
  ))
_sym_db.RegisterMessage(ServiceReply)


# @@protoc_insertion_point(module_scope)
