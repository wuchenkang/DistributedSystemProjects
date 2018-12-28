// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: DistributedFileSystem.proto

#include "DistributedFileSystem.pb.h"
#include "DistributedFileSystem.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace DistributedFileSystem {

static const char* NameService_method_names[] = {
  "/DistributedFileSystem.NameService/startServer",
  "/DistributedFileSystem.NameService/terminateServer",
  "/DistributedFileSystem.NameService/beginGetTransaction",
  "/DistributedFileSystem.NameService/commitGetTransaction",
  "/DistributedFileSystem.NameService/abortGetTransaction",
  "/DistributedFileSystem.NameService/beginPutTransaction",
  "/DistributedFileSystem.NameService/updateBlockInfo",
};

std::unique_ptr< NameService::Stub> NameService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< NameService::Stub> stub(new NameService::Stub(channel));
  return stub;
}

NameService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_startServer_(NameService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_terminateServer_(NameService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_beginGetTransaction_(NameService_method_names[2], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_commitGetTransaction_(NameService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_abortGetTransaction_(NameService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_beginPutTransaction_(NameService_method_names[5], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_updateBlockInfo_(NameService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status NameService::Stub::startServer(::grpc::ClientContext* context, const ::DistributedFileSystem::ServerInfo& request, ::DistributedFileSystem::ServerInfo* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_startServer_, context, request, response);
}

void NameService::Stub::experimental_async::startServer(::grpc::ClientContext* context, const ::DistributedFileSystem::ServerInfo* request, ::DistributedFileSystem::ServerInfo* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_startServer_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::DistributedFileSystem::ServerInfo>* NameService::Stub::AsyncstartServerRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::ServerInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::DistributedFileSystem::ServerInfo>::Create(channel_.get(), cq, rpcmethod_startServer_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::DistributedFileSystem::ServerInfo>* NameService::Stub::PrepareAsyncstartServerRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::ServerInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::DistributedFileSystem::ServerInfo>::Create(channel_.get(), cq, rpcmethod_startServer_, context, request, false);
}

::grpc::Status NameService::Stub::terminateServer(::grpc::ClientContext* context, const ::DistributedFileSystem::ServerInfo& request, ::DistributedFileSystem::ServerInfo* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_terminateServer_, context, request, response);
}

void NameService::Stub::experimental_async::terminateServer(::grpc::ClientContext* context, const ::DistributedFileSystem::ServerInfo* request, ::DistributedFileSystem::ServerInfo* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_terminateServer_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::DistributedFileSystem::ServerInfo>* NameService::Stub::AsyncterminateServerRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::ServerInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::DistributedFileSystem::ServerInfo>::Create(channel_.get(), cq, rpcmethod_terminateServer_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::DistributedFileSystem::ServerInfo>* NameService::Stub::PrepareAsyncterminateServerRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::ServerInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::DistributedFileSystem::ServerInfo>::Create(channel_.get(), cq, rpcmethod_terminateServer_, context, request, false);
}

::grpc::ClientReader< ::DistributedFileSystem::BlockStore>* NameService::Stub::beginGetTransactionRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo& request) {
  return ::grpc::internal::ClientReaderFactory< ::DistributedFileSystem::BlockStore>::Create(channel_.get(), rpcmethod_beginGetTransaction_, context, request);
}

::grpc::ClientAsyncReader< ::DistributedFileSystem::BlockStore>* NameService::Stub::AsyncbeginGetTransactionRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::DistributedFileSystem::BlockStore>::Create(channel_.get(), cq, rpcmethod_beginGetTransaction_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::DistributedFileSystem::BlockStore>* NameService::Stub::PrepareAsyncbeginGetTransactionRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::DistributedFileSystem::BlockStore>::Create(channel_.get(), cq, rpcmethod_beginGetTransaction_, context, request, false, nullptr);
}

::grpc::Status NameService::Stub::commitGetTransaction(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo& request, ::DistributedFileSystem::FileInfo* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_commitGetTransaction_, context, request, response);
}

void NameService::Stub::experimental_async::commitGetTransaction(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo* request, ::DistributedFileSystem::FileInfo* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_commitGetTransaction_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::DistributedFileSystem::FileInfo>* NameService::Stub::AsynccommitGetTransactionRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::DistributedFileSystem::FileInfo>::Create(channel_.get(), cq, rpcmethod_commitGetTransaction_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::DistributedFileSystem::FileInfo>* NameService::Stub::PrepareAsynccommitGetTransactionRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::DistributedFileSystem::FileInfo>::Create(channel_.get(), cq, rpcmethod_commitGetTransaction_, context, request, false);
}

::grpc::Status NameService::Stub::abortGetTransaction(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo& request, ::DistributedFileSystem::FileInfo* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_abortGetTransaction_, context, request, response);
}

void NameService::Stub::experimental_async::abortGetTransaction(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo* request, ::DistributedFileSystem::FileInfo* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_abortGetTransaction_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::DistributedFileSystem::FileInfo>* NameService::Stub::AsyncabortGetTransactionRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::DistributedFileSystem::FileInfo>::Create(channel_.get(), cq, rpcmethod_abortGetTransaction_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::DistributedFileSystem::FileInfo>* NameService::Stub::PrepareAsyncabortGetTransactionRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::DistributedFileSystem::FileInfo>::Create(channel_.get(), cq, rpcmethod_abortGetTransaction_, context, request, false);
}

::grpc::ClientReader< ::DistributedFileSystem::BlockStore>* NameService::Stub::beginPutTransactionRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo& request) {
  return ::grpc::internal::ClientReaderFactory< ::DistributedFileSystem::BlockStore>::Create(channel_.get(), rpcmethod_beginPutTransaction_, context, request);
}

::grpc::ClientAsyncReader< ::DistributedFileSystem::BlockStore>* NameService::Stub::AsyncbeginPutTransactionRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::DistributedFileSystem::BlockStore>::Create(channel_.get(), cq, rpcmethod_beginPutTransaction_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::DistributedFileSystem::BlockStore>* NameService::Stub::PrepareAsyncbeginPutTransactionRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::FileInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::DistributedFileSystem::BlockStore>::Create(channel_.get(), cq, rpcmethod_beginPutTransaction_, context, request, false, nullptr);
}

::grpc::Status NameService::Stub::updateBlockInfo(::grpc::ClientContext* context, const ::DistributedFileSystem::BlockInfo& request, ::DistributedFileSystem::BlockInfo* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_updateBlockInfo_, context, request, response);
}

void NameService::Stub::experimental_async::updateBlockInfo(::grpc::ClientContext* context, const ::DistributedFileSystem::BlockInfo* request, ::DistributedFileSystem::BlockInfo* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_updateBlockInfo_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::DistributedFileSystem::BlockInfo>* NameService::Stub::AsyncupdateBlockInfoRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::BlockInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::DistributedFileSystem::BlockInfo>::Create(channel_.get(), cq, rpcmethod_updateBlockInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::DistributedFileSystem::BlockInfo>* NameService::Stub::PrepareAsyncupdateBlockInfoRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::BlockInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::DistributedFileSystem::BlockInfo>::Create(channel_.get(), cq, rpcmethod_updateBlockInfo_, context, request, false);
}

NameService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NameService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NameService::Service, ::DistributedFileSystem::ServerInfo, ::DistributedFileSystem::ServerInfo>(
          std::mem_fn(&NameService::Service::startServer), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NameService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NameService::Service, ::DistributedFileSystem::ServerInfo, ::DistributedFileSystem::ServerInfo>(
          std::mem_fn(&NameService::Service::terminateServer), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NameService_method_names[2],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< NameService::Service, ::DistributedFileSystem::FileInfo, ::DistributedFileSystem::BlockStore>(
          std::mem_fn(&NameService::Service::beginGetTransaction), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NameService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NameService::Service, ::DistributedFileSystem::FileInfo, ::DistributedFileSystem::FileInfo>(
          std::mem_fn(&NameService::Service::commitGetTransaction), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NameService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NameService::Service, ::DistributedFileSystem::FileInfo, ::DistributedFileSystem::FileInfo>(
          std::mem_fn(&NameService::Service::abortGetTransaction), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NameService_method_names[5],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< NameService::Service, ::DistributedFileSystem::FileInfo, ::DistributedFileSystem::BlockStore>(
          std::mem_fn(&NameService::Service::beginPutTransaction), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NameService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NameService::Service, ::DistributedFileSystem::BlockInfo, ::DistributedFileSystem::BlockInfo>(
          std::mem_fn(&NameService::Service::updateBlockInfo), this)));
}

NameService::Service::~Service() {
}

::grpc::Status NameService::Service::startServer(::grpc::ServerContext* context, const ::DistributedFileSystem::ServerInfo* request, ::DistributedFileSystem::ServerInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NameService::Service::terminateServer(::grpc::ServerContext* context, const ::DistributedFileSystem::ServerInfo* request, ::DistributedFileSystem::ServerInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NameService::Service::beginGetTransaction(::grpc::ServerContext* context, const ::DistributedFileSystem::FileInfo* request, ::grpc::ServerWriter< ::DistributedFileSystem::BlockStore>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NameService::Service::commitGetTransaction(::grpc::ServerContext* context, const ::DistributedFileSystem::FileInfo* request, ::DistributedFileSystem::FileInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NameService::Service::abortGetTransaction(::grpc::ServerContext* context, const ::DistributedFileSystem::FileInfo* request, ::DistributedFileSystem::FileInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NameService::Service::beginPutTransaction(::grpc::ServerContext* context, const ::DistributedFileSystem::FileInfo* request, ::grpc::ServerWriter< ::DistributedFileSystem::BlockStore>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NameService::Service::updateBlockInfo(::grpc::ServerContext* context, const ::DistributedFileSystem::BlockInfo* request, ::DistributedFileSystem::BlockInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* DataService_method_names[] = {
  "/DistributedFileSystem.DataService/getBlock",
  "/DistributedFileSystem.DataService/putBlock",
  "/DistributedFileSystem.DataService/rmBlock",
};

std::unique_ptr< DataService::Stub> DataService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< DataService::Stub> stub(new DataService::Stub(channel));
  return stub;
}

DataService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_getBlock_(DataService_method_names[0], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_putBlock_(DataService_method_names[1], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_rmBlock_(DataService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::DistributedFileSystem::BlockUnit>* DataService::Stub::getBlockRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::BlockInfo& request) {
  return ::grpc::internal::ClientReaderFactory< ::DistributedFileSystem::BlockUnit>::Create(channel_.get(), rpcmethod_getBlock_, context, request);
}

::grpc::ClientAsyncReader< ::DistributedFileSystem::BlockUnit>* DataService::Stub::AsyncgetBlockRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::BlockInfo& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::DistributedFileSystem::BlockUnit>::Create(channel_.get(), cq, rpcmethod_getBlock_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::DistributedFileSystem::BlockUnit>* DataService::Stub::PrepareAsyncgetBlockRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::BlockInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::DistributedFileSystem::BlockUnit>::Create(channel_.get(), cq, rpcmethod_getBlock_, context, request, false, nullptr);
}

::grpc::ClientWriter< ::DistributedFileSystem::BlockUnit>* DataService::Stub::putBlockRaw(::grpc::ClientContext* context, ::DistributedFileSystem::BlockInfo* response) {
  return ::grpc::internal::ClientWriterFactory< ::DistributedFileSystem::BlockUnit>::Create(channel_.get(), rpcmethod_putBlock_, context, response);
}

::grpc::ClientAsyncWriter< ::DistributedFileSystem::BlockUnit>* DataService::Stub::AsyncputBlockRaw(::grpc::ClientContext* context, ::DistributedFileSystem::BlockInfo* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::DistributedFileSystem::BlockUnit>::Create(channel_.get(), cq, rpcmethod_putBlock_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::DistributedFileSystem::BlockUnit>* DataService::Stub::PrepareAsyncputBlockRaw(::grpc::ClientContext* context, ::DistributedFileSystem::BlockInfo* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::DistributedFileSystem::BlockUnit>::Create(channel_.get(), cq, rpcmethod_putBlock_, context, response, false, nullptr);
}

::grpc::Status DataService::Stub::rmBlock(::grpc::ClientContext* context, const ::DistributedFileSystem::BlockInfo& request, ::DistributedFileSystem::BlockInfo* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_rmBlock_, context, request, response);
}

void DataService::Stub::experimental_async::rmBlock(::grpc::ClientContext* context, const ::DistributedFileSystem::BlockInfo* request, ::DistributedFileSystem::BlockInfo* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_rmBlock_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::DistributedFileSystem::BlockInfo>* DataService::Stub::AsyncrmBlockRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::BlockInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::DistributedFileSystem::BlockInfo>::Create(channel_.get(), cq, rpcmethod_rmBlock_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::DistributedFileSystem::BlockInfo>* DataService::Stub::PrepareAsyncrmBlockRaw(::grpc::ClientContext* context, const ::DistributedFileSystem::BlockInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::DistributedFileSystem::BlockInfo>::Create(channel_.get(), cq, rpcmethod_rmBlock_, context, request, false);
}

DataService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DataService_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< DataService::Service, ::DistributedFileSystem::BlockInfo, ::DistributedFileSystem::BlockUnit>(
          std::mem_fn(&DataService::Service::getBlock), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DataService_method_names[1],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< DataService::Service, ::DistributedFileSystem::BlockUnit, ::DistributedFileSystem::BlockInfo>(
          std::mem_fn(&DataService::Service::putBlock), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DataService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DataService::Service, ::DistributedFileSystem::BlockInfo, ::DistributedFileSystem::BlockInfo>(
          std::mem_fn(&DataService::Service::rmBlock), this)));
}

DataService::Service::~Service() {
}

::grpc::Status DataService::Service::getBlock(::grpc::ServerContext* context, const ::DistributedFileSystem::BlockInfo* request, ::grpc::ServerWriter< ::DistributedFileSystem::BlockUnit>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DataService::Service::putBlock(::grpc::ServerContext* context, ::grpc::ServerReader< ::DistributedFileSystem::BlockUnit>* reader, ::DistributedFileSystem::BlockInfo* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DataService::Service::rmBlock(::grpc::ServerContext* context, const ::DistributedFileSystem::BlockInfo* request, ::DistributedFileSystem::BlockInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace DistributedFileSystem
