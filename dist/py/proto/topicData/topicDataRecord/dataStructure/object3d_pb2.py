# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/topicData/topicDataRecord/dataStructure/object3d.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.topicData.topicDataRecord.dataStructure import pose3d_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_pose3d__pb2
from proto.topicData.topicDataRecord.dataStructure import vector3_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector3__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/topicData/topicDataRecord/dataStructure/object3d.proto',
  package='ubii.dataStructure',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n<proto/topicData/topicDataRecord/dataStructure/object3d.proto\x12\x12ubii.dataStructure\x1a:proto/topicData/topicDataRecord/dataStructure/pose3d.proto\x1a;proto/topicData/topicDataRecord/dataStructure/vector3.proto\"k\n\x08Object3D\x12\n\n\x02id\x18\x01 \x01(\t\x12(\n\x04pose\x18\x02 \x01(\x0b\x32\x1a.ubii.dataStructure.Pose3D\x12)\n\x04size\x18\x03 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector3\">\n\x0cObject3DList\x12.\n\x08\x65lements\x18\x01 \x03(\x0b\x32\x1c.ubii.dataStructure.Object3Db\x06proto3')
  ,
  dependencies=[proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_pose3d__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector3__pb2.DESCRIPTOR,])




_OBJECT3D = _descriptor.Descriptor(
  name='Object3D',
  full_name='ubii.dataStructure.Object3D',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='ubii.dataStructure.Object3D.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='pose', full_name='ubii.dataStructure.Object3D.pose', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='size', full_name='ubii.dataStructure.Object3D.size', index=2,
      number=3, type=11, cpp_type=10, label=1,
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
  ],
  serialized_start=205,
  serialized_end=312,
)


_OBJECT3DLIST = _descriptor.Descriptor(
  name='Object3DList',
  full_name='ubii.dataStructure.Object3DList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.dataStructure.Object3DList.elements', index=0,
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
  serialized_start=314,
  serialized_end=376,
)

_OBJECT3D.fields_by_name['pose'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_pose3d__pb2._POSE3D
_OBJECT3D.fields_by_name['size'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector3__pb2._VECTOR3
_OBJECT3DLIST.fields_by_name['elements'].message_type = _OBJECT3D
DESCRIPTOR.message_types_by_name['Object3D'] = _OBJECT3D
DESCRIPTOR.message_types_by_name['Object3DList'] = _OBJECT3DLIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Object3D = _reflection.GeneratedProtocolMessageType('Object3D', (_message.Message,), dict(
  DESCRIPTOR = _OBJECT3D,
  __module__ = 'proto.topicData.topicDataRecord.dataStructure.object3d_pb2'
  # @@protoc_insertion_point(class_scope:ubii.dataStructure.Object3D)
  ))
_sym_db.RegisterMessage(Object3D)

Object3DList = _reflection.GeneratedProtocolMessageType('Object3DList', (_message.Message,), dict(
  DESCRIPTOR = _OBJECT3DLIST,
  __module__ = 'proto.topicData.topicDataRecord.dataStructure.object3d_pb2'
  # @@protoc_insertion_point(class_scope:ubii.dataStructure.Object3DList)
  ))
_sym_db.RegisterMessage(Object3DList)


# @@protoc_insertion_point(module_scope)
