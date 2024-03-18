// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: executor.proto
#ifndef GRPC_executor_2eproto__INCLUDED
#define GRPC_executor_2eproto__INCLUDED

#include "executor.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace executor {
namespace v1 {

class ExecutorService final {
 public:
  static constexpr char const* service_full_name() {
    return "executor.v1.ExecutorService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // / Processes a batch
    virtual ::grpc::Status ProcessBatch(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest& request, ::executor::v1::ProcessBatchResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::executor::v1::ProcessBatchResponse>> AsyncProcessBatch(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::executor::v1::ProcessBatchResponse>>(AsyncProcessBatchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::executor::v1::ProcessBatchResponse>> PrepareAsyncProcessBatch(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::executor::v1::ProcessBatchResponse>>(PrepareAsyncProcessBatchRaw(context, request, cq));
    }
    virtual ::grpc::Status GetFlushStatus(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::executor::v1::GetFlushStatusResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::executor::v1::GetFlushStatusResponse>> AsyncGetFlushStatus(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::executor::v1::GetFlushStatusResponse>>(AsyncGetFlushStatusRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::executor::v1::GetFlushStatusResponse>> PrepareAsyncGetFlushStatus(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::executor::v1::GetFlushStatusResponse>>(PrepareAsyncGetFlushStatusRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // / Processes a batch
      virtual void ProcessBatch(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest* request, ::executor::v1::ProcessBatchResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ProcessBatch(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::executor::v1::ProcessBatchResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void ProcessBatch(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest* request, ::executor::v1::ProcessBatchResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void ProcessBatch(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest* request, ::executor::v1::ProcessBatchResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void ProcessBatch(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::executor::v1::ProcessBatchResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void ProcessBatch(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::executor::v1::ProcessBatchResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void GetFlushStatus(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::executor::v1::GetFlushStatusResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetFlushStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::executor::v1::GetFlushStatusResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetFlushStatus(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::executor::v1::GetFlushStatusResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetFlushStatus(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::executor::v1::GetFlushStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetFlushStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::executor::v1::GetFlushStatusResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetFlushStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::executor::v1::GetFlushStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::executor::v1::ProcessBatchResponse>* AsyncProcessBatchRaw(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::executor::v1::ProcessBatchResponse>* PrepareAsyncProcessBatchRaw(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::executor::v1::GetFlushStatusResponse>* AsyncGetFlushStatusRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::executor::v1::GetFlushStatusResponse>* PrepareAsyncGetFlushStatusRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status ProcessBatch(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest& request, ::executor::v1::ProcessBatchResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::executor::v1::ProcessBatchResponse>> AsyncProcessBatch(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::executor::v1::ProcessBatchResponse>>(AsyncProcessBatchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::executor::v1::ProcessBatchResponse>> PrepareAsyncProcessBatch(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::executor::v1::ProcessBatchResponse>>(PrepareAsyncProcessBatchRaw(context, request, cq));
    }
    ::grpc::Status GetFlushStatus(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::executor::v1::GetFlushStatusResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::executor::v1::GetFlushStatusResponse>> AsyncGetFlushStatus(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::executor::v1::GetFlushStatusResponse>>(AsyncGetFlushStatusRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::executor::v1::GetFlushStatusResponse>> PrepareAsyncGetFlushStatus(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::executor::v1::GetFlushStatusResponse>>(PrepareAsyncGetFlushStatusRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void ProcessBatch(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest* request, ::executor::v1::ProcessBatchResponse* response, std::function<void(::grpc::Status)>) override;
      void ProcessBatch(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::executor::v1::ProcessBatchResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void ProcessBatch(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest* request, ::executor::v1::ProcessBatchResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void ProcessBatch(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest* request, ::executor::v1::ProcessBatchResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void ProcessBatch(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::executor::v1::ProcessBatchResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void ProcessBatch(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::executor::v1::ProcessBatchResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void GetFlushStatus(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::executor::v1::GetFlushStatusResponse* response, std::function<void(::grpc::Status)>) override;
      void GetFlushStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::executor::v1::GetFlushStatusResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetFlushStatus(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::executor::v1::GetFlushStatusResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetFlushStatus(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::executor::v1::GetFlushStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetFlushStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::executor::v1::GetFlushStatusResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetFlushStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::executor::v1::GetFlushStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::executor::v1::ProcessBatchResponse>* AsyncProcessBatchRaw(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::executor::v1::ProcessBatchResponse>* PrepareAsyncProcessBatchRaw(::grpc::ClientContext* context, const ::executor::v1::ProcessBatchRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::executor::v1::GetFlushStatusResponse>* AsyncGetFlushStatusRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::executor::v1::GetFlushStatusResponse>* PrepareAsyncGetFlushStatusRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_ProcessBatch_;
    const ::grpc::internal::RpcMethod rpcmethod_GetFlushStatus_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // / Processes a batch
    virtual ::grpc::Status ProcessBatch(::grpc::ServerContext* context, const ::executor::v1::ProcessBatchRequest* request, ::executor::v1::ProcessBatchResponse* response);
    virtual ::grpc::Status GetFlushStatus(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::executor::v1::GetFlushStatusResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ProcessBatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_ProcessBatch() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ProcessBatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ProcessBatch(::grpc::ServerContext* /*context*/, const ::executor::v1::ProcessBatchRequest* /*request*/, ::executor::v1::ProcessBatchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestProcessBatch(::grpc::ServerContext* context, ::executor::v1::ProcessBatchRequest* request, ::grpc::ServerAsyncResponseWriter< ::executor::v1::ProcessBatchResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetFlushStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetFlushStatus() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetFlushStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetFlushStatus(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::executor::v1::GetFlushStatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetFlushStatus(::grpc::ServerContext* context, ::google::protobuf::Empty* request, ::grpc::ServerAsyncResponseWriter< ::executor::v1::GetFlushStatusResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ProcessBatch<WithAsyncMethod_GetFlushStatus<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_ProcessBatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_ProcessBatch() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::executor::v1::ProcessBatchRequest, ::executor::v1::ProcessBatchResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::executor::v1::ProcessBatchRequest* request, ::executor::v1::ProcessBatchResponse* response) { return this->ProcessBatch(context, request, response); }));}
    void SetMessageAllocatorFor_ProcessBatch(
        ::grpc::experimental::MessageAllocator< ::executor::v1::ProcessBatchRequest, ::executor::v1::ProcessBatchResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::executor::v1::ProcessBatchRequest, ::executor::v1::ProcessBatchResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_ProcessBatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ProcessBatch(::grpc::ServerContext* /*context*/, const ::executor::v1::ProcessBatchRequest* /*request*/, ::executor::v1::ProcessBatchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* ProcessBatch(
      ::grpc::CallbackServerContext* /*context*/, const ::executor::v1::ProcessBatchRequest* /*request*/, ::executor::v1::ProcessBatchResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* ProcessBatch(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::executor::v1::ProcessBatchRequest* /*request*/, ::executor::v1::ProcessBatchResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetFlushStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetFlushStatus() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::executor::v1::GetFlushStatusResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::google::protobuf::Empty* request, ::executor::v1::GetFlushStatusResponse* response) { return this->GetFlushStatus(context, request, response); }));}
    void SetMessageAllocatorFor_GetFlushStatus(
        ::grpc::experimental::MessageAllocator< ::google::protobuf::Empty, ::executor::v1::GetFlushStatusResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::executor::v1::GetFlushStatusResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetFlushStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetFlushStatus(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::executor::v1::GetFlushStatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetFlushStatus(
      ::grpc::CallbackServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::executor::v1::GetFlushStatusResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetFlushStatus(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::executor::v1::GetFlushStatusResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_ProcessBatch<ExperimentalWithCallbackMethod_GetFlushStatus<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_ProcessBatch<ExperimentalWithCallbackMethod_GetFlushStatus<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_ProcessBatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_ProcessBatch() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ProcessBatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ProcessBatch(::grpc::ServerContext* /*context*/, const ::executor::v1::ProcessBatchRequest* /*request*/, ::executor::v1::ProcessBatchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetFlushStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetFlushStatus() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetFlushStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetFlushStatus(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::executor::v1::GetFlushStatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_ProcessBatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_ProcessBatch() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_ProcessBatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ProcessBatch(::grpc::ServerContext* /*context*/, const ::executor::v1::ProcessBatchRequest* /*request*/, ::executor::v1::ProcessBatchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestProcessBatch(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetFlushStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetFlushStatus() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_GetFlushStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetFlushStatus(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::executor::v1::GetFlushStatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetFlushStatus(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_ProcessBatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_ProcessBatch() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->ProcessBatch(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_ProcessBatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ProcessBatch(::grpc::ServerContext* /*context*/, const ::executor::v1::ProcessBatchRequest* /*request*/, ::executor::v1::ProcessBatchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* ProcessBatch(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* ProcessBatch(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetFlushStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetFlushStatus() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetFlushStatus(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetFlushStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetFlushStatus(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::executor::v1::GetFlushStatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetFlushStatus(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetFlushStatus(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ProcessBatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_ProcessBatch() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::executor::v1::ProcessBatchRequest, ::executor::v1::ProcessBatchResponse>(
            [this](::grpc_impl::ServerContext* context,
                   ::grpc_impl::ServerUnaryStreamer<
                     ::executor::v1::ProcessBatchRequest, ::executor::v1::ProcessBatchResponse>* streamer) {
                       return this->StreamedProcessBatch(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_ProcessBatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ProcessBatch(::grpc::ServerContext* /*context*/, const ::executor::v1::ProcessBatchRequest* /*request*/, ::executor::v1::ProcessBatchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedProcessBatch(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::executor::v1::ProcessBatchRequest,::executor::v1::ProcessBatchResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetFlushStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetFlushStatus() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::google::protobuf::Empty, ::executor::v1::GetFlushStatusResponse>(
            [this](::grpc_impl::ServerContext* context,
                   ::grpc_impl::ServerUnaryStreamer<
                     ::google::protobuf::Empty, ::executor::v1::GetFlushStatusResponse>* streamer) {
                       return this->StreamedGetFlushStatus(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetFlushStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetFlushStatus(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::executor::v1::GetFlushStatusResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetFlushStatus(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::protobuf::Empty,::executor::v1::GetFlushStatusResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_ProcessBatch<WithStreamedUnaryMethod_GetFlushStatus<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_ProcessBatch<WithStreamedUnaryMethod_GetFlushStatus<Service > > StreamedService;
};

}  // namespace v1
}  // namespace executor


#endif  // GRPC_executor_2eproto__INCLUDED