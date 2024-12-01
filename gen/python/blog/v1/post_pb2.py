# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# NO CHECKED-IN PROTOBUF GENCODE
# source: blog/v1/post.proto
# Protobuf Python Version: 5.28.3
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import runtime_version as _runtime_version
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
_runtime_version.ValidateProtobufRuntimeVersion(
    _runtime_version.Domain.PUBLIC,
    5,
    28,
    3,
    '',
    'blog/v1/post.proto'
)
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from buf.validate import validate_pb2 as buf_dot_validate_dot_validate__pb2
from google.api import annotations_pb2 as google_dot_api_dot_annotations__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x12\x62log/v1/post.proto\x12\x07\x62log.v1\x1a\x1b\x62uf/validate/validate.proto\x1a\x1cgoogle/api/annotations.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xb0\x01\n\x11\x43reatePostRequest\x12\x1f\n\x05title\x18\x01 \x01(\tB\t\xbaH\x06r\x04\x10\x01\x18\x64R\x05title\x12$\n\x07\x63ontent\x18\x02 \x01(\tB\n\xbaH\x07r\x05\x10\x01\x18\x90NR\x07\x63ontent\x12\x1b\n\x06\x61uthor\x18\x03 \x01(\tH\x00R\x06\x61uthor\x88\x01\x01\x12\x1f\n\x08\x63\x61tegory\x18\x04 \x01(\tH\x01R\x08\x63\x61tegory\x88\x01\x01\x42\t\n\x07_authorB\x0b\n\t_category\"_\n\x12\x43reatePostResponse\x12\x0e\n\x02id\x18\x01 \x01(\rR\x02id\x12\x39\n\ncreated_at\x18\x02 \x01(\x0b\x32\x1a.google.protobuf.TimestampR\tcreatedAt\"-\n\x12GetPostByIDRequest\x12\x17\n\x02id\x18\x01 \x01(\rB\x07\xbaH\x04*\x02 \x00R\x02id\"\xa1\x02\n\x13GetPostByIDResponse\x12\x0e\n\x02id\x18\x01 \x01(\rR\x02id\x12\x14\n\x05title\x18\x02 \x01(\tR\x05title\x12\x18\n\x07\x63ontent\x18\x03 \x01(\tR\x07\x63ontent\x12\x1b\n\x06\x61uthor\x18\x04 \x01(\tH\x00R\x06\x61uthor\x88\x01\x01\x12\x1f\n\x08\x63\x61tegory\x18\x05 \x01(\tH\x01R\x08\x63\x61tegory\x88\x01\x01\x12\x39\n\ncreated_at\x18\x06 \x01(\x0b\x32\x1a.google.protobuf.TimestampR\tcreatedAt\x12\x39\n\nupdated_at\x18\x07 \x01(\x0b\x32\x1a.google.protobuf.TimestampR\tupdatedAtB\t\n\x07_authorB\x0b\n\t_category\"\xad\x01\n\x10ListPostsRequest\x12\x1b\n\x06\x61uthor\x18\x01 \x01(\tH\x00R\x06\x61uthor\x88\x01\x01\x12\x1f\n\x08\x63\x61tegory\x18\x02 \x01(\tH\x01R\x08\x63\x61tegory\x88\x01\x01\x12\x1b\n\x04page\x18\x03 \x01(\rB\x07\xbaH\x04*\x02(\x01R\x04page\x12&\n\tpage_size\x18\x04 \x01(\rB\t\xbaH\x06*\x04\x18\x64(\x01R\x08pageSizeB\t\n\x07_authorB\x0b\n\t_category\"\xc5\x02\n\x11ListPostsResponse\x12\x35\n\x05posts\x18\x01 \x03(\x0b\x32\x1f.blog.v1.ListPostsResponse.PostR\x05posts\x12\x1f\n\x0btotal_count\x18\x02 \x01(\rR\ntotalCount\x1a\xd7\x01\n\x04Post\x12\x0e\n\x02id\x18\x01 \x01(\rR\x02id\x12\x14\n\x05title\x18\x02 \x01(\tR\x05title\x12\x18\n\x07\x63ontent\x18\x03 \x01(\tR\x07\x63ontent\x12\x1b\n\x06\x61uthor\x18\x04 \x01(\tH\x00R\x06\x61uthor\x88\x01\x01\x12\x1f\n\x08\x63\x61tegory\x18\x05 \x01(\tH\x01R\x08\x63\x61tegory\x88\x01\x01\x12\x39\n\ncreated_at\x18\x06 \x01(\x0b\x32\x1a.google.protobuf.TimestampR\tcreatedAtB\t\n\x07_authorB\x0b\n\t_category\"\xc1\x01\n\x11UpdatePostRequest\x12\x17\n\x02id\x18\x01 \x01(\rB\x07\xbaH\x04*\x02 \x00R\x02id\x12$\n\x05title\x18\x02 \x01(\tB\t\xbaH\x06r\x04\x10\x01\x18\x64H\x00R\x05title\x88\x01\x01\x12)\n\x07\x63ontent\x18\x03 \x01(\tB\n\xbaH\x07r\x05\x10\x01\x18\x90NH\x01R\x07\x63ontent\x88\x01\x01\x12\x1f\n\x08\x63\x61tegory\x18\x04 \x01(\tH\x02R\x08\x63\x61tegory\x88\x01\x01\x42\x08\n\x06_titleB\n\n\x08_contentB\x0b\n\t_category\"_\n\x12UpdatePostResponse\x12\x0e\n\x02id\x18\x01 \x01(\rR\x02id\x12\x39\n\nupdated_at\x18\x02 \x01(\x0b\x32\x1a.google.protobuf.TimestampR\tupdatedAt\",\n\x11\x44\x65letePostRequest\x12\x17\n\x02id\x18\x01 \x01(\rB\x07\xbaH\x04*\x02 \x00R\x02id\">\n\x12\x44\x65letePostResponse\x12\x0e\n\x02id\x18\x01 \x01(\rR\x02id\x12\x18\n\x07success\x18\x02 \x01(\x08R\x07success2\xf8\x03\n\x0bPostService\x12_\n\nCreatePost\x12\x1a.blog.v1.CreatePostRequest\x1a\x1b.blog.v1.CreatePostResponse\"\x18\x82\xd3\xe4\x93\x02\x12\"\r/api/v1/posts:\x01*\x12\x64\n\x0bGetPostByID\x12\x1b.blog.v1.GetPostByIDRequest\x1a\x1c.blog.v1.GetPostByIDResponse\"\x1a\x82\xd3\xe4\x93\x02\x14\x12\x12/api/v1/posts/{id}\x12Y\n\tListPosts\x12\x19.blog.v1.ListPostsRequest\x1a\x1a.blog.v1.ListPostsResponse\"\x15\x82\xd3\xe4\x93\x02\x0f\x12\r/api/v1/posts\x12\x64\n\nUpdatePost\x12\x1a.blog.v1.UpdatePostRequest\x1a\x1b.blog.v1.UpdatePostResponse\"\x1d\x82\xd3\xe4\x93\x02\x17\x1a\x12/api/v1/posts/{id}:\x01*\x12\x61\n\nDeletePost\x12\x1a.blog.v1.DeletePostRequest\x1a\x1b.blog.v1.DeletePostResponse\"\x1a\x82\xd3\xe4\x93\x02\x14*\x12/api/v1/posts/{id}By\n\x0b\x63om.blog.v1B\tPostProtoP\x01Z\"github.com/pplmx/pb/blog/v1;blogv1\xa2\x02\x03\x42XX\xaa\x02\x07\x42log.V1\xca\x02\x07\x42log\\V1\xe2\x02\x13\x42log\\V1\\GPBMetadata\xea\x02\x08\x42log::V1b\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'blog.v1.post_pb2', _globals)
if not _descriptor._USE_C_DESCRIPTORS:
  _globals['DESCRIPTOR']._loaded_options = None
  _globals['DESCRIPTOR']._serialized_options = b'\n\013com.blog.v1B\tPostProtoP\001Z\"github.com/pplmx/pb/blog/v1;blogv1\242\002\003BXX\252\002\007Blog.V1\312\002\007Blog\\V1\342\002\023Blog\\V1\\GPBMetadata\352\002\010Blog::V1'
  _globals['_CREATEPOSTREQUEST'].fields_by_name['title']._loaded_options = None
  _globals['_CREATEPOSTREQUEST'].fields_by_name['title']._serialized_options = b'\272H\006r\004\020\001\030d'
  _globals['_CREATEPOSTREQUEST'].fields_by_name['content']._loaded_options = None
  _globals['_CREATEPOSTREQUEST'].fields_by_name['content']._serialized_options = b'\272H\007r\005\020\001\030\220N'
  _globals['_GETPOSTBYIDREQUEST'].fields_by_name['id']._loaded_options = None
  _globals['_GETPOSTBYIDREQUEST'].fields_by_name['id']._serialized_options = b'\272H\004*\002 \000'
  _globals['_LISTPOSTSREQUEST'].fields_by_name['page']._loaded_options = None
  _globals['_LISTPOSTSREQUEST'].fields_by_name['page']._serialized_options = b'\272H\004*\002(\001'
  _globals['_LISTPOSTSREQUEST'].fields_by_name['page_size']._loaded_options = None
  _globals['_LISTPOSTSREQUEST'].fields_by_name['page_size']._serialized_options = b'\272H\006*\004\030d(\001'
  _globals['_UPDATEPOSTREQUEST'].fields_by_name['id']._loaded_options = None
  _globals['_UPDATEPOSTREQUEST'].fields_by_name['id']._serialized_options = b'\272H\004*\002 \000'
  _globals['_UPDATEPOSTREQUEST'].fields_by_name['title']._loaded_options = None
  _globals['_UPDATEPOSTREQUEST'].fields_by_name['title']._serialized_options = b'\272H\006r\004\020\001\030d'
  _globals['_UPDATEPOSTREQUEST'].fields_by_name['content']._loaded_options = None
  _globals['_UPDATEPOSTREQUEST'].fields_by_name['content']._serialized_options = b'\272H\007r\005\020\001\030\220N'
  _globals['_DELETEPOSTREQUEST'].fields_by_name['id']._loaded_options = None
  _globals['_DELETEPOSTREQUEST'].fields_by_name['id']._serialized_options = b'\272H\004*\002 \000'
  _globals['_POSTSERVICE'].methods_by_name['CreatePost']._loaded_options = None
  _globals['_POSTSERVICE'].methods_by_name['CreatePost']._serialized_options = b'\202\323\344\223\002\022\"\r/api/v1/posts:\001*'
  _globals['_POSTSERVICE'].methods_by_name['GetPostByID']._loaded_options = None
  _globals['_POSTSERVICE'].methods_by_name['GetPostByID']._serialized_options = b'\202\323\344\223\002\024\022\022/api/v1/posts/{id}'
  _globals['_POSTSERVICE'].methods_by_name['ListPosts']._loaded_options = None
  _globals['_POSTSERVICE'].methods_by_name['ListPosts']._serialized_options = b'\202\323\344\223\002\017\022\r/api/v1/posts'
  _globals['_POSTSERVICE'].methods_by_name['UpdatePost']._loaded_options = None
  _globals['_POSTSERVICE'].methods_by_name['UpdatePost']._serialized_options = b'\202\323\344\223\002\027\032\022/api/v1/posts/{id}:\001*'
  _globals['_POSTSERVICE'].methods_by_name['DeletePost']._loaded_options = None
  _globals['_POSTSERVICE'].methods_by_name['DeletePost']._serialized_options = b'\202\323\344\223\002\024*\022/api/v1/posts/{id}'
  _globals['_CREATEPOSTREQUEST']._serialized_start=124
  _globals['_CREATEPOSTREQUEST']._serialized_end=300
  _globals['_CREATEPOSTRESPONSE']._serialized_start=302
  _globals['_CREATEPOSTRESPONSE']._serialized_end=397
  _globals['_GETPOSTBYIDREQUEST']._serialized_start=399
  _globals['_GETPOSTBYIDREQUEST']._serialized_end=444
  _globals['_GETPOSTBYIDRESPONSE']._serialized_start=447
  _globals['_GETPOSTBYIDRESPONSE']._serialized_end=736
  _globals['_LISTPOSTSREQUEST']._serialized_start=739
  _globals['_LISTPOSTSREQUEST']._serialized_end=912
  _globals['_LISTPOSTSRESPONSE']._serialized_start=915
  _globals['_LISTPOSTSRESPONSE']._serialized_end=1240
  _globals['_LISTPOSTSRESPONSE_POST']._serialized_start=1025
  _globals['_LISTPOSTSRESPONSE_POST']._serialized_end=1240
  _globals['_UPDATEPOSTREQUEST']._serialized_start=1243
  _globals['_UPDATEPOSTREQUEST']._serialized_end=1436
  _globals['_UPDATEPOSTRESPONSE']._serialized_start=1438
  _globals['_UPDATEPOSTRESPONSE']._serialized_end=1533
  _globals['_DELETEPOSTREQUEST']._serialized_start=1535
  _globals['_DELETEPOSTREQUEST']._serialized_end=1579
  _globals['_DELETEPOSTRESPONSE']._serialized_start=1581
  _globals['_DELETEPOSTRESPONSE']._serialized_end=1643
  _globals['_POSTSERVICE']._serialized_start=1646
  _globals['_POSTSERVICE']._serialized_end=2150
# @@protoc_insertion_point(module_scope)