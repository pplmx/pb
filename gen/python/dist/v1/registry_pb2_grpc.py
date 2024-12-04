# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

from dist.v1 import registry_pb2 as dist_dot_v1_dot_registry__pb2


class RegistryServiceStub(object):
    """注册中心服务
    """

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.Register = channel.unary_unary(
                '/dist.v1.RegistryService/Register',
                request_serializer=dist_dot_v1_dot_registry__pb2.RegisterRequest.SerializeToString,
                response_deserializer=dist_dot_v1_dot_registry__pb2.RegisterResponse.FromString,
                _registered_method=True)
        self.Heartbeat = channel.unary_unary(
                '/dist.v1.RegistryService/Heartbeat',
                request_serializer=dist_dot_v1_dot_registry__pb2.HeartbeatRequest.SerializeToString,
                response_deserializer=dist_dot_v1_dot_registry__pb2.HeartbeatResponse.FromString,
                _registered_method=True)
        self.WatchRegistry = channel.unary_stream(
                '/dist.v1.RegistryService/WatchRegistry',
                request_serializer=dist_dot_v1_dot_registry__pb2.WatchRegistryRequest.SerializeToString,
                response_deserializer=dist_dot_v1_dot_registry__pb2.WatchRegistryResponse.FromString,
                _registered_method=True)


class RegistryServiceServicer(object):
    """注册中心服务
    """

    def Register(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def Heartbeat(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def WatchRegistry(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_RegistryServiceServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'Register': grpc.unary_unary_rpc_method_handler(
                    servicer.Register,
                    request_deserializer=dist_dot_v1_dot_registry__pb2.RegisterRequest.FromString,
                    response_serializer=dist_dot_v1_dot_registry__pb2.RegisterResponse.SerializeToString,
            ),
            'Heartbeat': grpc.unary_unary_rpc_method_handler(
                    servicer.Heartbeat,
                    request_deserializer=dist_dot_v1_dot_registry__pb2.HeartbeatRequest.FromString,
                    response_serializer=dist_dot_v1_dot_registry__pb2.HeartbeatResponse.SerializeToString,
            ),
            'WatchRegistry': grpc.unary_stream_rpc_method_handler(
                    servicer.WatchRegistry,
                    request_deserializer=dist_dot_v1_dot_registry__pb2.WatchRegistryRequest.FromString,
                    response_serializer=dist_dot_v1_dot_registry__pb2.WatchRegistryResponse.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'dist.v1.RegistryService', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))
    server.add_registered_method_handlers('dist.v1.RegistryService', rpc_method_handlers)


 # This class is part of an EXPERIMENTAL API.
class RegistryService(object):
    """注册中心服务
    """

    @staticmethod
    def Register(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(
            request,
            target,
            '/dist.v1.RegistryService/Register',
            dist_dot_v1_dot_registry__pb2.RegisterRequest.SerializeToString,
            dist_dot_v1_dot_registry__pb2.RegisterResponse.FromString,
            options,
            channel_credentials,
            insecure,
            call_credentials,
            compression,
            wait_for_ready,
            timeout,
            metadata,
            _registered_method=True)

    @staticmethod
    def Heartbeat(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(
            request,
            target,
            '/dist.v1.RegistryService/Heartbeat',
            dist_dot_v1_dot_registry__pb2.HeartbeatRequest.SerializeToString,
            dist_dot_v1_dot_registry__pb2.HeartbeatResponse.FromString,
            options,
            channel_credentials,
            insecure,
            call_credentials,
            compression,
            wait_for_ready,
            timeout,
            metadata,
            _registered_method=True)

    @staticmethod
    def WatchRegistry(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_stream(
            request,
            target,
            '/dist.v1.RegistryService/WatchRegistry',
            dist_dot_v1_dot_registry__pb2.WatchRegistryRequest.SerializeToString,
            dist_dot_v1_dot_registry__pb2.WatchRegistryResponse.FromString,
            options,
            channel_credentials,
            insecure,
            call_credentials,
            compression,
            wait_for_ready,
            timeout,
            metadata,
            _registered_method=True)
