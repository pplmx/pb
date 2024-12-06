// Code generated by protoc-gen-go-grpc. DO NOT EDIT.
// versions:
// - protoc-gen-go-grpc v1.5.1
// - protoc             (unknown)
// source: dist/v1/registry.proto

package distv1

import (
	context "context"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
)

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
// Requires gRPC-Go v1.64.0 or later.
const _ = grpc.SupportPackageIsVersion9

const (
	RegistryService_Register_FullMethodName      = "/dist.v1.RegistryService/Register"
	RegistryService_Heartbeat_FullMethodName     = "/dist.v1.RegistryService/Heartbeat"
	RegistryService_WatchRegistry_FullMethodName = "/dist.v1.RegistryService/WatchRegistry"
)

// RegistryServiceClient is the client API for RegistryService service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://pkg.go.dev/google.golang.org/grpc/?tab=doc#ClientConn.NewStream.
//
// Registry Service for node management
type RegistryServiceClient interface {
	// Register a new computational node
	Register(ctx context.Context, in *RegisterRequest, opts ...grpc.CallOption) (*RegisterResponse, error)
	// Send periodic heartbeat to maintain node presence
	Heartbeat(ctx context.Context, in *HeartbeatRequest, opts ...grpc.CallOption) (*HeartbeatResponse, error)
	// Watch for changes in the registry
	WatchRegistry(ctx context.Context, in *WatchRegistryRequest, opts ...grpc.CallOption) (grpc.ServerStreamingClient[WatchRegistryResponse], error)
}

type registryServiceClient struct {
	cc grpc.ClientConnInterface
}

func NewRegistryServiceClient(cc grpc.ClientConnInterface) RegistryServiceClient {
	return &registryServiceClient{cc}
}

func (c *registryServiceClient) Register(ctx context.Context, in *RegisterRequest, opts ...grpc.CallOption) (*RegisterResponse, error) {
	cOpts := append([]grpc.CallOption{grpc.StaticMethod()}, opts...)
	out := new(RegisterResponse)
	err := c.cc.Invoke(ctx, RegistryService_Register_FullMethodName, in, out, cOpts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *registryServiceClient) Heartbeat(ctx context.Context, in *HeartbeatRequest, opts ...grpc.CallOption) (*HeartbeatResponse, error) {
	cOpts := append([]grpc.CallOption{grpc.StaticMethod()}, opts...)
	out := new(HeartbeatResponse)
	err := c.cc.Invoke(ctx, RegistryService_Heartbeat_FullMethodName, in, out, cOpts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *registryServiceClient) WatchRegistry(ctx context.Context, in *WatchRegistryRequest, opts ...grpc.CallOption) (grpc.ServerStreamingClient[WatchRegistryResponse], error) {
	cOpts := append([]grpc.CallOption{grpc.StaticMethod()}, opts...)
	stream, err := c.cc.NewStream(ctx, &RegistryService_ServiceDesc.Streams[0], RegistryService_WatchRegistry_FullMethodName, cOpts...)
	if err != nil {
		return nil, err
	}
	x := &grpc.GenericClientStream[WatchRegistryRequest, WatchRegistryResponse]{ClientStream: stream}
	if err := x.ClientStream.SendMsg(in); err != nil {
		return nil, err
	}
	if err := x.ClientStream.CloseSend(); err != nil {
		return nil, err
	}
	return x, nil
}

// This type alias is provided for backwards compatibility with existing code that references the prior non-generic stream type by name.
type RegistryService_WatchRegistryClient = grpc.ServerStreamingClient[WatchRegistryResponse]

// RegistryServiceServer is the server API for RegistryService service.
// All implementations must embed UnimplementedRegistryServiceServer
// for forward compatibility.
//
// Registry Service for node management
type RegistryServiceServer interface {
	// Register a new computational node
	Register(context.Context, *RegisterRequest) (*RegisterResponse, error)
	// Send periodic heartbeat to maintain node presence
	Heartbeat(context.Context, *HeartbeatRequest) (*HeartbeatResponse, error)
	// Watch for changes in the registry
	WatchRegistry(*WatchRegistryRequest, grpc.ServerStreamingServer[WatchRegistryResponse]) error
	mustEmbedUnimplementedRegistryServiceServer()
}

// UnimplementedRegistryServiceServer must be embedded to have
// forward compatible implementations.
//
// NOTE: this should be embedded by value instead of pointer to avoid a nil
// pointer dereference when methods are called.
type UnimplementedRegistryServiceServer struct{}

func (UnimplementedRegistryServiceServer) Register(context.Context, *RegisterRequest) (*RegisterResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Register not implemented")
}
func (UnimplementedRegistryServiceServer) Heartbeat(context.Context, *HeartbeatRequest) (*HeartbeatResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Heartbeat not implemented")
}
func (UnimplementedRegistryServiceServer) WatchRegistry(*WatchRegistryRequest, grpc.ServerStreamingServer[WatchRegistryResponse]) error {
	return status.Errorf(codes.Unimplemented, "method WatchRegistry not implemented")
}
func (UnimplementedRegistryServiceServer) mustEmbedUnimplementedRegistryServiceServer() {}
func (UnimplementedRegistryServiceServer) testEmbeddedByValue()                         {}

// UnsafeRegistryServiceServer may be embedded to opt out of forward compatibility for this service.
// Use of this interface is not recommended, as added methods to RegistryServiceServer will
// result in compilation errors.
type UnsafeRegistryServiceServer interface {
	mustEmbedUnimplementedRegistryServiceServer()
}

func RegisterRegistryServiceServer(s grpc.ServiceRegistrar, srv RegistryServiceServer) {
	// If the following call pancis, it indicates UnimplementedRegistryServiceServer was
	// embedded by pointer and is nil.  This will cause panics if an
	// unimplemented method is ever invoked, so we test this at initialization
	// time to prevent it from happening at runtime later due to I/O.
	if t, ok := srv.(interface{ testEmbeddedByValue() }); ok {
		t.testEmbeddedByValue()
	}
	s.RegisterService(&RegistryService_ServiceDesc, srv)
}

func _RegistryService_Register_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(RegisterRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(RegistryServiceServer).Register(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: RegistryService_Register_FullMethodName,
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(RegistryServiceServer).Register(ctx, req.(*RegisterRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _RegistryService_Heartbeat_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(HeartbeatRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(RegistryServiceServer).Heartbeat(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: RegistryService_Heartbeat_FullMethodName,
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(RegistryServiceServer).Heartbeat(ctx, req.(*HeartbeatRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _RegistryService_WatchRegistry_Handler(srv interface{}, stream grpc.ServerStream) error {
	m := new(WatchRegistryRequest)
	if err := stream.RecvMsg(m); err != nil {
		return err
	}
	return srv.(RegistryServiceServer).WatchRegistry(m, &grpc.GenericServerStream[WatchRegistryRequest, WatchRegistryResponse]{ServerStream: stream})
}

// This type alias is provided for backwards compatibility with existing code that references the prior non-generic stream type by name.
type RegistryService_WatchRegistryServer = grpc.ServerStreamingServer[WatchRegistryResponse]

// RegistryService_ServiceDesc is the grpc.ServiceDesc for RegistryService service.
// It's only intended for direct use with grpc.RegisterService,
// and not to be introspected or modified (even as a copy)
var RegistryService_ServiceDesc = grpc.ServiceDesc{
	ServiceName: "dist.v1.RegistryService",
	HandlerType: (*RegistryServiceServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "Register",
			Handler:    _RegistryService_Register_Handler,
		},
		{
			MethodName: "Heartbeat",
			Handler:    _RegistryService_Heartbeat_Handler,
		},
	},
	Streams: []grpc.StreamDesc{
		{
			StreamName:    "WatchRegistry",
			Handler:       _RegistryService_WatchRegistry_Handler,
			ServerStreams: true,
		},
	},
	Metadata: "dist/v1/registry.proto",
}
