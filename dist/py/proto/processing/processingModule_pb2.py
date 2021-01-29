# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/processing/processingModule.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/processing/processingModule.proto',
  package='ubii.processing',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\'proto/processing/processingModule.proto\x12\x0fubii.processing\"\xf4\x02\n\x0eProcessingMode\x12>\n\tfrequency\x18\x01 \x01(\x0b\x32).ubii.processing.ProcessingMode.FrequencyH\x00\x12<\n\x08lockstep\x18\x02 \x01(\x0b\x32(.ubii.processing.ProcessingMode.LockstepH\x00\x12J\n\x10trigger_on_input\x18\x03 \x01(\x0b\x32..ubii.processing.ProcessingMode.TriggerOnInputH\x00\x1a\x1a\n\tFrequency\x12\r\n\x05hertz\x18\x01 \x01(\x05\x1a,\n\x08Lockstep\x12 \n\x18process_request_endpoint\x18\x01 \x01(\t\x1a\x46\n\x0eTriggerOnInput\x12\x14\n\x0cmin_delay_ms\x18\x01 \x01(\x05\x12\x1e\n\x16\x61ll_inputs_need_update\x18\x02 \x01(\x08\x42\x06\n\x04mode\"9\n\x08ModuleIO\x12\x15\n\rinternal_name\x18\x01 \x01(\t\x12\x16\n\x0emessage_format\x18\x02 \x01(\t\"\x9c\x05\n\x10ProcessingModule\x12\n\n\x02id\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x0f\n\x07\x61uthors\x18\x03 \x03(\t\x12\x0c\n\x04tags\x18\x04 \x03(\t\x12\x13\n\x0b\x64\x65scription\x18\x05 \x01(\t\x12\x0f\n\x07node_id\x18\x06 \x01(\t\x12\x12\n\nsession_id\x18\x07 \x01(\t\x12\x38\n\x06status\x18\x08 \x01(\x0e\x32(.ubii.processing.ProcessingModule.Status\x12\x38\n\x0fprocessing_mode\x18\t \x01(\x0b\x32\x1f.ubii.processing.ProcessingMode\x12)\n\x06inputs\x18\n \x03(\x0b\x32\x19.ubii.processing.ModuleIO\x12*\n\x07outputs\x18\x0b \x03(\x0b\x32\x19.ubii.processing.ModuleIO\x12<\n\x08language\x18\x0c \x01(\x0e\x32*.ubii.processing.ProcessingModule.Language\x12!\n\x19on_processing_stringified\x18\r \x01(\t\x12\x1e\n\x16on_created_stringified\x18\x0e \x01(\t\x12\x1d\n\x15on_halted_stringified\x18\x0f \x01(\t\x12 \n\x18on_destroyed_stringified\x18\x10 \x01(\t\"Q\n\x06Status\x12\x0f\n\x0bINITIALIZED\x10\x00\x12\x0b\n\x07\x43REATED\x10\x01\x12\x0e\n\nPROCESSING\x10\x02\x12\n\n\x06HALTED\x10\x03\x12\r\n\tDESTROYED\x10\x04\"5\n\x08Language\x12\x07\n\x03\x43PP\x10\x00\x12\x06\n\x02PY\x10\x01\x12\x06\n\x02JS\x10\x02\x12\x06\n\x02\x43S\x10\x03\x12\x08\n\x04JAVA\x10\x04\"K\n\x14ProcessingModuleList\x12\x33\n\x08\x65lements\x18\x01 \x03(\x0b\x32!.ubii.processing.ProcessingModuleb\x06proto3'
)



_PROCESSINGMODULE_STATUS = _descriptor.EnumDescriptor(
  name='Status',
  full_name='ubii.processing.ProcessingModule.Status',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='INITIALIZED', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CREATED', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='PROCESSING', index=2, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='HALTED', index=3, number=3,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='DESTROYED', index=4, number=4,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1027,
  serialized_end=1108,
)
_sym_db.RegisterEnumDescriptor(_PROCESSINGMODULE_STATUS)

_PROCESSINGMODULE_LANGUAGE = _descriptor.EnumDescriptor(
  name='Language',
  full_name='ubii.processing.ProcessingModule.Language',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='CPP', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='PY', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='JS', index=2, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='CS', index=3, number=3,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='JAVA', index=4, number=4,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1110,
  serialized_end=1163,
)
_sym_db.RegisterEnumDescriptor(_PROCESSINGMODULE_LANGUAGE)


_PROCESSINGMODE_FREQUENCY = _descriptor.Descriptor(
  name='Frequency',
  full_name='ubii.processing.ProcessingMode.Frequency',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='hertz', full_name='ubii.processing.ProcessingMode.Frequency.hertz', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=281,
  serialized_end=307,
)

_PROCESSINGMODE_LOCKSTEP = _descriptor.Descriptor(
  name='Lockstep',
  full_name='ubii.processing.ProcessingMode.Lockstep',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='process_request_endpoint', full_name='ubii.processing.ProcessingMode.Lockstep.process_request_endpoint', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
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
  serialized_start=309,
  serialized_end=353,
)

_PROCESSINGMODE_TRIGGERONINPUT = _descriptor.Descriptor(
  name='TriggerOnInput',
  full_name='ubii.processing.ProcessingMode.TriggerOnInput',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='min_delay_ms', full_name='ubii.processing.ProcessingMode.TriggerOnInput.min_delay_ms', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='all_inputs_need_update', full_name='ubii.processing.ProcessingMode.TriggerOnInput.all_inputs_need_update', index=1,
      number=2, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
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
  serialized_start=355,
  serialized_end=425,
)

_PROCESSINGMODE = _descriptor.Descriptor(
  name='ProcessingMode',
  full_name='ubii.processing.ProcessingMode',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='frequency', full_name='ubii.processing.ProcessingMode.frequency', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='lockstep', full_name='ubii.processing.ProcessingMode.lockstep', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='trigger_on_input', full_name='ubii.processing.ProcessingMode.trigger_on_input', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[_PROCESSINGMODE_FREQUENCY, _PROCESSINGMODE_LOCKSTEP, _PROCESSINGMODE_TRIGGERONINPUT, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='mode', full_name='ubii.processing.ProcessingMode.mode',
      index=0, containing_type=None,
      create_key=_descriptor._internal_create_key,
    fields=[]),
  ],
  serialized_start=61,
  serialized_end=433,
)


_MODULEIO = _descriptor.Descriptor(
  name='ModuleIO',
  full_name='ubii.processing.ModuleIO',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='internal_name', full_name='ubii.processing.ModuleIO.internal_name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='message_format', full_name='ubii.processing.ModuleIO.message_format', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
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
  serialized_start=435,
  serialized_end=492,
)


_PROCESSINGMODULE = _descriptor.Descriptor(
  name='ProcessingModule',
  full_name='ubii.processing.ProcessingModule',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='ubii.processing.ProcessingModule.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='name', full_name='ubii.processing.ProcessingModule.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='authors', full_name='ubii.processing.ProcessingModule.authors', index=2,
      number=3, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='tags', full_name='ubii.processing.ProcessingModule.tags', index=3,
      number=4, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='description', full_name='ubii.processing.ProcessingModule.description', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='node_id', full_name='ubii.processing.ProcessingModule.node_id', index=5,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='session_id', full_name='ubii.processing.ProcessingModule.session_id', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='status', full_name='ubii.processing.ProcessingModule.status', index=7,
      number=8, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='processing_mode', full_name='ubii.processing.ProcessingModule.processing_mode', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='inputs', full_name='ubii.processing.ProcessingModule.inputs', index=9,
      number=10, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='outputs', full_name='ubii.processing.ProcessingModule.outputs', index=10,
      number=11, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='language', full_name='ubii.processing.ProcessingModule.language', index=11,
      number=12, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='on_processing_stringified', full_name='ubii.processing.ProcessingModule.on_processing_stringified', index=12,
      number=13, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='on_created_stringified', full_name='ubii.processing.ProcessingModule.on_created_stringified', index=13,
      number=14, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='on_halted_stringified', full_name='ubii.processing.ProcessingModule.on_halted_stringified', index=14,
      number=15, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='on_destroyed_stringified', full_name='ubii.processing.ProcessingModule.on_destroyed_stringified', index=15,
      number=16, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _PROCESSINGMODULE_STATUS,
    _PROCESSINGMODULE_LANGUAGE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=495,
  serialized_end=1163,
)


_PROCESSINGMODULELIST = _descriptor.Descriptor(
  name='ProcessingModuleList',
  full_name='ubii.processing.ProcessingModuleList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.processing.ProcessingModuleList.elements', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=1165,
  serialized_end=1240,
)

_PROCESSINGMODE_FREQUENCY.containing_type = _PROCESSINGMODE
_PROCESSINGMODE_LOCKSTEP.containing_type = _PROCESSINGMODE
_PROCESSINGMODE_TRIGGERONINPUT.containing_type = _PROCESSINGMODE
_PROCESSINGMODE.fields_by_name['frequency'].message_type = _PROCESSINGMODE_FREQUENCY
_PROCESSINGMODE.fields_by_name['lockstep'].message_type = _PROCESSINGMODE_LOCKSTEP
_PROCESSINGMODE.fields_by_name['trigger_on_input'].message_type = _PROCESSINGMODE_TRIGGERONINPUT
_PROCESSINGMODE.oneofs_by_name['mode'].fields.append(
  _PROCESSINGMODE.fields_by_name['frequency'])
_PROCESSINGMODE.fields_by_name['frequency'].containing_oneof = _PROCESSINGMODE.oneofs_by_name['mode']
_PROCESSINGMODE.oneofs_by_name['mode'].fields.append(
  _PROCESSINGMODE.fields_by_name['lockstep'])
_PROCESSINGMODE.fields_by_name['lockstep'].containing_oneof = _PROCESSINGMODE.oneofs_by_name['mode']
_PROCESSINGMODE.oneofs_by_name['mode'].fields.append(
  _PROCESSINGMODE.fields_by_name['trigger_on_input'])
_PROCESSINGMODE.fields_by_name['trigger_on_input'].containing_oneof = _PROCESSINGMODE.oneofs_by_name['mode']
_PROCESSINGMODULE.fields_by_name['status'].enum_type = _PROCESSINGMODULE_STATUS
_PROCESSINGMODULE.fields_by_name['processing_mode'].message_type = _PROCESSINGMODE
_PROCESSINGMODULE.fields_by_name['inputs'].message_type = _MODULEIO
_PROCESSINGMODULE.fields_by_name['outputs'].message_type = _MODULEIO
_PROCESSINGMODULE.fields_by_name['language'].enum_type = _PROCESSINGMODULE_LANGUAGE
_PROCESSINGMODULE_STATUS.containing_type = _PROCESSINGMODULE
_PROCESSINGMODULE_LANGUAGE.containing_type = _PROCESSINGMODULE
_PROCESSINGMODULELIST.fields_by_name['elements'].message_type = _PROCESSINGMODULE
DESCRIPTOR.message_types_by_name['ProcessingMode'] = _PROCESSINGMODE
DESCRIPTOR.message_types_by_name['ModuleIO'] = _MODULEIO
DESCRIPTOR.message_types_by_name['ProcessingModule'] = _PROCESSINGMODULE
DESCRIPTOR.message_types_by_name['ProcessingModuleList'] = _PROCESSINGMODULELIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ProcessingMode = _reflection.GeneratedProtocolMessageType('ProcessingMode', (_message.Message,), {

  'Frequency' : _reflection.GeneratedProtocolMessageType('Frequency', (_message.Message,), {
    'DESCRIPTOR' : _PROCESSINGMODE_FREQUENCY,
    '__module__' : 'proto.processing.processingModule_pb2'
    # @@protoc_insertion_point(class_scope:ubii.processing.ProcessingMode.Frequency)
    })
  ,

  'Lockstep' : _reflection.GeneratedProtocolMessageType('Lockstep', (_message.Message,), {
    'DESCRIPTOR' : _PROCESSINGMODE_LOCKSTEP,
    '__module__' : 'proto.processing.processingModule_pb2'
    # @@protoc_insertion_point(class_scope:ubii.processing.ProcessingMode.Lockstep)
    })
  ,

  'TriggerOnInput' : _reflection.GeneratedProtocolMessageType('TriggerOnInput', (_message.Message,), {
    'DESCRIPTOR' : _PROCESSINGMODE_TRIGGERONINPUT,
    '__module__' : 'proto.processing.processingModule_pb2'
    # @@protoc_insertion_point(class_scope:ubii.processing.ProcessingMode.TriggerOnInput)
    })
  ,
  'DESCRIPTOR' : _PROCESSINGMODE,
  '__module__' : 'proto.processing.processingModule_pb2'
  # @@protoc_insertion_point(class_scope:ubii.processing.ProcessingMode)
  })
_sym_db.RegisterMessage(ProcessingMode)
_sym_db.RegisterMessage(ProcessingMode.Frequency)
_sym_db.RegisterMessage(ProcessingMode.Lockstep)
_sym_db.RegisterMessage(ProcessingMode.TriggerOnInput)

ModuleIO = _reflection.GeneratedProtocolMessageType('ModuleIO', (_message.Message,), {
  'DESCRIPTOR' : _MODULEIO,
  '__module__' : 'proto.processing.processingModule_pb2'
  # @@protoc_insertion_point(class_scope:ubii.processing.ModuleIO)
  })
_sym_db.RegisterMessage(ModuleIO)

ProcessingModule = _reflection.GeneratedProtocolMessageType('ProcessingModule', (_message.Message,), {
  'DESCRIPTOR' : _PROCESSINGMODULE,
  '__module__' : 'proto.processing.processingModule_pb2'
  # @@protoc_insertion_point(class_scope:ubii.processing.ProcessingModule)
  })
_sym_db.RegisterMessage(ProcessingModule)

ProcessingModuleList = _reflection.GeneratedProtocolMessageType('ProcessingModuleList', (_message.Message,), {
  'DESCRIPTOR' : _PROCESSINGMODULELIST,
  '__module__' : 'proto.processing.processingModule_pb2'
  # @@protoc_insertion_point(class_scope:ubii.processing.ProcessingModuleList)
  })
_sym_db.RegisterMessage(ProcessingModuleList)


# @@protoc_insertion_point(module_scope)
