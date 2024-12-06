# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

from dist.v1 import task_pb2 as dist_dot_v1_dot_task__pb2


class DistributedTaskServiceStub(object):
    """Distributed Task Service for task scheduling and monitoring
    """

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.SubmitTask = channel.unary_unary(
                '/dist.v1.DistributedTaskService/SubmitTask',
                request_serializer=dist_dot_v1_dot_task__pb2.SubmitTaskRequest.SerializeToString,
                response_deserializer=dist_dot_v1_dot_task__pb2.SubmitTaskResponse.FromString,
                _registered_method=True)
        self.WatchTasks = channel.unary_stream(
                '/dist.v1.DistributedTaskService/WatchTasks',
                request_serializer=dist_dot_v1_dot_task__pb2.WatchTasksRequest.SerializeToString,
                response_deserializer=dist_dot_v1_dot_task__pb2.WatchTasksResponse.FromString,
                _registered_method=True)
        self.CancelTask = channel.unary_unary(
                '/dist.v1.DistributedTaskService/CancelTask',
                request_serializer=dist_dot_v1_dot_task__pb2.CancelTaskRequest.SerializeToString,
                response_deserializer=dist_dot_v1_dot_task__pb2.CancelTaskResponse.FromString,
                _registered_method=True)


class DistributedTaskServiceServicer(object):
    """Distributed Task Service for task scheduling and monitoring
    """

    def SubmitTask(self, request, context):
        """Submit a new task for distributed processing
        """
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def WatchTasks(self, request, context):
        """Watch task status and events
        """
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def CancelTask(self, request, context):
        """Cancel a running task
        """
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_DistributedTaskServiceServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'SubmitTask': grpc.unary_unary_rpc_method_handler(
                    servicer.SubmitTask,
                    request_deserializer=dist_dot_v1_dot_task__pb2.SubmitTaskRequest.FromString,
                    response_serializer=dist_dot_v1_dot_task__pb2.SubmitTaskResponse.SerializeToString,
            ),
            'WatchTasks': grpc.unary_stream_rpc_method_handler(
                    servicer.WatchTasks,
                    request_deserializer=dist_dot_v1_dot_task__pb2.WatchTasksRequest.FromString,
                    response_serializer=dist_dot_v1_dot_task__pb2.WatchTasksResponse.SerializeToString,
            ),
            'CancelTask': grpc.unary_unary_rpc_method_handler(
                    servicer.CancelTask,
                    request_deserializer=dist_dot_v1_dot_task__pb2.CancelTaskRequest.FromString,
                    response_serializer=dist_dot_v1_dot_task__pb2.CancelTaskResponse.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'dist.v1.DistributedTaskService', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))
    server.add_registered_method_handlers('dist.v1.DistributedTaskService', rpc_method_handlers)


 # This class is part of an EXPERIMENTAL API.
class DistributedTaskService(object):
    """Distributed Task Service for task scheduling and monitoring
    """

    @staticmethod
    def SubmitTask(request,
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
            '/dist.v1.DistributedTaskService/SubmitTask',
            dist_dot_v1_dot_task__pb2.SubmitTaskRequest.SerializeToString,
            dist_dot_v1_dot_task__pb2.SubmitTaskResponse.FromString,
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
    def WatchTasks(request,
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
            '/dist.v1.DistributedTaskService/WatchTasks',
            dist_dot_v1_dot_task__pb2.WatchTasksRequest.SerializeToString,
            dist_dot_v1_dot_task__pb2.WatchTasksResponse.FromString,
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
    def CancelTask(request,
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
            '/dist.v1.DistributedTaskService/CancelTask',
            dist_dot_v1_dot_task__pb2.CancelTaskRequest.SerializeToString,
            dist_dot_v1_dot_task__pb2.CancelTaskResponse.FromString,
            options,
            channel_credentials,
            insecure,
            call_credentials,
            compression,
            wait_for_ready,
            timeout,
            metadata,
            _registered_method=True)