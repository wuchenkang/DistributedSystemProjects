// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: multiple_rpc.proto
#ifndef GRPC_multiple_5frpc_2eproto__INCLUDED
#define GRPC_multiple_5frpc_2eproto__INCLUDED

#include "multiple_rpc.pb.h"

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

namespace multiple_rpc {

class InfoService final {
 public:
  static constexpr char const* service_full_name() {
    return "multiple_rpc.InfoService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderInterface< ::multiple_rpc::Address>> GetServerInfo(::grpc::ClientContext* context, const ::multiple_rpc::User& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::multiple_rpc::Address>>(GetServerInfoRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::multiple_rpc::Address>> AsyncGetServerInfo(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::multiple_rpc::Address>>(AsyncGetServerInfoRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::multiple_rpc::Address>> PrepareAsyncGetServerInfo(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::multiple_rpc::Address>>(PrepareAsyncGetServerInfoRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientReaderInterface< ::multiple_rpc::Address>* GetServerInfoRaw(::grpc::ClientContext* context, const ::multiple_rpc::User& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::multiple_rpc::Address>* AsyncGetServerInfoRaw(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::multiple_rpc::Address>* PrepareAsyncGetServerInfoRaw(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReader< ::multiple_rpc::Address>> GetServerInfo(::grpc::ClientContext* context, const ::multiple_rpc::User& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::multiple_rpc::Address>>(GetServerInfoRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::multiple_rpc::Address>> AsyncGetServerInfo(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::multiple_rpc::Address>>(AsyncGetServerInfoRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::multiple_rpc::Address>> PrepareAsyncGetServerInfo(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::multiple_rpc::Address>>(PrepareAsyncGetServerInfoRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
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
    ::grpc::ClientReader< ::multiple_rpc::Address>* GetServerInfoRaw(::grpc::ClientContext* context, const ::multiple_rpc::User& request) override;
    ::grpc::ClientAsyncReader< ::multiple_rpc::Address>* AsyncGetServerInfoRaw(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::multiple_rpc::Address>* PrepareAsyncGetServerInfoRaw(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetServerInfo_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetServerInfo(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::grpc::ServerWriter< ::multiple_rpc::Address>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetServerInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetServerInfo() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetServerInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetServerInfo(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::grpc::ServerWriter< ::multiple_rpc::Address>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetServerInfo(::grpc::ServerContext* context, ::multiple_rpc::User* request, ::grpc::ServerAsyncWriter< ::multiple_rpc::Address>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetServerInfo<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetServerInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_GetServerInfo() {
    }
    ~ExperimentalWithCallbackMethod_GetServerInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetServerInfo(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::grpc::ServerWriter< ::multiple_rpc::Address>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  typedef ExperimentalWithCallbackMethod_GetServerInfo<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetServerInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetServerInfo() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetServerInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetServerInfo(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::grpc::ServerWriter< ::multiple_rpc::Address>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetServerInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetServerInfo() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetServerInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetServerInfo(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::grpc::ServerWriter< ::multiple_rpc::Address>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetServerInfo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetServerInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_GetServerInfo() {
    }
    ~ExperimentalWithRawCallbackMethod_GetServerInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetServerInfo(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::grpc::ServerWriter< ::multiple_rpc::Address>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_GetServerInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_GetServerInfo() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler< ::multiple_rpc::User, ::multiple_rpc::Address>(std::bind(&WithSplitStreamingMethod_GetServerInfo<BaseClass>::StreamedGetServerInfo, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_GetServerInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetServerInfo(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::grpc::ServerWriter< ::multiple_rpc::Address>* writer) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedGetServerInfo(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::multiple_rpc::User,::multiple_rpc::Address>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_GetServerInfo<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_GetServerInfo<Service > StreamedService;
};

class GreetingService final {
 public:
  static constexpr char const* service_full_name() {
    return "multiple_rpc.GreetingService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SayHello(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::multiple_rpc::Message* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::multiple_rpc::Message>> AsyncSayHello(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::multiple_rpc::Message>>(AsyncSayHelloRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::multiple_rpc::Message>> PrepareAsyncSayHello(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::multiple_rpc::Message>>(PrepareAsyncSayHelloRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void SayHello(::grpc::ClientContext* context, const ::multiple_rpc::User* request, ::multiple_rpc::Message* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::multiple_rpc::Message>* AsyncSayHelloRaw(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::multiple_rpc::Message>* PrepareAsyncSayHelloRaw(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SayHello(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::multiple_rpc::Message* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::multiple_rpc::Message>> AsyncSayHello(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::multiple_rpc::Message>>(AsyncSayHelloRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::multiple_rpc::Message>> PrepareAsyncSayHello(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::multiple_rpc::Message>>(PrepareAsyncSayHelloRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void SayHello(::grpc::ClientContext* context, const ::multiple_rpc::User* request, ::multiple_rpc::Message* response, std::function<void(::grpc::Status)>) override;
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
    ::grpc::ClientAsyncResponseReader< ::multiple_rpc::Message>* AsyncSayHelloRaw(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::multiple_rpc::Message>* PrepareAsyncSayHelloRaw(::grpc::ClientContext* context, const ::multiple_rpc::User& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SayHello_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SayHello(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::multiple_rpc::Message* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SayHello : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SayHello() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SayHello() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SayHello(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::multiple_rpc::Message* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSayHello(::grpc::ServerContext* context, ::multiple_rpc::User* request, ::grpc::ServerAsyncResponseWriter< ::multiple_rpc::Message>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SayHello<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_SayHello : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_SayHello() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithCallbackMethod_SayHello<BaseClass>, ::multiple_rpc::User, ::multiple_rpc::Message>(
          [this](::grpc::ServerContext* context,
                 const ::multiple_rpc::User* request,
                 ::multiple_rpc::Message* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->SayHello(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithCallbackMethod_SayHello() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SayHello(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::multiple_rpc::Message* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SayHello(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::multiple_rpc::Message* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_SayHello<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SayHello : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SayHello() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SayHello() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SayHello(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::multiple_rpc::Message* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SayHello : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SayHello() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SayHello() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SayHello(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::multiple_rpc::Message* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSayHello(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_SayHello : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_SayHello() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithRawCallbackMethod_SayHello<BaseClass>, ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->SayHello(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithRawCallbackMethod_SayHello() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SayHello(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::multiple_rpc::Message* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SayHello(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SayHello : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SayHello() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::multiple_rpc::User, ::multiple_rpc::Message>(std::bind(&WithStreamedUnaryMethod_SayHello<BaseClass>::StreamedSayHello, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SayHello() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SayHello(::grpc::ServerContext* context, const ::multiple_rpc::User* request, ::multiple_rpc::Message* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSayHello(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::multiple_rpc::User,::multiple_rpc::Message>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SayHello<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SayHello<Service > StreamedService;
};

}  // namespace multiple_rpc


#endif  // GRPC_multiple_5frpc_2eproto__INCLUDED
