# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/topicData/topicDataRecord/dataStructure/touchEvent.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.topicData.topicDataRecord.dataStructure import buttonEventType_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_buttonEventType__pb2
from proto.topicData.topicDataRecord.dataStructure import vector2_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector2__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/topicData/topicDataRecord/dataStructure/touchEvent.proto',
  package='ubii.dataStructure',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n>proto/topicData/topicDataRecord/dataStructure/touchEvent.proto\x12\x12ubii.dataStructure\x1a\x43proto/topicData/topicDataRecord/dataStructure/buttonEventType.proto\x1a;proto/topicData/topicDataRecord/dataStructure/vector2.proto\"n\n\nTouchEvent\x12\x31\n\x04type\x18\x01 \x01(\x0e\x32#.ubii.dataStructure.ButtonEventType\x12-\n\x08position\x18\x02 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector2b\x06proto3'
  ,
  dependencies=[proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_buttonEventType__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector2__pb2.DESCRIPTOR,])




_TOUCHEVENT = _descriptor.Descriptor(
  name='TouchEvent',
  full_name='ubii.dataStructure.TouchEvent',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='ubii.dataStructure.TouchEvent.type', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='position', full_name='ubii.dataStructure.TouchEvent.position', index=1,
      number=2, type=11, cpp_type=10, label=1,
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
  ],
  serialized_start=216,
  serialized_end=326,
)

_TOUCHEVENT.fields_by_name['type'].enum_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_buttonEventType__pb2._BUTTONEVENTTYPE
_TOUCHEVENT.fields_by_name['position'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector2__pb2._VECTOR2
DESCRIPTOR.message_types_by_name['TouchEvent'] = _TOUCHEVENT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

TouchEvent = _reflection.GeneratedProtocolMessageType('TouchEvent', (_message.Message,), {
  'DESCRIPTOR' : _TOUCHEVENT,
  '__module__' : 'proto.topicData.topicDataRecord.dataStructure.touchEvent_pb2'
  # @@protoc_insertion_point(class_scope:ubii.dataStructure.TouchEvent)
  })
_sym_db.RegisterMessage(TouchEvent)


# @@protoc_insertion_point(module_scope)
