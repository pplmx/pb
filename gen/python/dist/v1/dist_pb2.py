# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# NO CHECKED-IN PROTOBUF GENCODE
# source: dist/v1/dist.proto
# Protobuf Python Version: 5.29.0
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import runtime_version as _runtime_version
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
_runtime_version.ValidateProtobufRuntimeVersion(
    _runtime_version.Domain.PUBLIC,
    5,
    29,
    0,
    '',
    'dist/v1/dist.proto'
)
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x12\x64ist/v1/dist.proto\x12\x07\x64ist.v1\">\n\x04Task\x12\x0e\n\x02id\x18\x01 \x01(\tR\x02id\x12\x12\n\x04name\x18\x02 \x01(\tR\x04name\x12\x12\n\x04type\x18\x03 \x01(\tR\x04type\"+\n\x10WatchDistRequest\x12\x17\n\x07node_id\x18\x01 \x01(\tR\x06nodeId\"N\n\x11WatchDistResponse\x12\x30\n\x04task\x18\x01 \x01(\x0b\x32\x1a.dist.v1.ScheduleTaskEventH\x00R\x04taskB\x07\n\x05\x65vent\"6\n\x11ScheduleTaskEvent\x12!\n\x04task\x18\x01 \x01(\x0b\x32\r.dist.v1.TaskR\x04task2U\n\x0b\x44istService\x12\x46\n\tWatchDist\x12\x19.dist.v1.WatchDistRequest\x1a\x1a.dist.v1.WatchDistResponse\"\x00\x30\x01\x42y\n\x0b\x63om.dist.v1B\tDistProtoP\x01Z\"github.com/pplmx/pb/dist/v1;distv1\xa2\x02\x03\x44XX\xaa\x02\x07\x44ist.V1\xca\x02\x07\x44ist\\V1\xe2\x02\x13\x44ist\\V1\\GPBMetadata\xea\x02\x08\x44ist::V1b\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'dist.v1.dist_pb2', _globals)
if not _descriptor._USE_C_DESCRIPTORS:
  _globals['DESCRIPTOR']._loaded_options = None
  _globals['DESCRIPTOR']._serialized_options = b'\n\013com.dist.v1B\tDistProtoP\001Z\"github.com/pplmx/pb/dist/v1;distv1\242\002\003DXX\252\002\007Dist.V1\312\002\007Dist\\V1\342\002\023Dist\\V1\\GPBMetadata\352\002\010Dist::V1'
  _globals['_TASK']._serialized_start=31
  _globals['_TASK']._serialized_end=93
  _globals['_WATCHDISTREQUEST']._serialized_start=95
  _globals['_WATCHDISTREQUEST']._serialized_end=138
  _globals['_WATCHDISTRESPONSE']._serialized_start=140
  _globals['_WATCHDISTRESPONSE']._serialized_end=218
  _globals['_SCHEDULETASKEVENT']._serialized_start=220
  _globals['_SCHEDULETASKEVENT']._serialized_end=274
  _globals['_DISTSERVICE']._serialized_start=276
  _globals['_DISTSERVICE']._serialized_end=361
# @@protoc_insertion_point(module_scope)
