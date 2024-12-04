// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: dist/v1/registry.proto
#ifndef GRPC_dist_2fv1_2fregistry_2eproto__INCLUDED
#define GRPC_dist_2fv1_2fregistry_2eproto__INCLUDED

#include "dist/v1/registry.pb.h"

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

// 注册中心服务
class RegistryService final {
 public:
  static constexpr char const* service_full_name() {
    return "dist.v1.RegistryService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Register(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest& request, ::dist::v1::RegisterResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::RegisterResponse>> AsyncRegister(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::RegisterResponse>>(AsyncRegisterRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::RegisterResponse>> PrepareAsyncRegister(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::RegisterResponse>>(PrepareAsyncRegisterRaw(context, request, cq));
    }
    virtual ::grpc::Status Heartbeat(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest& request, ::dist::v1::HeartbeatResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::HeartbeatResponse>> AsyncHeartbeat(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::HeartbeatResponse>>(AsyncHeartbeatRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::HeartbeatResponse>> PrepareAsyncHeartbeat(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::HeartbeatResponse>>(PrepareAsyncHeartbeatRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::dist::v1::WatchRegistryResponse>> WatchRegistry(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::dist::v1::WatchRegistryResponse>>(WatchRegistryRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchRegistryResponse>> AsyncWatchRegistry(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchRegistryResponse>>(AsyncWatchRegistryRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchRegistryResponse>> PrepareAsyncWatchRegistry(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchRegistryResponse>>(PrepareAsyncWatchRegistryRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Register(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest* request, ::dist::v1::RegisterResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Register(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest* request, ::dist::v1::RegisterResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void Heartbeat(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest* request, ::dist::v1::HeartbeatResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Heartbeat(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest* request, ::dist::v1::HeartbeatResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void WatchRegistry(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest* request, ::grpc::ClientReadReactor< ::dist::v1::WatchRegistryResponse>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::RegisterResponse>* AsyncRegisterRaw(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::RegisterResponse>* PrepareAsyncRegisterRaw(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::HeartbeatResponse>* AsyncHeartbeatRaw(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::HeartbeatResponse>* PrepareAsyncHeartbeatRaw(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::dist::v1::WatchRegistryResponse>* WatchRegistryRaw(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchRegistryResponse>* AsyncWatchRegistryRaw(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchRegistryResponse>* PrepareAsyncWatchRegistryRaw(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Register(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest& request, ::dist::v1::RegisterResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::RegisterResponse>> AsyncRegister(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::RegisterResponse>>(AsyncRegisterRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::RegisterResponse>> PrepareAsyncRegister(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::RegisterResponse>>(PrepareAsyncRegisterRaw(context, request, cq));
    }
    ::grpc::Status Heartbeat(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest& request, ::dist::v1::HeartbeatResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::HeartbeatResponse>> AsyncHeartbeat(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::HeartbeatResponse>>(AsyncHeartbeatRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::HeartbeatResponse>> PrepareAsyncHeartbeat(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::HeartbeatResponse>>(PrepareAsyncHeartbeatRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::dist::v1::WatchRegistryResponse>> WatchRegistry(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::dist::v1::WatchRegistryResponse>>(WatchRegistryRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::dist::v1::WatchRegistryResponse>> AsyncWatchRegistry(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::dist::v1::WatchRegistryResponse>>(AsyncWatchRegistryRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::dist::v1::WatchRegistryResponse>> PrepareAsyncWatchRegistry(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::dist::v1::WatchRegistryResponse>>(PrepareAsyncWatchRegistryRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Register(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest* request, ::dist::v1::RegisterResponse* response, std::function<void(::grpc::Status)>) override;
      void Register(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest* request, ::dist::v1::RegisterResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void Heartbeat(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest* request, ::dist::v1::HeartbeatResponse* response, std::function<void(::grpc::Status)>) override;
      void Heartbeat(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest* request, ::dist::v1::HeartbeatResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void WatchRegistry(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest* request, ::grpc::ClientReadReactor< ::dist::v1::WatchRegistryResponse>* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::dist::v1::RegisterResponse>* AsyncRegisterRaw(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::dist::v1::RegisterResponse>* PrepareAsyncRegisterRaw(::grpc::ClientContext* context, const ::dist::v1::RegisterRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::dist::v1::HeartbeatResponse>* AsyncHeartbeatRaw(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::dist::v1::HeartbeatResponse>* PrepareAsyncHeartbeatRaw(::grpc::ClientContext* context, const ::dist::v1::HeartbeatRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< ::dist::v1::WatchRegistryResponse>* WatchRegistryRaw(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest& request) override;
    ::grpc::ClientAsyncReader< ::dist::v1::WatchRegistryResponse>* AsyncWatchRegistryRaw(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::dist::v1::WatchRegistryResponse>* PrepareAsyncWatchRegistryRaw(::grpc::ClientContext* context, const ::dist::v1::WatchRegistryRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Register_;
    const ::grpc::internal::RpcMethod rpcmethod_Heartbeat_;
    const ::grpc::internal::RpcMethod rpcmethod_WatchRegistry_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Register(::grpc::ServerContext* context, const ::dist::v1::RegisterRequest* request, ::dist::v1::RegisterResponse* response);
    virtual ::grpc::Status Heartbeat(::grpc::ServerContext* context, const ::dist::v1::HeartbeatRequest* request, ::dist::v1::HeartbeatResponse* response);
    virtual ::grpc::Status WatchRegistry(::grpc::ServerContext* context, const ::dist::v1::WatchRegistryRequest* request, ::grpc::ServerWriter< ::dist::v1::WatchRegistryResponse>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_Register : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Register() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Register() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Register(::grpc::ServerContext* /*context*/, const ::dist::v1::RegisterRequest* /*request*/, ::dist::v1::RegisterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRegister(::grpc::ServerContext* context, ::dist::v1::RegisterRequest* request, ::grpc::ServerAsyncResponseWriter< ::dist::v1::RegisterResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Heartbeat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Heartbeat() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Heartbeat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Heartbeat(::grpc::ServerContext* /*context*/, const ::dist::v1::HeartbeatRequest* /*request*/, ::dist::v1::HeartbeatResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHeartbeat(::grpc::ServerContext* context, ::dist::v1::HeartbeatRequest* request, ::grpc::ServerAsyncResponseWriter< ::dist::v1::HeartbeatResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_WatchRegistry : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_WatchRegistry() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_WatchRegistry() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchRegistry(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchRegistryRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchRegistryResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestWatchRegistry(::grpc::ServerContext* context, ::dist::v1::WatchRegistryRequest* request, ::grpc::ServerAsyncWriter< ::dist::v1::WatchRegistryResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(2, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Register<WithAsyncMethod_Heartbeat<WithAsyncMethod_WatchRegistry<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Register : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Register() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::dist::v1::RegisterRequest, ::dist::v1::RegisterResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::dist::v1::RegisterRequest* request, ::dist::v1::RegisterResponse* response) { return this->Register(context, request, response); }));}
    void SetMessageAllocatorFor_Register(
        ::grpc::MessageAllocator< ::dist::v1::RegisterRequest, ::dist::v1::RegisterResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::dist::v1::RegisterRequest, ::dist::v1::RegisterResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Register() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Register(::grpc::ServerContext* /*context*/, const ::dist::v1::RegisterRequest* /*request*/, ::dist::v1::RegisterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Register(
      ::grpc::CallbackServerContext* /*context*/, const ::dist::v1::RegisterRequest* /*request*/, ::dist::v1::RegisterResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Heartbeat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Heartbeat() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::dist::v1::HeartbeatRequest, ::dist::v1::HeartbeatResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::dist::v1::HeartbeatRequest* request, ::dist::v1::HeartbeatResponse* response) { return this->Heartbeat(context, request, response); }));}
    void SetMessageAllocatorFor_Heartbeat(
        ::grpc::MessageAllocator< ::dist::v1::HeartbeatRequest, ::dist::v1::HeartbeatResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::dist::v1::HeartbeatRequest, ::dist::v1::HeartbeatResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Heartbeat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Heartbeat(::grpc::ServerContext* /*context*/, const ::dist::v1::HeartbeatRequest* /*request*/, ::dist::v1::HeartbeatResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Heartbeat(
      ::grpc::CallbackServerContext* /*context*/, const ::dist::v1::HeartbeatRequest* /*request*/, ::dist::v1::HeartbeatResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_WatchRegistry : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_WatchRegistry() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackServerStreamingHandler< ::dist::v1::WatchRegistryRequest, ::dist::v1::WatchRegistryResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::dist::v1::WatchRegistryRequest* request) { return this->WatchRegistry(context, request); }));
    }
    ~WithCallbackMethod_WatchRegistry() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchRegistry(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchRegistryRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchRegistryResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::dist::v1::WatchRegistryResponse>* WatchRegistry(
      ::grpc::CallbackServerContext* /*context*/, const ::dist::v1::WatchRegistryRequest* /*request*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Register<WithCallbackMethod_Heartbeat<WithCallbackMethod_WatchRegistry<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Register : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Register() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Register() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Register(::grpc::ServerContext* /*context*/, const ::dist::v1::RegisterRequest* /*request*/, ::dist::v1::RegisterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Heartbeat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Heartbeat() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Heartbeat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Heartbeat(::grpc::ServerContext* /*context*/, const ::dist::v1::HeartbeatRequest* /*request*/, ::dist::v1::HeartbeatResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_WatchRegistry : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_WatchRegistry() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_WatchRegistry() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchRegistry(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchRegistryRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchRegistryResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Register : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Register() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Register() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Register(::grpc::ServerContext* /*context*/, const ::dist::v1::RegisterRequest* /*request*/, ::dist::v1::RegisterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRegister(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Heartbeat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Heartbeat() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Heartbeat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Heartbeat(::grpc::ServerContext* /*context*/, const ::dist::v1::HeartbeatRequest* /*request*/, ::dist::v1::HeartbeatResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHeartbeat(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_WatchRegistry : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_WatchRegistry() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_WatchRegistry() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchRegistry(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchRegistryRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchRegistryResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestWatchRegistry(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(2, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Register : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Register() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Register(context, request, response); }));
    }
    ~WithRawCallbackMethod_Register() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Register(::grpc::ServerContext* /*context*/, const ::dist::v1::RegisterRequest* /*request*/, ::dist::v1::RegisterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Register(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Heartbeat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Heartbeat() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Heartbeat(context, request, response); }));
    }
    ~WithRawCallbackMethod_Heartbeat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Heartbeat(::grpc::ServerContext* /*context*/, const ::dist::v1::HeartbeatRequest* /*request*/, ::dist::v1::HeartbeatResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Heartbeat(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_WatchRegistry : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_WatchRegistry() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const::grpc::ByteBuffer* request) { return this->WatchRegistry(context, request); }));
    }
    ~WithRawCallbackMethod_WatchRegistry() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchRegistry(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchRegistryRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchRegistryResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* WatchRegistry(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Register : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Register() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::dist::v1::RegisterRequest, ::dist::v1::RegisterResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::dist::v1::RegisterRequest, ::dist::v1::RegisterResponse>* streamer) {
                       return this->StreamedRegister(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Register() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Register(::grpc::ServerContext* /*context*/, const ::dist::v1::RegisterRequest* /*request*/, ::dist::v1::RegisterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedRegister(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::dist::v1::RegisterRequest,::dist::v1::RegisterResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Heartbeat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Heartbeat() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::dist::v1::HeartbeatRequest, ::dist::v1::HeartbeatResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::dist::v1::HeartbeatRequest, ::dist::v1::HeartbeatResponse>* streamer) {
                       return this->StreamedHeartbeat(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Heartbeat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Heartbeat(::grpc::ServerContext* /*context*/, const ::dist::v1::HeartbeatRequest* /*request*/, ::dist::v1::HeartbeatResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedHeartbeat(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::dist::v1::HeartbeatRequest,::dist::v1::HeartbeatResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Register<WithStreamedUnaryMethod_Heartbeat<Service > > StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_WatchRegistry : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_WatchRegistry() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::dist::v1::WatchRegistryRequest, ::dist::v1::WatchRegistryResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::dist::v1::WatchRegistryRequest, ::dist::v1::WatchRegistryResponse>* streamer) {
                       return this->StreamedWatchRegistry(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_WatchRegistry() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status WatchRegistry(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchRegistryRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchRegistryResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedWatchRegistry(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::dist::v1::WatchRegistryRequest,::dist::v1::WatchRegistryResponse>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_WatchRegistry<Service > SplitStreamedService;
  typedef WithStreamedUnaryMethod_Register<WithStreamedUnaryMethod_Heartbeat<WithSplitStreamingMethod_WatchRegistry<Service > > > StreamedService;
};

}  // namespace v1
}  // namespace dist


#endif  // GRPC_dist_2fv1_2fregistry_2eproto__INCLUDED
