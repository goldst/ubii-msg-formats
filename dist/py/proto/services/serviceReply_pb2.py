# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/services/serviceReply.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.general import success_pb2 as proto_dot_general_dot_success__pb2
from proto.general import error_pb2 as proto_dot_general_dot_error__pb2
from proto.topicData.topicDataRecord.dataStructure import lists_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_lists__pb2
from proto.clients import client_pb2 as proto_dot_clients_dot_client__pb2
from proto.devices import device_pb2 as proto_dot_devices_dot_device__pb2
from proto.devices import topicMux_pb2 as proto_dot_devices_dot_topicMux__pb2
from proto.devices import topicDemux_pb2 as proto_dot_devices_dot_topicDemux__pb2
from proto.servers import server_pb2 as proto_dot_servers_dot_server__pb2
from proto.sessions import session_pb2 as proto_dot_sessions_dot_session__pb2
from proto.services import service_pb2 as proto_dot_services_dot_service__pb2
from proto.processing import processingModule_pb2 as proto_dot_processing_dot_processingModule__pb2
from proto.processing import lockstepProcessing_pb2 as proto_dot_processing_dot_lockstepProcessing__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/services/serviceReply.proto',
  package='ubii.services',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n!proto/services/serviceReply.proto\x12\rubii.services\x1a\x1bproto/general/success.proto\x1a\x19proto/general/error.proto\x1a\x39proto/topicData/topicDataRecord/dataStructure/lists.proto\x1a\x1aproto/clients/client.proto\x1a\x1aproto/devices/device.proto\x1a\x1cproto/devices/topicMux.proto\x1a\x1eproto/devices/topicDemux.proto\x1a\x1aproto/servers/server.proto\x1a\x1cproto/sessions/session.proto\x1a\x1cproto/services/service.proto\x1a\'proto/processing/processingModule.proto\x1a)proto/processing/lockstepProcessing.proto\"\xdb\x07\n\x0cServiceReply\x12(\n\x07success\x18\x01 \x01(\x0b\x32\x15.ubii.general.SuccessH\x00\x12$\n\x05\x65rror\x18\x02 \x01(\x0b\x32\x13.ubii.general.ErrorH\x00\x12&\n\x06\x63lient\x18\x03 \x01(\x0b\x32\x14.ubii.clients.ClientH\x00\x12&\n\x06\x64\x65vice\x18\x04 \x01(\x0b\x32\x14.ubii.devices.DeviceH\x00\x12&\n\x06server\x18\x05 \x01(\x0b\x32\x14.ubii.servers.ServerH\x00\x12)\n\x07session\x18\x06 \x01(\x0b\x32\x16.ubii.sessions.SessionH\x00\x12\x32\n\x0csession_list\x18\x07 \x01(\x0b\x32\x1a.ubii.sessions.SessionListH\x00\x12>\n\x11processing_module\x18\x08 \x01(\x0b\x32!.ubii.processing.ProcessingModuleH\x00\x12G\n\x16processing_module_list\x18\t \x01(\x0b\x32%.ubii.processing.ProcessingModuleListH\x00\x12\x35\n\x0bstring_list\x18\n \x01(\x0b\x32\x1e.ubii.dataStructure.StringListH\x00\x12+\n\ttopic_mux\x18\x0b \x01(\x0b\x32\x16.ubii.devices.TopicMuxH\x00\x12\x34\n\x0etopic_mux_list\x18\x0c \x01(\x0b\x32\x1a.ubii.devices.TopicMuxListH\x00\x12/\n\x0btopic_demux\x18\r \x01(\x0b\x32\x18.ubii.devices.TopicDemuxH\x00\x12\x38\n\x10topic_demux_list\x18\x0e \x01(\x0b\x32\x1c.ubii.devices.TopicDemuxListH\x00\x12/\n\x0b\x63lient_list\x18\x0f \x01(\x0b\x32\x18.ubii.clients.ClientListH\x00\x12/\n\x0b\x64\x65vice_list\x18\x10 \x01(\x0b\x32\x18.ubii.devices.DeviceListH\x00\x12)\n\x07service\x18\x11 \x01(\x0b\x32\x16.ubii.services.ServiceH\x00\x12\x32\n\x0cservice_list\x18\x12 \x01(\x0b\x32\x1a.ubii.services.ServiceListH\x00\x12M\n\x19lockstep_processing_reply\x18\x13 \x01(\x0b\x32(.ubii.processing.LockstepProcessingReplyH\x00\x42\x06\n\x04typeb\x06proto3'
  ,
  dependencies=[proto_dot_general_dot_success__pb2.DESCRIPTOR,proto_dot_general_dot_error__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_lists__pb2.DESCRIPTOR,proto_dot_clients_dot_client__pb2.DESCRIPTOR,proto_dot_devices_dot_device__pb2.DESCRIPTOR,proto_dot_devices_dot_topicMux__pb2.DESCRIPTOR,proto_dot_devices_dot_topicDemux__pb2.DESCRIPTOR,proto_dot_servers_dot_server__pb2.DESCRIPTOR,proto_dot_sessions_dot_session__pb2.DESCRIPTOR,proto_dot_services_dot_service__pb2.DESCRIPTOR,proto_dot_processing_dot_processingModule__pb2.DESCRIPTOR,proto_dot_processing_dot_lockstepProcessing__pb2.DESCRIPTOR,])




_SERVICEREPLY = _descriptor.Descriptor(
  name='ServiceReply',
  full_name='ubii.services.ServiceReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='success', full_name='ubii.services.ServiceReply.success', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='error', full_name='ubii.services.ServiceReply.error', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='client', full_name='ubii.services.ServiceReply.client', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='device', full_name='ubii.services.ServiceReply.device', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='server', full_name='ubii.services.ServiceReply.server', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='session', full_name='ubii.services.ServiceReply.session', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='session_list', full_name='ubii.services.ServiceReply.session_list', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='processing_module', full_name='ubii.services.ServiceReply.processing_module', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='processing_module_list', full_name='ubii.services.ServiceReply.processing_module_list', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='string_list', full_name='ubii.services.ServiceReply.string_list', index=9,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='topic_mux', full_name='ubii.services.ServiceReply.topic_mux', index=10,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='topic_mux_list', full_name='ubii.services.ServiceReply.topic_mux_list', index=11,
      number=12, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='topic_demux', full_name='ubii.services.ServiceReply.topic_demux', index=12,
      number=13, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='topic_demux_list', full_name='ubii.services.ServiceReply.topic_demux_list', index=13,
      number=14, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='client_list', full_name='ubii.services.ServiceReply.client_list', index=14,
      number=15, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='device_list', full_name='ubii.services.ServiceReply.device_list', index=15,
      number=16, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='service', full_name='ubii.services.ServiceReply.service', index=16,
      number=17, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='service_list', full_name='ubii.services.ServiceReply.service_list', index=17,
      number=18, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='lockstep_processing_reply', full_name='ubii.services.ServiceReply.lockstep_processing_reply', index=18,
      number=19, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
    _descriptor.OneofDescriptor(
      name='type', full_name='ubii.services.ServiceReply.type',
      index=0, containing_type=None,
      create_key=_descriptor._internal_create_key,
    fields=[]),
  ],
  serialized_start=458,
  serialized_end=1445,
)

_SERVICEREPLY.fields_by_name['success'].message_type = proto_dot_general_dot_success__pb2._SUCCESS
_SERVICEREPLY.fields_by_name['error'].message_type = proto_dot_general_dot_error__pb2._ERROR
_SERVICEREPLY.fields_by_name['client'].message_type = proto_dot_clients_dot_client__pb2._CLIENT
_SERVICEREPLY.fields_by_name['device'].message_type = proto_dot_devices_dot_device__pb2._DEVICE
_SERVICEREPLY.fields_by_name['server'].message_type = proto_dot_servers_dot_server__pb2._SERVER
_SERVICEREPLY.fields_by_name['session'].message_type = proto_dot_sessions_dot_session__pb2._SESSION
_SERVICEREPLY.fields_by_name['session_list'].message_type = proto_dot_sessions_dot_session__pb2._SESSIONLIST
_SERVICEREPLY.fields_by_name['processing_module'].message_type = proto_dot_processing_dot_processingModule__pb2._PROCESSINGMODULE
_SERVICEREPLY.fields_by_name['processing_module_list'].message_type = proto_dot_processing_dot_processingModule__pb2._PROCESSINGMODULELIST
_SERVICEREPLY.fields_by_name['string_list'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_lists__pb2._STRINGLIST
_SERVICEREPLY.fields_by_name['topic_mux'].message_type = proto_dot_devices_dot_topicMux__pb2._TOPICMUX
_SERVICEREPLY.fields_by_name['topic_mux_list'].message_type = proto_dot_devices_dot_topicMux__pb2._TOPICMUXLIST
_SERVICEREPLY.fields_by_name['topic_demux'].message_type = proto_dot_devices_dot_topicDemux__pb2._TOPICDEMUX
_SERVICEREPLY.fields_by_name['topic_demux_list'].message_type = proto_dot_devices_dot_topicDemux__pb2._TOPICDEMUXLIST
_SERVICEREPLY.fields_by_name['client_list'].message_type = proto_dot_clients_dot_client__pb2._CLIENTLIST
_SERVICEREPLY.fields_by_name['device_list'].message_type = proto_dot_devices_dot_device__pb2._DEVICELIST
_SERVICEREPLY.fields_by_name['service'].message_type = proto_dot_services_dot_service__pb2._SERVICE
_SERVICEREPLY.fields_by_name['service_list'].message_type = proto_dot_services_dot_service__pb2._SERVICELIST
_SERVICEREPLY.fields_by_name['lockstep_processing_reply'].message_type = proto_dot_processing_dot_lockstepProcessing__pb2._LOCKSTEPPROCESSINGREPLY
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
  _SERVICEREPLY.fields_by_name['processing_module'])
_SERVICEREPLY.fields_by_name['processing_module'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['processing_module_list'])
_SERVICEREPLY.fields_by_name['processing_module_list'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['string_list'])
_SERVICEREPLY.fields_by_name['string_list'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['topic_mux'])
_SERVICEREPLY.fields_by_name['topic_mux'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['topic_mux_list'])
_SERVICEREPLY.fields_by_name['topic_mux_list'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['topic_demux'])
_SERVICEREPLY.fields_by_name['topic_demux'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['topic_demux_list'])
_SERVICEREPLY.fields_by_name['topic_demux_list'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['client_list'])
_SERVICEREPLY.fields_by_name['client_list'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['device_list'])
_SERVICEREPLY.fields_by_name['device_list'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['service'])
_SERVICEREPLY.fields_by_name['service'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['service_list'])
_SERVICEREPLY.fields_by_name['service_list'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
_SERVICEREPLY.oneofs_by_name['type'].fields.append(
  _SERVICEREPLY.fields_by_name['lockstep_processing_reply'])
_SERVICEREPLY.fields_by_name['lockstep_processing_reply'].containing_oneof = _SERVICEREPLY.oneofs_by_name['type']
DESCRIPTOR.message_types_by_name['ServiceReply'] = _SERVICEREPLY
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ServiceReply = _reflection.GeneratedProtocolMessageType('ServiceReply', (_message.Message,), {
  'DESCRIPTOR' : _SERVICEREPLY,
  '__module__' : 'proto.services.serviceReply_pb2'
  # @@protoc_insertion_point(class_scope:ubii.services.ServiceReply)
  })
_sym_db.RegisterMessage(ServiceReply)


# @@protoc_insertion_point(module_scope)
