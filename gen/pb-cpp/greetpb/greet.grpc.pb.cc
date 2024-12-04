// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: greetpb/greet.proto

#include "greetpb/greet.pb.h"
#include "greetpb/greet.grpc.pb.h"

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
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace greet {

static const char* GreetService_method_names[] = {
  "/greet.GreetService/Greet",
};

std::unique_ptr< GreetService::Stub> GreetService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< GreetService::Stub> stub(new GreetService::Stub(channel, options));
  return stub;
}

GreetService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Greet_(GreetService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status GreetService::Stub::Greet(::grpc::ClientContext* context, const ::greet::GreetRequest& request, ::greet::GreetResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::greet::GreetRequest, ::greet::GreetResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Greet_, context, request, response);
}

void GreetService::Stub::async::Greet(::grpc::ClientContext* context, const ::greet::GreetRequest* request, ::greet::GreetResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::greet::GreetRequest, ::greet::GreetResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Greet_, context, request, response, std::move(f));
}

void GreetService::Stub::async::Greet(::grpc::ClientContext* context, const ::greet::GreetRequest* request, ::greet::GreetResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Greet_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::greet::GreetResponse>* GreetService::Stub::PrepareAsyncGreetRaw(::grpc::ClientContext* context, const ::greet::GreetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::greet::GreetResponse, ::greet::GreetRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Greet_, context, request);
}

::grpc::ClientAsyncResponseReader< ::greet::GreetResponse>* GreetService::Stub::AsyncGreetRaw(::grpc::ClientContext* context, const ::greet::GreetRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGreetRaw(context, request, cq);
  result->StartCall();
  return result;
}

GreetService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GreetService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GreetService::Service, ::greet::GreetRequest, ::greet::GreetResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GreetService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::greet::GreetRequest* req,
             ::greet::GreetResponse* resp) {
               return service->Greet(ctx, req, resp);
             }, this)));
}

GreetService::Service::~Service() {
}

::grpc::Status GreetService::Service::Greet(::grpc::ServerContext* context, const ::greet::GreetRequest* request, ::greet::GreetResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace greet

