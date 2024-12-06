// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: dist/v1/task.proto
#ifndef GRPC_dist_2fv1_2ftask_2eproto__INCLUDED
#define GRPC_dist_2fv1_2ftask_2eproto__INCLUDED

#include "dist/v1/task.pb.h"

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

// Distributed Task Service for task scheduling and monitoring
class DistributedTaskService final {
 public:
  static constexpr char const* service_full_name() {
    return "dist.v1.DistributedTaskService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Submit a new task for distributed processing
    virtual ::grpc::Status SubmitTask(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest& request, ::dist::v1::SubmitTaskResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::SubmitTaskResponse>> AsyncSubmitTask(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::SubmitTaskResponse>>(AsyncSubmitTaskRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::SubmitTaskResponse>> PrepareAsyncSubmitTask(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::SubmitTaskResponse>>(PrepareAsyncSubmitTaskRaw(context, request, cq));
    }
    // Watch task status and events
    std::unique_ptr< ::grpc::ClientReaderInterface< ::dist::v1::WatchTasksResponse>> WatchTasks(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::dist::v1::WatchTasksResponse>>(WatchTasksRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchTasksResponse>> AsyncWatchTasks(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchTasksResponse>>(AsyncWatchTasksRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchTasksResponse>> PrepareAsyncWatchTasks(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchTasksResponse>>(PrepareAsyncWatchTasksRaw(context, request, cq));
    }
    // Cancel a running task
    virtual ::grpc::Status CancelTask(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest& request, ::dist::v1::CancelTaskResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::CancelTaskResponse>> AsyncCancelTask(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::CancelTaskResponse>>(AsyncCancelTaskRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::CancelTaskResponse>> PrepareAsyncCancelTask(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::CancelTaskResponse>>(PrepareAsyncCancelTaskRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Submit a new task for distributed processing
      virtual void SubmitTask(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest* request, ::dist::v1::SubmitTaskResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SubmitTask(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest* request, ::dist::v1::SubmitTaskResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      // Watch task status and events
      virtual void WatchTasks(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest* request, ::grpc::ClientReadReactor< ::dist::v1::WatchTasksResponse>* reactor) = 0;
      // Cancel a running task
      virtual void CancelTask(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest* request, ::dist::v1::CancelTaskResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CancelTask(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest* request, ::dist::v1::CancelTaskResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::SubmitTaskResponse>* AsyncSubmitTaskRaw(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::SubmitTaskResponse>* PrepareAsyncSubmitTaskRaw(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::dist::v1::WatchTasksResponse>* WatchTasksRaw(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchTasksResponse>* AsyncWatchTasksRaw(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::dist::v1::WatchTasksResponse>* PrepareAsyncWatchTasksRaw(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::CancelTaskResponse>* AsyncCancelTaskRaw(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::dist::v1::CancelTaskResponse>* PrepareAsyncCancelTaskRaw(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status SubmitTask(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest& request, ::dist::v1::SubmitTaskResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::SubmitTaskResponse>> AsyncSubmitTask(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::SubmitTaskResponse>>(AsyncSubmitTaskRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::SubmitTaskResponse>> PrepareAsyncSubmitTask(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::SubmitTaskResponse>>(PrepareAsyncSubmitTaskRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::dist::v1::WatchTasksResponse>> WatchTasks(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::dist::v1::WatchTasksResponse>>(WatchTasksRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::dist::v1::WatchTasksResponse>> AsyncWatchTasks(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::dist::v1::WatchTasksResponse>>(AsyncWatchTasksRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::dist::v1::WatchTasksResponse>> PrepareAsyncWatchTasks(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::dist::v1::WatchTasksResponse>>(PrepareAsyncWatchTasksRaw(context, request, cq));
    }
    ::grpc::Status CancelTask(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest& request, ::dist::v1::CancelTaskResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::CancelTaskResponse>> AsyncCancelTask(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::CancelTaskResponse>>(AsyncCancelTaskRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::CancelTaskResponse>> PrepareAsyncCancelTask(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dist::v1::CancelTaskResponse>>(PrepareAsyncCancelTaskRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void SubmitTask(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest* request, ::dist::v1::SubmitTaskResponse* response, std::function<void(::grpc::Status)>) override;
      void SubmitTask(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest* request, ::dist::v1::SubmitTaskResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void WatchTasks(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest* request, ::grpc::ClientReadReactor< ::dist::v1::WatchTasksResponse>* reactor) override;
      void CancelTask(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest* request, ::dist::v1::CancelTaskResponse* response, std::function<void(::grpc::Status)>) override;
      void CancelTask(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest* request, ::dist::v1::CancelTaskResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::dist::v1::SubmitTaskResponse>* AsyncSubmitTaskRaw(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::dist::v1::SubmitTaskResponse>* PrepareAsyncSubmitTaskRaw(::grpc::ClientContext* context, const ::dist::v1::SubmitTaskRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< ::dist::v1::WatchTasksResponse>* WatchTasksRaw(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest& request) override;
    ::grpc::ClientAsyncReader< ::dist::v1::WatchTasksResponse>* AsyncWatchTasksRaw(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::dist::v1::WatchTasksResponse>* PrepareAsyncWatchTasksRaw(::grpc::ClientContext* context, const ::dist::v1::WatchTasksRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::dist::v1::CancelTaskResponse>* AsyncCancelTaskRaw(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::dist::v1::CancelTaskResponse>* PrepareAsyncCancelTaskRaw(::grpc::ClientContext* context, const ::dist::v1::CancelTaskRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SubmitTask_;
    const ::grpc::internal::RpcMethod rpcmethod_WatchTasks_;
    const ::grpc::internal::RpcMethod rpcmethod_CancelTask_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Submit a new task for distributed processing
    virtual ::grpc::Status SubmitTask(::grpc::ServerContext* context, const ::dist::v1::SubmitTaskRequest* request, ::dist::v1::SubmitTaskResponse* response);
    // Watch task status and events
    virtual ::grpc::Status WatchTasks(::grpc::ServerContext* context, const ::dist::v1::WatchTasksRequest* request, ::grpc::ServerWriter< ::dist::v1::WatchTasksResponse>* writer);
    // Cancel a running task
    virtual ::grpc::Status CancelTask(::grpc::ServerContext* context, const ::dist::v1::CancelTaskRequest* request, ::dist::v1::CancelTaskResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SubmitTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SubmitTask() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SubmitTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubmitTask(::grpc::ServerContext* /*context*/, const ::dist::v1::SubmitTaskRequest* /*request*/, ::dist::v1::SubmitTaskResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubmitTask(::grpc::ServerContext* context, ::dist::v1::SubmitTaskRequest* request, ::grpc::ServerAsyncResponseWriter< ::dist::v1::SubmitTaskResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_WatchTasks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_WatchTasks() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_WatchTasks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchTasks(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchTasksRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchTasksResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestWatchTasks(::grpc::ServerContext* context, ::dist::v1::WatchTasksRequest* request, ::grpc::ServerAsyncWriter< ::dist::v1::WatchTasksResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CancelTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_CancelTask() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_CancelTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelTask(::grpc::ServerContext* /*context*/, const ::dist::v1::CancelTaskRequest* /*request*/, ::dist::v1::CancelTaskResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCancelTask(::grpc::ServerContext* context, ::dist::v1::CancelTaskRequest* request, ::grpc::ServerAsyncResponseWriter< ::dist::v1::CancelTaskResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SubmitTask<WithAsyncMethod_WatchTasks<WithAsyncMethod_CancelTask<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_SubmitTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SubmitTask() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::dist::v1::SubmitTaskRequest, ::dist::v1::SubmitTaskResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::dist::v1::SubmitTaskRequest* request, ::dist::v1::SubmitTaskResponse* response) { return this->SubmitTask(context, request, response); }));}
    void SetMessageAllocatorFor_SubmitTask(
        ::grpc::MessageAllocator< ::dist::v1::SubmitTaskRequest, ::dist::v1::SubmitTaskResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::dist::v1::SubmitTaskRequest, ::dist::v1::SubmitTaskResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_SubmitTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubmitTask(::grpc::ServerContext* /*context*/, const ::dist::v1::SubmitTaskRequest* /*request*/, ::dist::v1::SubmitTaskResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SubmitTask(
      ::grpc::CallbackServerContext* /*context*/, const ::dist::v1::SubmitTaskRequest* /*request*/, ::dist::v1::SubmitTaskResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_WatchTasks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_WatchTasks() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackServerStreamingHandler< ::dist::v1::WatchTasksRequest, ::dist::v1::WatchTasksResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::dist::v1::WatchTasksRequest* request) { return this->WatchTasks(context, request); }));
    }
    ~WithCallbackMethod_WatchTasks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchTasks(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchTasksRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchTasksResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::dist::v1::WatchTasksResponse>* WatchTasks(
      ::grpc::CallbackServerContext* /*context*/, const ::dist::v1::WatchTasksRequest* /*request*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_CancelTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_CancelTask() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::dist::v1::CancelTaskRequest, ::dist::v1::CancelTaskResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::dist::v1::CancelTaskRequest* request, ::dist::v1::CancelTaskResponse* response) { return this->CancelTask(context, request, response); }));}
    void SetMessageAllocatorFor_CancelTask(
        ::grpc::MessageAllocator< ::dist::v1::CancelTaskRequest, ::dist::v1::CancelTaskResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::dist::v1::CancelTaskRequest, ::dist::v1::CancelTaskResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_CancelTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelTask(::grpc::ServerContext* /*context*/, const ::dist::v1::CancelTaskRequest* /*request*/, ::dist::v1::CancelTaskResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* CancelTask(
      ::grpc::CallbackServerContext* /*context*/, const ::dist::v1::CancelTaskRequest* /*request*/, ::dist::v1::CancelTaskResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_SubmitTask<WithCallbackMethod_WatchTasks<WithCallbackMethod_CancelTask<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SubmitTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SubmitTask() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SubmitTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubmitTask(::grpc::ServerContext* /*context*/, const ::dist::v1::SubmitTaskRequest* /*request*/, ::dist::v1::SubmitTaskResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_WatchTasks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_WatchTasks() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_WatchTasks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchTasks(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchTasksRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchTasksResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CancelTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_CancelTask() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_CancelTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelTask(::grpc::ServerContext* /*context*/, const ::dist::v1::CancelTaskRequest* /*request*/, ::dist::v1::CancelTaskResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SubmitTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SubmitTask() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SubmitTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubmitTask(::grpc::ServerContext* /*context*/, const ::dist::v1::SubmitTaskRequest* /*request*/, ::dist::v1::SubmitTaskResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubmitTask(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_WatchTasks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_WatchTasks() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_WatchTasks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchTasks(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchTasksRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchTasksResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestWatchTasks(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_CancelTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_CancelTask() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_CancelTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelTask(::grpc::ServerContext* /*context*/, const ::dist::v1::CancelTaskRequest* /*request*/, ::dist::v1::CancelTaskResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCancelTask(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SubmitTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SubmitTask() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->SubmitTask(context, request, response); }));
    }
    ~WithRawCallbackMethod_SubmitTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubmitTask(::grpc::ServerContext* /*context*/, const ::dist::v1::SubmitTaskRequest* /*request*/, ::dist::v1::SubmitTaskResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SubmitTask(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_WatchTasks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_WatchTasks() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const::grpc::ByteBuffer* request) { return this->WatchTasks(context, request); }));
    }
    ~WithRawCallbackMethod_WatchTasks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WatchTasks(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchTasksRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchTasksResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* WatchTasks(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_CancelTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_CancelTask() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->CancelTask(context, request, response); }));
    }
    ~WithRawCallbackMethod_CancelTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelTask(::grpc::ServerContext* /*context*/, const ::dist::v1::CancelTaskRequest* /*request*/, ::dist::v1::CancelTaskResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* CancelTask(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SubmitTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_SubmitTask() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::dist::v1::SubmitTaskRequest, ::dist::v1::SubmitTaskResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::dist::v1::SubmitTaskRequest, ::dist::v1::SubmitTaskResponse>* streamer) {
                       return this->StreamedSubmitTask(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_SubmitTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SubmitTask(::grpc::ServerContext* /*context*/, const ::dist::v1::SubmitTaskRequest* /*request*/, ::dist::v1::SubmitTaskResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSubmitTask(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::dist::v1::SubmitTaskRequest,::dist::v1::SubmitTaskResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CancelTask : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_CancelTask() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::dist::v1::CancelTaskRequest, ::dist::v1::CancelTaskResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::dist::v1::CancelTaskRequest, ::dist::v1::CancelTaskResponse>* streamer) {
                       return this->StreamedCancelTask(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_CancelTask() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CancelTask(::grpc::ServerContext* /*context*/, const ::dist::v1::CancelTaskRequest* /*request*/, ::dist::v1::CancelTaskResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCancelTask(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::dist::v1::CancelTaskRequest,::dist::v1::CancelTaskResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SubmitTask<WithStreamedUnaryMethod_CancelTask<Service > > StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_WatchTasks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_WatchTasks() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::dist::v1::WatchTasksRequest, ::dist::v1::WatchTasksResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::dist::v1::WatchTasksRequest, ::dist::v1::WatchTasksResponse>* streamer) {
                       return this->StreamedWatchTasks(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_WatchTasks() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status WatchTasks(::grpc::ServerContext* /*context*/, const ::dist::v1::WatchTasksRequest* /*request*/, ::grpc::ServerWriter< ::dist::v1::WatchTasksResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedWatchTasks(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::dist::v1::WatchTasksRequest,::dist::v1::WatchTasksResponse>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_WatchTasks<Service > SplitStreamedService;
  typedef WithStreamedUnaryMethod_SubmitTask<WithSplitStreamingMethod_WatchTasks<WithStreamedUnaryMethod_CancelTask<Service > > > StreamedService;
};

}  // namespace v1
}  // namespace dist


#endif  // GRPC_dist_2fv1_2ftask_2eproto__INCLUDED