// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: dist/v1/dist.proto
#ifndef GRPC_dist_2fv1_2fdist_2eproto__INCLUDED
#define GRPC_dist_2fv1_2fdist_2eproto__INCLUDED

#include "dist/v1/dist.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace dist {
namespace v1 {

// 分布式服务
class DistService final {
 public:
  static constexpr char const* service_full_name() {
    return "dist.v1.DistService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderInterface< ::dist::v1::WatchDistResponse>> WatchDist(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::dist::v1::WatchDistResponse>>(WatchDistRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchDistResponse>> AsyncWatchDist(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchDistResponse>>(AsyncWatchDistRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchDistResponse>> PrepareAsyncWatchDist(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchDistResponse>>(PrepareAsyncWatchDistRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void WatchDist(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest* request, ::grpc::ClientReadReactor< ::dist::v1::WatchDistResponse>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderInterface< ::dist::v1::WatchDistResponse>* WatchDistRaw(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchDistResponse>* AsyncWatchDistRaw(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchDistResponse>* PrepareAsyncWatchDistRaw(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReader< ::dist::v1::WatchDistResponse>> WatchDist(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::dist::v1::WatchDistResponse>>(WatchDistRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::dist::v1::WatchDistResponse>> AsyncWatchDist(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::dist::v1::WatchDistResponse>>(AsyncWatchDistRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::dist::v1::WatchDistResponse>> PrepareAsyncWatchDist(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::dist::v1::WatchDistResponse>>(PrepareAsyncWatchDistRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void WatchDist(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest* request, ::grpc::ClientReadReactor< ::dist::v1::WatchDistResponse>* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientReader< ::dist::v1::WatchDistResponse>* WatchDistRaw(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request) override;
    ::grpc::ClientAsyncReader< ::dist::v1::WatchDistResponse>* AsyncWatchDistRaw(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::dist::v1::WatchDistResponse>* PrepareAsyncWatchDistRaw(::grpc::ClientContext* context, const ::dist::v1::WatchDistRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_WatchDist_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status WatchDist(::grpc::ServerContext* context, const ::dist::v1::WatchDistRequest* request, ::grpc::ServerWriter< ::dist::v1::WatchDistResponse>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_WatchDist : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_WatchDist() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_WatchDist() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchDist(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchDistRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchDistResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestWatchDist(::grpc::ServerContext* context, ::dist::v1::WatchDistRequest* request, ::grpc::ServerAsyncWriter< ::dist::v1::WatchDistResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_WatchDist<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_WatchDist : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_WatchDist() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::dist::v1::WatchDistRequest, ::dist::v1::WatchDistResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::dist::v1::WatchDistRequest* request) { return this->WatchDist(context, request); }));
    }
    ~WithCallbackMethod_WatchDist() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchDist(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchDistRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchDistResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::dist::v1::WatchDistResponse>* WatchDist(
      ::grpc::CallbackServerContext* /*context*/, const ::dist::v1::WatchDistRequest* /*request*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_WatchDist<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_WatchDist : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_WatchDist() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_WatchDist() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchDist(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchDistRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchDistResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_WatchDist : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_WatchDist() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_WatchDist() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchDist(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchDistRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchDistResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestWatchDist(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_WatchDist : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_WatchDist() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const::grpc::ByteBuffer* request) { return this->WatchDist(context, request); }));
    }
    ~WithRawCallbackMethod_WatchDist() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchDist(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchDistRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchDistResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* WatchDist(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)  { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_WatchDist : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_WatchDist() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::dist::v1::WatchDistRequest, ::dist::v1::WatchDistResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::dist::v1::WatchDistRequest, ::dist::v1::WatchDistResponse>* streamer) {
                       return this->StreamedWatchDist(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_WatchDist() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status WatchDist(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchDistRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchDistResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedWatchDist(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::dist::v1::WatchDistRequest,::dist::v1::WatchDistResponse>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_WatchDist<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_WatchDist<Service > StreamedService;
};

}  // namespace v1
}  // namespace dist


#endif  // GRPC_dist_2fv1_2fdist_2eproto__INCLUDED
