// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: blog/v1/tag.proto

#include "blog/v1/tag.pb.h"
#include "blog/v1/tag.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace blog {
namespace v1 {

static const char* TagService_method_names[] = {
  "/blog.v1.TagService/CreateTag",
  "/blog.v1.TagService/GetTag",
  "/blog.v1.TagService/ListTags",
  "/blog.v1.TagService/UpdateTag",
  "/blog.v1.TagService/DeleteTag",
};

std::unique_ptr< TagService::Stub> TagService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< TagService::Stub> stub(new TagService::Stub(channel, options));
  return stub;
}

TagService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_CreateTag_(TagService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetTag_(TagService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListTags_(TagService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateTag_(TagService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteTag_(TagService_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status TagService::Stub::CreateTag(::grpc::ClientContext* context, const ::blog::v1::CreateTagRequest& request, ::blog::v1::CreateTagResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::blog::v1::CreateTagRequest, ::blog::v1::CreateTagResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CreateTag_, context, request, response);
}

void TagService::Stub::async::CreateTag(::grpc::ClientContext* context, const ::blog::v1::CreateTagRequest* request, ::blog::v1::CreateTagResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::blog::v1::CreateTagRequest, ::blog::v1::CreateTagResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateTag_, context, request, response, std::move(f));
}

void TagService::Stub::async::CreateTag(::grpc::ClientContext* context, const ::blog::v1::CreateTagRequest* request, ::blog::v1::CreateTagResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateTag_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::CreateTagResponse>* TagService::Stub::PrepareAsyncCreateTagRaw(::grpc::ClientContext* context, const ::blog::v1::CreateTagRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::blog::v1::CreateTagResponse, ::blog::v1::CreateTagRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CreateTag_, context, request);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::CreateTagResponse>* TagService::Stub::AsyncCreateTagRaw(::grpc::ClientContext* context, const ::blog::v1::CreateTagRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateTagRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TagService::Stub::GetTag(::grpc::ClientContext* context, const ::blog::v1::GetTagRequest& request, ::blog::v1::GetTagResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::blog::v1::GetTagRequest, ::blog::v1::GetTagResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetTag_, context, request, response);
}

void TagService::Stub::async::GetTag(::grpc::ClientContext* context, const ::blog::v1::GetTagRequest* request, ::blog::v1::GetTagResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::blog::v1::GetTagRequest, ::blog::v1::GetTagResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetTag_, context, request, response, std::move(f));
}

void TagService::Stub::async::GetTag(::grpc::ClientContext* context, const ::blog::v1::GetTagRequest* request, ::blog::v1::GetTagResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetTag_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::GetTagResponse>* TagService::Stub::PrepareAsyncGetTagRaw(::grpc::ClientContext* context, const ::blog::v1::GetTagRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::blog::v1::GetTagResponse, ::blog::v1::GetTagRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetTag_, context, request);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::GetTagResponse>* TagService::Stub::AsyncGetTagRaw(::grpc::ClientContext* context, const ::blog::v1::GetTagRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetTagRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TagService::Stub::ListTags(::grpc::ClientContext* context, const ::blog::v1::ListTagsRequest& request, ::blog::v1::ListTagsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::blog::v1::ListTagsRequest, ::blog::v1::ListTagsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListTags_, context, request, response);
}

void TagService::Stub::async::ListTags(::grpc::ClientContext* context, const ::blog::v1::ListTagsRequest* request, ::blog::v1::ListTagsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::blog::v1::ListTagsRequest, ::blog::v1::ListTagsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListTags_, context, request, response, std::move(f));
}

void TagService::Stub::async::ListTags(::grpc::ClientContext* context, const ::blog::v1::ListTagsRequest* request, ::blog::v1::ListTagsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListTags_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::ListTagsResponse>* TagService::Stub::PrepareAsyncListTagsRaw(::grpc::ClientContext* context, const ::blog::v1::ListTagsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::blog::v1::ListTagsResponse, ::blog::v1::ListTagsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListTags_, context, request);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::ListTagsResponse>* TagService::Stub::AsyncListTagsRaw(::grpc::ClientContext* context, const ::blog::v1::ListTagsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListTagsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TagService::Stub::UpdateTag(::grpc::ClientContext* context, const ::blog::v1::UpdateTagRequest& request, ::blog::v1::UpdateTagResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::blog::v1::UpdateTagRequest, ::blog::v1::UpdateTagResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_UpdateTag_, context, request, response);
}

void TagService::Stub::async::UpdateTag(::grpc::ClientContext* context, const ::blog::v1::UpdateTagRequest* request, ::blog::v1::UpdateTagResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::blog::v1::UpdateTagRequest, ::blog::v1::UpdateTagResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdateTag_, context, request, response, std::move(f));
}

void TagService::Stub::async::UpdateTag(::grpc::ClientContext* context, const ::blog::v1::UpdateTagRequest* request, ::blog::v1::UpdateTagResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdateTag_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::UpdateTagResponse>* TagService::Stub::PrepareAsyncUpdateTagRaw(::grpc::ClientContext* context, const ::blog::v1::UpdateTagRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::blog::v1::UpdateTagResponse, ::blog::v1::UpdateTagRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_UpdateTag_, context, request);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::UpdateTagResponse>* TagService::Stub::AsyncUpdateTagRaw(::grpc::ClientContext* context, const ::blog::v1::UpdateTagRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUpdateTagRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TagService::Stub::DeleteTag(::grpc::ClientContext* context, const ::blog::v1::DeleteTagRequest& request, ::blog::v1::DeleteTagResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::blog::v1::DeleteTagRequest, ::blog::v1::DeleteTagResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DeleteTag_, context, request, response);
}

void TagService::Stub::async::DeleteTag(::grpc::ClientContext* context, const ::blog::v1::DeleteTagRequest* request, ::blog::v1::DeleteTagResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::blog::v1::DeleteTagRequest, ::blog::v1::DeleteTagResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteTag_, context, request, response, std::move(f));
}

void TagService::Stub::async::DeleteTag(::grpc::ClientContext* context, const ::blog::v1::DeleteTagRequest* request, ::blog::v1::DeleteTagResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteTag_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::DeleteTagResponse>* TagService::Stub::PrepareAsyncDeleteTagRaw(::grpc::ClientContext* context, const ::blog::v1::DeleteTagRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::blog::v1::DeleteTagResponse, ::blog::v1::DeleteTagRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DeleteTag_, context, request);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::DeleteTagResponse>* TagService::Stub::AsyncDeleteTagRaw(::grpc::ClientContext* context, const ::blog::v1::DeleteTagRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeleteTagRaw(context, request, cq);
  result->StartCall();
  return result;
}

TagService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TagService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TagService::Service, ::blog::v1::CreateTagRequest, ::blog::v1::CreateTagResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TagService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::blog::v1::CreateTagRequest* req,
             ::blog::v1::CreateTagResponse* resp) {
               return service->CreateTag(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TagService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TagService::Service, ::blog::v1::GetTagRequest, ::blog::v1::GetTagResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TagService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::blog::v1::GetTagRequest* req,
             ::blog::v1::GetTagResponse* resp) {
               return service->GetTag(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TagService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TagService::Service, ::blog::v1::ListTagsRequest, ::blog::v1::ListTagsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TagService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::blog::v1::ListTagsRequest* req,
             ::blog::v1::ListTagsResponse* resp) {
               return service->ListTags(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TagService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TagService::Service, ::blog::v1::UpdateTagRequest, ::blog::v1::UpdateTagResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TagService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::blog::v1::UpdateTagRequest* req,
             ::blog::v1::UpdateTagResponse* resp) {
               return service->UpdateTag(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TagService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TagService::Service, ::blog::v1::DeleteTagRequest, ::blog::v1::DeleteTagResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TagService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::blog::v1::DeleteTagRequest* req,
             ::blog::v1::DeleteTagResponse* resp) {
               return service->DeleteTag(ctx, req, resp);
             }, this)));
}

TagService::Service::~Service() {
}

::grpc::Status TagService::Service::CreateTag(::grpc::ServerContext* context, const ::blog::v1::CreateTagRequest* request, ::blog::v1::CreateTagResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TagService::Service::GetTag(::grpc::ServerContext* context, const ::blog::v1::GetTagRequest* request, ::blog::v1::GetTagResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TagService::Service::ListTags(::grpc::ServerContext* context, const ::blog::v1::ListTagsRequest* request, ::blog::v1::ListTagsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TagService::Service::UpdateTag(::grpc::ServerContext* context, const ::blog::v1::UpdateTagRequest* request, ::blog::v1::UpdateTagResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TagService::Service::DeleteTag(::grpc::ServerContext* context, const ::blog::v1::DeleteTagRequest* request, ::blog::v1::DeleteTagResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace blog
}  // namespace v1
