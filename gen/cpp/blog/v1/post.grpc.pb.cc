// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: blog/v1/post.proto

#include "blog/v1/post.pb.h"
#include "blog/v1/post.grpc.pb.h"

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

static const char* PostService_method_names[] = {
  "/blog.v1.PostService/CreatePost",
  "/blog.v1.PostService/GetPostByID",
  "/blog.v1.PostService/ListPosts",
  "/blog.v1.PostService/UpdatePost",
  "/blog.v1.PostService/DeletePost",
};

std::unique_ptr< PostService::Stub> PostService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< PostService::Stub> stub(new PostService::Stub(channel, options));
  return stub;
}

PostService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_CreatePost_(PostService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetPostByID_(PostService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListPosts_(PostService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdatePost_(PostService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeletePost_(PostService_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status PostService::Stub::CreatePost(::grpc::ClientContext* context, const ::blog::v1::CreatePostRequest& request, ::blog::v1::CreatePostResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::blog::v1::CreatePostRequest, ::blog::v1::CreatePostResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CreatePost_, context, request, response);
}

void PostService::Stub::async::CreatePost(::grpc::ClientContext* context, const ::blog::v1::CreatePostRequest* request, ::blog::v1::CreatePostResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::blog::v1::CreatePostRequest, ::blog::v1::CreatePostResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreatePost_, context, request, response, std::move(f));
}

void PostService::Stub::async::CreatePost(::grpc::ClientContext* context, const ::blog::v1::CreatePostRequest* request, ::blog::v1::CreatePostResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreatePost_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::CreatePostResponse>* PostService::Stub::PrepareAsyncCreatePostRaw(::grpc::ClientContext* context, const ::blog::v1::CreatePostRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::blog::v1::CreatePostResponse, ::blog::v1::CreatePostRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CreatePost_, context, request);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::CreatePostResponse>* PostService::Stub::AsyncCreatePostRaw(::grpc::ClientContext* context, const ::blog::v1::CreatePostRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreatePostRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status PostService::Stub::GetPostByID(::grpc::ClientContext* context, const ::blog::v1::GetPostByIDRequest& request, ::blog::v1::GetPostByIDResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::blog::v1::GetPostByIDRequest, ::blog::v1::GetPostByIDResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetPostByID_, context, request, response);
}

void PostService::Stub::async::GetPostByID(::grpc::ClientContext* context, const ::blog::v1::GetPostByIDRequest* request, ::blog::v1::GetPostByIDResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::blog::v1::GetPostByIDRequest, ::blog::v1::GetPostByIDResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetPostByID_, context, request, response, std::move(f));
}

void PostService::Stub::async::GetPostByID(::grpc::ClientContext* context, const ::blog::v1::GetPostByIDRequest* request, ::blog::v1::GetPostByIDResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetPostByID_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::GetPostByIDResponse>* PostService::Stub::PrepareAsyncGetPostByIDRaw(::grpc::ClientContext* context, const ::blog::v1::GetPostByIDRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::blog::v1::GetPostByIDResponse, ::blog::v1::GetPostByIDRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetPostByID_, context, request);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::GetPostByIDResponse>* PostService::Stub::AsyncGetPostByIDRaw(::grpc::ClientContext* context, const ::blog::v1::GetPostByIDRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetPostByIDRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status PostService::Stub::ListPosts(::grpc::ClientContext* context, const ::blog::v1::ListPostsRequest& request, ::blog::v1::ListPostsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::blog::v1::ListPostsRequest, ::blog::v1::ListPostsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListPosts_, context, request, response);
}

void PostService::Stub::async::ListPosts(::grpc::ClientContext* context, const ::blog::v1::ListPostsRequest* request, ::blog::v1::ListPostsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::blog::v1::ListPostsRequest, ::blog::v1::ListPostsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListPosts_, context, request, response, std::move(f));
}

void PostService::Stub::async::ListPosts(::grpc::ClientContext* context, const ::blog::v1::ListPostsRequest* request, ::blog::v1::ListPostsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListPosts_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::ListPostsResponse>* PostService::Stub::PrepareAsyncListPostsRaw(::grpc::ClientContext* context, const ::blog::v1::ListPostsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::blog::v1::ListPostsResponse, ::blog::v1::ListPostsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListPosts_, context, request);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::ListPostsResponse>* PostService::Stub::AsyncListPostsRaw(::grpc::ClientContext* context, const ::blog::v1::ListPostsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListPostsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status PostService::Stub::UpdatePost(::grpc::ClientContext* context, const ::blog::v1::UpdatePostRequest& request, ::blog::v1::UpdatePostResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::blog::v1::UpdatePostRequest, ::blog::v1::UpdatePostResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_UpdatePost_, context, request, response);
}

void PostService::Stub::async::UpdatePost(::grpc::ClientContext* context, const ::blog::v1::UpdatePostRequest* request, ::blog::v1::UpdatePostResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::blog::v1::UpdatePostRequest, ::blog::v1::UpdatePostResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdatePost_, context, request, response, std::move(f));
}

void PostService::Stub::async::UpdatePost(::grpc::ClientContext* context, const ::blog::v1::UpdatePostRequest* request, ::blog::v1::UpdatePostResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdatePost_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::UpdatePostResponse>* PostService::Stub::PrepareAsyncUpdatePostRaw(::grpc::ClientContext* context, const ::blog::v1::UpdatePostRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::blog::v1::UpdatePostResponse, ::blog::v1::UpdatePostRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_UpdatePost_, context, request);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::UpdatePostResponse>* PostService::Stub::AsyncUpdatePostRaw(::grpc::ClientContext* context, const ::blog::v1::UpdatePostRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUpdatePostRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status PostService::Stub::DeletePost(::grpc::ClientContext* context, const ::blog::v1::DeletePostRequest& request, ::blog::v1::DeletePostResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::blog::v1::DeletePostRequest, ::blog::v1::DeletePostResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DeletePost_, context, request, response);
}

void PostService::Stub::async::DeletePost(::grpc::ClientContext* context, const ::blog::v1::DeletePostRequest* request, ::blog::v1::DeletePostResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::blog::v1::DeletePostRequest, ::blog::v1::DeletePostResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeletePost_, context, request, response, std::move(f));
}

void PostService::Stub::async::DeletePost(::grpc::ClientContext* context, const ::blog::v1::DeletePostRequest* request, ::blog::v1::DeletePostResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeletePost_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::DeletePostResponse>* PostService::Stub::PrepareAsyncDeletePostRaw(::grpc::ClientContext* context, const ::blog::v1::DeletePostRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::blog::v1::DeletePostResponse, ::blog::v1::DeletePostRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DeletePost_, context, request);
}

::grpc::ClientAsyncResponseReader< ::blog::v1::DeletePostResponse>* PostService::Stub::AsyncDeletePostRaw(::grpc::ClientContext* context, const ::blog::v1::DeletePostRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeletePostRaw(context, request, cq);
  result->StartCall();
  return result;
}

PostService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PostService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PostService::Service, ::blog::v1::CreatePostRequest, ::blog::v1::CreatePostResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](PostService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::blog::v1::CreatePostRequest* req,
             ::blog::v1::CreatePostResponse* resp) {
               return service->CreatePost(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PostService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PostService::Service, ::blog::v1::GetPostByIDRequest, ::blog::v1::GetPostByIDResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](PostService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::blog::v1::GetPostByIDRequest* req,
             ::blog::v1::GetPostByIDResponse* resp) {
               return service->GetPostByID(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PostService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PostService::Service, ::blog::v1::ListPostsRequest, ::blog::v1::ListPostsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](PostService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::blog::v1::ListPostsRequest* req,
             ::blog::v1::ListPostsResponse* resp) {
               return service->ListPosts(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PostService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PostService::Service, ::blog::v1::UpdatePostRequest, ::blog::v1::UpdatePostResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](PostService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::blog::v1::UpdatePostRequest* req,
             ::blog::v1::UpdatePostResponse* resp) {
               return service->UpdatePost(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PostService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PostService::Service, ::blog::v1::DeletePostRequest, ::blog::v1::DeletePostResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](PostService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::blog::v1::DeletePostRequest* req,
             ::blog::v1::DeletePostResponse* resp) {
               return service->DeletePost(ctx, req, resp);
             }, this)));
}

PostService::Service::~Service() {
}

::grpc::Status PostService::Service::CreatePost(::grpc::ServerContext* context, const ::blog::v1::CreatePostRequest* request, ::blog::v1::CreatePostResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PostService::Service::GetPostByID(::grpc::ServerContext* context, const ::blog::v1::GetPostByIDRequest* request, ::blog::v1::GetPostByIDResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PostService::Service::ListPosts(::grpc::ServerContext* context, const ::blog::v1::ListPostsRequest* request, ::blog::v1::ListPostsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PostService::Service::UpdatePost(::grpc::ServerContext* context, const ::blog::v1::UpdatePostRequest* request, ::blog::v1::UpdatePostResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PostService::Service::DeletePost(::grpc::ServerContext* context, const ::blog::v1::DeletePostRequest* request, ::blog::v1::DeletePostResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace blog
}  // namespace v1
