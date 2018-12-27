// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: NameServer.proto
#ifndef GRPC_NameServer_2eproto__INCLUDED
#define GRPC_NameServer_2eproto__INCLUDED

#include "NameServer.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace NameServer {

class NameService final {
 public:
  static constexpr char const* service_full_name() {
    return "NameServer.NameService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status StartServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::NameServer::NodeInfo* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NameServer::NodeInfo>> AsyncStartServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NameServer::NodeInfo>>(AsyncStartServerRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NameServer::NodeInfo>> PrepareAsyncStartServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NameServer::NodeInfo>>(PrepareAsyncStartServerRaw(context, request, cq));
    }
    virtual ::grpc::Status TerminateServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::NameServer::NodeInfo* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NameServer::NodeInfo>> AsyncTerminateServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NameServer::NodeInfo>>(AsyncTerminateServerRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NameServer::NodeInfo>> PrepareAsyncTerminateServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NameServer::NodeInfo>>(PrepareAsyncTerminateServerRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void StartServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response, std::function<void(::grpc::Status)>) = 0;
      virtual void TerminateServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::NameServer::NodeInfo>* AsyncStartServerRaw(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::NameServer::NodeInfo>* PrepareAsyncStartServerRaw(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::NameServer::NodeInfo>* AsyncTerminateServerRaw(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::NameServer::NodeInfo>* PrepareAsyncTerminateServerRaw(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status StartServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::NameServer::NodeInfo* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NameServer::NodeInfo>> AsyncStartServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NameServer::NodeInfo>>(AsyncStartServerRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NameServer::NodeInfo>> PrepareAsyncStartServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NameServer::NodeInfo>>(PrepareAsyncStartServerRaw(context, request, cq));
    }
    ::grpc::Status TerminateServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::NameServer::NodeInfo* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NameServer::NodeInfo>> AsyncTerminateServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NameServer::NodeInfo>>(AsyncTerminateServerRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NameServer::NodeInfo>> PrepareAsyncTerminateServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NameServer::NodeInfo>>(PrepareAsyncTerminateServerRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void StartServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response, std::function<void(::grpc::Status)>) override;
      void TerminateServer(::grpc::ClientContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response, std::function<void(::grpc::Status)>) override;
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
    ::grpc::ClientAsyncResponseReader< ::NameServer::NodeInfo>* AsyncStartServerRaw(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::NameServer::NodeInfo>* PrepareAsyncStartServerRaw(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::NameServer::NodeInfo>* AsyncTerminateServerRaw(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::NameServer::NodeInfo>* PrepareAsyncTerminateServerRaw(::grpc::ClientContext* context, const ::NameServer::NodeInfo& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_StartServer_;
    const ::grpc::internal::RpcMethod rpcmethod_TerminateServer_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status StartServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response);
    virtual ::grpc::Status TerminateServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_StartServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_StartServer() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_StartServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStartServer(::grpc::ServerContext* context, ::NameServer::NodeInfo* request, ::grpc::ServerAsyncResponseWriter< ::NameServer::NodeInfo>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_TerminateServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_TerminateServer() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_TerminateServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status TerminateServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestTerminateServer(::grpc::ServerContext* context, ::NameServer::NodeInfo* request, ::grpc::ServerAsyncResponseWriter< ::NameServer::NodeInfo>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_StartServer<WithAsyncMethod_TerminateServer<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_StartServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_StartServer() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithCallbackMethod_StartServer<BaseClass>, ::NameServer::NodeInfo, ::NameServer::NodeInfo>(
          [this](::grpc::ServerContext* context,
                 const ::NameServer::NodeInfo* request,
                 ::NameServer::NodeInfo* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->StartServer(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithCallbackMethod_StartServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void StartServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_TerminateServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_TerminateServer() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithCallbackMethod_TerminateServer<BaseClass>, ::NameServer::NodeInfo, ::NameServer::NodeInfo>(
          [this](::grpc::ServerContext* context,
                 const ::NameServer::NodeInfo* request,
                 ::NameServer::NodeInfo* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->TerminateServer(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithCallbackMethod_TerminateServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status TerminateServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void TerminateServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_StartServer<ExperimentalWithCallbackMethod_TerminateServer<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_StartServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_StartServer() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_StartServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_TerminateServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_TerminateServer() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_TerminateServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status TerminateServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_StartServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_StartServer() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_StartServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStartServer(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_TerminateServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_TerminateServer() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_TerminateServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status TerminateServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestTerminateServer(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_StartServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_StartServer() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithRawCallbackMethod_StartServer<BaseClass>, ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->StartServer(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithRawCallbackMethod_StartServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void StartServer(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_TerminateServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_TerminateServer() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithRawCallbackMethod_TerminateServer<BaseClass>, ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->TerminateServer(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithRawCallbackMethod_TerminateServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status TerminateServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void TerminateServer(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_StartServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_StartServer() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::NameServer::NodeInfo, ::NameServer::NodeInfo>(std::bind(&WithStreamedUnaryMethod_StartServer<BaseClass>::StreamedStartServer, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_StartServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status StartServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedStartServer(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::NameServer::NodeInfo,::NameServer::NodeInfo>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_TerminateServer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_TerminateServer() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::NameServer::NodeInfo, ::NameServer::NodeInfo>(std::bind(&WithStreamedUnaryMethod_TerminateServer<BaseClass>::StreamedTerminateServer, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_TerminateServer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status TerminateServer(::grpc::ServerContext* context, const ::NameServer::NodeInfo* request, ::NameServer::NodeInfo* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedTerminateServer(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::NameServer::NodeInfo,::NameServer::NodeInfo>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_StartServer<WithStreamedUnaryMethod_TerminateServer<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_StartServer<WithStreamedUnaryMethod_TerminateServer<Service > > StreamedService;
};

}  // namespace NameServer


#endif  // GRPC_NameServer_2eproto__INCLUDED
