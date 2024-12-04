// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: dist/v1/dist.proto

#include "dist/v1/dist.pb.h"
#include "dist/v1/dist.grpc.pb.h"

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
namespace dist {
namespace v1 {

static const char* DistService_method_names[] = {
  "/dist.v1.DistService/WatchDist",
};

std::unique_ptr< DistService::Stub> DistService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< DistService::Stub> stub(new DistService::Stub(channel, options));
  return stub;
}

DistService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_WatchDist_(DistService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::dist::v1::WatchDistResponse>* DistService::Stub::WatchDistRaw(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::dist::v1::WatchDistResponse>::Create(channel_.get(), rpcmethod_WatchDist_, context, request);
}

void DistService::Stub::async::WatchDist(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest* request, ::grpc::ClientReadReactor< ::dist::v1::WatchDistResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::dist::v1::WatchDistResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_WatchDist_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::dist::v1::WatchDistResponse>* DistService::Stub::AsyncWatchDistRaw(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::dist::v1::WatchDistResponse>::Create(channel_.get(), cq, rpcmethod_WatchDist_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::dist::v1::WatchDistResponse>* DistService::Stub::PrepareAsyncWatchDistRaw(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::dist::v1::WatchDistResponse>::Create(channel_.get(), cq, rpcmethod_WatchDist_, context, request, false, nullptr);
}

DistService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DistService_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< DistService::Service, ::dist::v1::WatchDistRequest, ::dist::v1::WatchDistResponse>(
          [](DistService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::dist::v1::WatchDistRequest* req,
             ::grpc::ServerWriter<::dist::v1::WatchDistResponse>* writer) {
               return service->WatchDist(ctx, req, writer);
             }, this)));
}

DistService::Service::~Service() {
}

::grpc::Status DistService::Service::WatchDist(::grpc::ServerContext* context, const ::dist::v1::WatchDistRequest* request, ::grpc::ServerWriter< ::dist::v1::WatchDistResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace dist
}  // namespace v1

