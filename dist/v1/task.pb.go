// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.35.2
// 	protoc        (unknown)
// source: dist/v1/task.proto

package distv1

import (
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

// Request and response message definitions
type SubmitTaskRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Task            *Task  `protobuf:"bytes,1,opt,name=task,proto3" json:"task,omitempty"`
	RequesterNodeId string `protobuf:"bytes,2,opt,name=requester_node_id,json=requesterNodeId,proto3" json:"requester_node_id,omitempty"`
}

func (x *SubmitTaskRequest) Reset() {
	*x = SubmitTaskRequest{}
	mi := &file_dist_v1_task_proto_msgTypes[0]
	ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
	ms.StoreMessageInfo(mi)
}

func (x *SubmitTaskRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*SubmitTaskRequest) ProtoMessage() {}

func (x *SubmitTaskRequest) ProtoReflect() protoreflect.Message {
	mi := &file_dist_v1_task_proto_msgTypes[0]
	if x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use SubmitTaskRequest.ProtoReflect.Descriptor instead.
func (*SubmitTaskRequest) Descriptor() ([]byte, []int) {
	return file_dist_v1_task_proto_rawDescGZIP(), []int{0}
}

func (x *SubmitTaskRequest) GetTask() *Task {
	if x != nil {
		return x.Task
	}
	return nil
}

func (x *SubmitTaskRequest) GetRequesterNodeId() string {
	if x != nil {
		return x.RequesterNodeId
	}
	return ""
}

type SubmitTaskResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Accepted     bool   `protobuf:"varint,1,opt,name=accepted,proto3" json:"accepted,omitempty"`
	TaskId       string `protobuf:"bytes,2,opt,name=task_id,json=taskId,proto3" json:"task_id,omitempty"`
	ErrorMessage string `protobuf:"bytes,3,opt,name=error_message,json=errorMessage,proto3" json:"error_message,omitempty"`
}

func (x *SubmitTaskResponse) Reset() {
	*x = SubmitTaskResponse{}
	mi := &file_dist_v1_task_proto_msgTypes[1]
	ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
	ms.StoreMessageInfo(mi)
}

func (x *SubmitTaskResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*SubmitTaskResponse) ProtoMessage() {}

func (x *SubmitTaskResponse) ProtoReflect() protoreflect.Message {
	mi := &file_dist_v1_task_proto_msgTypes[1]
	if x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use SubmitTaskResponse.ProtoReflect.Descriptor instead.
func (*SubmitTaskResponse) Descriptor() ([]byte, []int) {
	return file_dist_v1_task_proto_rawDescGZIP(), []int{1}
}

func (x *SubmitTaskResponse) GetAccepted() bool {
	if x != nil {
		return x.Accepted
	}
	return false
}

func (x *SubmitTaskResponse) GetTaskId() string {
	if x != nil {
		return x.TaskId
	}
	return ""
}

func (x *SubmitTaskResponse) GetErrorMessage() string {
	if x != nil {
		return x.ErrorMessage
	}
	return ""
}

type WatchTasksRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	NodeId  string   `protobuf:"bytes,1,opt,name=node_id,json=nodeId,proto3" json:"node_id,omitempty"`
	TaskIds []string `protobuf:"bytes,2,rep,name=task_ids,json=taskIds,proto3" json:"task_ids,omitempty"`
}

func (x *WatchTasksRequest) Reset() {
	*x = WatchTasksRequest{}
	mi := &file_dist_v1_task_proto_msgTypes[2]
	ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
	ms.StoreMessageInfo(mi)
}

func (x *WatchTasksRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*WatchTasksRequest) ProtoMessage() {}

func (x *WatchTasksRequest) ProtoReflect() protoreflect.Message {
	mi := &file_dist_v1_task_proto_msgTypes[2]
	if x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use WatchTasksRequest.ProtoReflect.Descriptor instead.
func (*WatchTasksRequest) Descriptor() ([]byte, []int) {
	return file_dist_v1_task_proto_rawDescGZIP(), []int{2}
}

func (x *WatchTasksRequest) GetNodeId() string {
	if x != nil {
		return x.NodeId
	}
	return ""
}

func (x *WatchTasksRequest) GetTaskIds() []string {
	if x != nil {
		return x.TaskIds
	}
	return nil
}

type WatchTasksResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Types that are assignable to Event:
	//
	//	*WatchTasksResponse_TaskStatusChange
	//	*WatchTasksResponse_TaskAssignment
	Event isWatchTasksResponse_Event `protobuf_oneof:"event"`
}

func (x *WatchTasksResponse) Reset() {
	*x = WatchTasksResponse{}
	mi := &file_dist_v1_task_proto_msgTypes[3]
	ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
	ms.StoreMessageInfo(mi)
}

func (x *WatchTasksResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*WatchTasksResponse) ProtoMessage() {}

func (x *WatchTasksResponse) ProtoReflect() protoreflect.Message {
	mi := &file_dist_v1_task_proto_msgTypes[3]
	if x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use WatchTasksResponse.ProtoReflect.Descriptor instead.
func (*WatchTasksResponse) Descriptor() ([]byte, []int) {
	return file_dist_v1_task_proto_rawDescGZIP(), []int{3}
}

func (m *WatchTasksResponse) GetEvent() isWatchTasksResponse_Event {
	if m != nil {
		return m.Event
	}
	return nil
}

func (x *WatchTasksResponse) GetTaskStatusChange() *TaskStatusChangeEvent {
	if x, ok := x.GetEvent().(*WatchTasksResponse_TaskStatusChange); ok {
		return x.TaskStatusChange
	}
	return nil
}

func (x *WatchTasksResponse) GetTaskAssignment() *TaskAssignmentEvent {
	if x, ok := x.GetEvent().(*WatchTasksResponse_TaskAssignment); ok {
		return x.TaskAssignment
	}
	return nil
}

type isWatchTasksResponse_Event interface {
	isWatchTasksResponse_Event()
}

type WatchTasksResponse_TaskStatusChange struct {
	TaskStatusChange *TaskStatusChangeEvent `protobuf:"bytes,1,opt,name=task_status_change,json=taskStatusChange,proto3,oneof"`
}

type WatchTasksResponse_TaskAssignment struct {
	TaskAssignment *TaskAssignmentEvent `protobuf:"bytes,2,opt,name=task_assignment,json=taskAssignment,proto3,oneof"`
}

func (*WatchTasksResponse_TaskStatusChange) isWatchTasksResponse_Event() {}

func (*WatchTasksResponse_TaskAssignment) isWatchTasksResponse_Event() {}

type CancelTaskRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	TaskId          string `protobuf:"bytes,1,opt,name=task_id,json=taskId,proto3" json:"task_id,omitempty"`
	RequesterNodeId string `protobuf:"bytes,2,opt,name=requester_node_id,json=requesterNodeId,proto3" json:"requester_node_id,omitempty"`
}

func (x *CancelTaskRequest) Reset() {
	*x = CancelTaskRequest{}
	mi := &file_dist_v1_task_proto_msgTypes[4]
	ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
	ms.StoreMessageInfo(mi)
}

func (x *CancelTaskRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*CancelTaskRequest) ProtoMessage() {}

func (x *CancelTaskRequest) ProtoReflect() protoreflect.Message {
	mi := &file_dist_v1_task_proto_msgTypes[4]
	if x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use CancelTaskRequest.ProtoReflect.Descriptor instead.
func (*CancelTaskRequest) Descriptor() ([]byte, []int) {
	return file_dist_v1_task_proto_rawDescGZIP(), []int{4}
}

func (x *CancelTaskRequest) GetTaskId() string {
	if x != nil {
		return x.TaskId
	}
	return ""
}

func (x *CancelTaskRequest) GetRequesterNodeId() string {
	if x != nil {
		return x.RequesterNodeId
	}
	return ""
}

type CancelTaskResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Success      bool   `protobuf:"varint,1,opt,name=success,proto3" json:"success,omitempty"`
	ErrorMessage string `protobuf:"bytes,2,opt,name=error_message,json=errorMessage,proto3" json:"error_message,omitempty"`
}

func (x *CancelTaskResponse) Reset() {
	*x = CancelTaskResponse{}
	mi := &file_dist_v1_task_proto_msgTypes[5]
	ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
	ms.StoreMessageInfo(mi)
}

func (x *CancelTaskResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*CancelTaskResponse) ProtoMessage() {}

func (x *CancelTaskResponse) ProtoReflect() protoreflect.Message {
	mi := &file_dist_v1_task_proto_msgTypes[5]
	if x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use CancelTaskResponse.ProtoReflect.Descriptor instead.
func (*CancelTaskResponse) Descriptor() ([]byte, []int) {
	return file_dist_v1_task_proto_rawDescGZIP(), []int{5}
}

func (x *CancelTaskResponse) GetSuccess() bool {
	if x != nil {
		return x.Success
	}
	return false
}

func (x *CancelTaskResponse) GetErrorMessage() string {
	if x != nil {
		return x.ErrorMessage
	}
	return ""
}

var File_dist_v1_task_proto protoreflect.FileDescriptor

var file_dist_v1_task_proto_rawDesc = []byte{
	0x0a, 0x12, 0x64, 0x69, 0x73, 0x74, 0x2f, 0x76, 0x31, 0x2f, 0x74, 0x61, 0x73, 0x6b, 0x2e, 0x70,
	0x72, 0x6f, 0x74, 0x6f, 0x12, 0x07, 0x64, 0x69, 0x73, 0x74, 0x2e, 0x76, 0x31, 0x1a, 0x14, 0x64,
	0x69, 0x73, 0x74, 0x2f, 0x76, 0x31, 0x2f, 0x63, 0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0x2e, 0x70, 0x72,
	0x6f, 0x74, 0x6f, 0x22, 0x62, 0x0a, 0x11, 0x53, 0x75, 0x62, 0x6d, 0x69, 0x74, 0x54, 0x61, 0x73,
	0x6b, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x12, 0x21, 0x0a, 0x04, 0x74, 0x61, 0x73, 0x6b,
	0x18, 0x01, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x0d, 0x2e, 0x64, 0x69, 0x73, 0x74, 0x2e, 0x76, 0x31,
	0x2e, 0x54, 0x61, 0x73, 0x6b, 0x52, 0x04, 0x74, 0x61, 0x73, 0x6b, 0x12, 0x2a, 0x0a, 0x11, 0x72,
	0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x65, 0x72, 0x5f, 0x6e, 0x6f, 0x64, 0x65, 0x5f, 0x69, 0x64,
	0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x0f, 0x72, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x65,
	0x72, 0x4e, 0x6f, 0x64, 0x65, 0x49, 0x64, 0x22, 0x6e, 0x0a, 0x12, 0x53, 0x75, 0x62, 0x6d, 0x69,
	0x74, 0x54, 0x61, 0x73, 0x6b, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x12, 0x1a, 0x0a,
	0x08, 0x61, 0x63, 0x63, 0x65, 0x70, 0x74, 0x65, 0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x08, 0x52,
	0x08, 0x61, 0x63, 0x63, 0x65, 0x70, 0x74, 0x65, 0x64, 0x12, 0x17, 0x0a, 0x07, 0x74, 0x61, 0x73,
	0x6b, 0x5f, 0x69, 0x64, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x06, 0x74, 0x61, 0x73, 0x6b,
	0x49, 0x64, 0x12, 0x23, 0x0a, 0x0d, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x5f, 0x6d, 0x65, 0x73, 0x73,
	0x61, 0x67, 0x65, 0x18, 0x03, 0x20, 0x01, 0x28, 0x09, 0x52, 0x0c, 0x65, 0x72, 0x72, 0x6f, 0x72,
	0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x22, 0x47, 0x0a, 0x11, 0x57, 0x61, 0x74, 0x63, 0x68,
	0x54, 0x61, 0x73, 0x6b, 0x73, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x12, 0x17, 0x0a, 0x07,
	0x6e, 0x6f, 0x64, 0x65, 0x5f, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x06, 0x6e,
	0x6f, 0x64, 0x65, 0x49, 0x64, 0x12, 0x19, 0x0a, 0x08, 0x74, 0x61, 0x73, 0x6b, 0x5f, 0x69, 0x64,
	0x73, 0x18, 0x02, 0x20, 0x03, 0x28, 0x09, 0x52, 0x07, 0x74, 0x61, 0x73, 0x6b, 0x49, 0x64, 0x73,
	0x22, 0xb6, 0x01, 0x0a, 0x12, 0x57, 0x61, 0x74, 0x63, 0x68, 0x54, 0x61, 0x73, 0x6b, 0x73, 0x52,
	0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x12, 0x4e, 0x0a, 0x12, 0x74, 0x61, 0x73, 0x6b, 0x5f,
	0x73, 0x74, 0x61, 0x74, 0x75, 0x73, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x18, 0x01, 0x20,
	0x01, 0x28, 0x0b, 0x32, 0x1e, 0x2e, 0x64, 0x69, 0x73, 0x74, 0x2e, 0x76, 0x31, 0x2e, 0x54, 0x61,
	0x73, 0x6b, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x43, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x45, 0x76,
	0x65, 0x6e, 0x74, 0x48, 0x00, 0x52, 0x10, 0x74, 0x61, 0x73, 0x6b, 0x53, 0x74, 0x61, 0x74, 0x75,
	0x73, 0x43, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x12, 0x47, 0x0a, 0x0f, 0x74, 0x61, 0x73, 0x6b, 0x5f,
	0x61, 0x73, 0x73, 0x69, 0x67, 0x6e, 0x6d, 0x65, 0x6e, 0x74, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0b,
	0x32, 0x1c, 0x2e, 0x64, 0x69, 0x73, 0x74, 0x2e, 0x76, 0x31, 0x2e, 0x54, 0x61, 0x73, 0x6b, 0x41,
	0x73, 0x73, 0x69, 0x67, 0x6e, 0x6d, 0x65, 0x6e, 0x74, 0x45, 0x76, 0x65, 0x6e, 0x74, 0x48, 0x00,
	0x52, 0x0e, 0x74, 0x61, 0x73, 0x6b, 0x41, 0x73, 0x73, 0x69, 0x67, 0x6e, 0x6d, 0x65, 0x6e, 0x74,
	0x42, 0x07, 0x0a, 0x05, 0x65, 0x76, 0x65, 0x6e, 0x74, 0x22, 0x58, 0x0a, 0x11, 0x43, 0x61, 0x6e,
	0x63, 0x65, 0x6c, 0x54, 0x61, 0x73, 0x6b, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x12, 0x17,
	0x0a, 0x07, 0x74, 0x61, 0x73, 0x6b, 0x5f, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52,
	0x06, 0x74, 0x61, 0x73, 0x6b, 0x49, 0x64, 0x12, 0x2a, 0x0a, 0x11, 0x72, 0x65, 0x71, 0x75, 0x65,
	0x73, 0x74, 0x65, 0x72, 0x5f, 0x6e, 0x6f, 0x64, 0x65, 0x5f, 0x69, 0x64, 0x18, 0x02, 0x20, 0x01,
	0x28, 0x09, 0x52, 0x0f, 0x72, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x65, 0x72, 0x4e, 0x6f, 0x64,
	0x65, 0x49, 0x64, 0x22, 0x53, 0x0a, 0x12, 0x43, 0x61, 0x6e, 0x63, 0x65, 0x6c, 0x54, 0x61, 0x73,
	0x6b, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x12, 0x18, 0x0a, 0x07, 0x73, 0x75, 0x63,
	0x63, 0x65, 0x73, 0x73, 0x18, 0x01, 0x20, 0x01, 0x28, 0x08, 0x52, 0x07, 0x73, 0x75, 0x63, 0x63,
	0x65, 0x73, 0x73, 0x12, 0x23, 0x0a, 0x0d, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x5f, 0x6d, 0x65, 0x73,
	0x73, 0x61, 0x67, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x0c, 0x65, 0x72, 0x72, 0x6f,
	0x72, 0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x32, 0xf5, 0x01, 0x0a, 0x16, 0x44, 0x69, 0x73,
	0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x64, 0x54, 0x61, 0x73, 0x6b, 0x53, 0x65, 0x72, 0x76,
	0x69, 0x63, 0x65, 0x12, 0x47, 0x0a, 0x0a, 0x53, 0x75, 0x62, 0x6d, 0x69, 0x74, 0x54, 0x61, 0x73,
	0x6b, 0x12, 0x1a, 0x2e, 0x64, 0x69, 0x73, 0x74, 0x2e, 0x76, 0x31, 0x2e, 0x53, 0x75, 0x62, 0x6d,
	0x69, 0x74, 0x54, 0x61, 0x73, 0x6b, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a, 0x1b, 0x2e,
	0x64, 0x69, 0x73, 0x74, 0x2e, 0x76, 0x31, 0x2e, 0x53, 0x75, 0x62, 0x6d, 0x69, 0x74, 0x54, 0x61,
	0x73, 0x6b, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x22, 0x00, 0x12, 0x49, 0x0a, 0x0a,
	0x57, 0x61, 0x74, 0x63, 0x68, 0x54, 0x61, 0x73, 0x6b, 0x73, 0x12, 0x1a, 0x2e, 0x64, 0x69, 0x73,
	0x74, 0x2e, 0x76, 0x31, 0x2e, 0x57, 0x61, 0x74, 0x63, 0x68, 0x54, 0x61, 0x73, 0x6b, 0x73, 0x52,
	0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a, 0x1b, 0x2e, 0x64, 0x69, 0x73, 0x74, 0x2e, 0x76, 0x31,
	0x2e, 0x57, 0x61, 0x74, 0x63, 0x68, 0x54, 0x61, 0x73, 0x6b, 0x73, 0x52, 0x65, 0x73, 0x70, 0x6f,
	0x6e, 0x73, 0x65, 0x22, 0x00, 0x30, 0x01, 0x12, 0x47, 0x0a, 0x0a, 0x43, 0x61, 0x6e, 0x63, 0x65,
	0x6c, 0x54, 0x61, 0x73, 0x6b, 0x12, 0x1a, 0x2e, 0x64, 0x69, 0x73, 0x74, 0x2e, 0x76, 0x31, 0x2e,
	0x43, 0x61, 0x6e, 0x63, 0x65, 0x6c, 0x54, 0x61, 0x73, 0x6b, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73,
	0x74, 0x1a, 0x1b, 0x2e, 0x64, 0x69, 0x73, 0x74, 0x2e, 0x76, 0x31, 0x2e, 0x43, 0x61, 0x6e, 0x63,
	0x65, 0x6c, 0x54, 0x61, 0x73, 0x6b, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x22, 0x00,
	0x42, 0x79, 0x0a, 0x0b, 0x63, 0x6f, 0x6d, 0x2e, 0x64, 0x69, 0x73, 0x74, 0x2e, 0x76, 0x31, 0x42,
	0x09, 0x54, 0x61, 0x73, 0x6b, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x50, 0x01, 0x5a, 0x22, 0x67, 0x69,
	0x74, 0x68, 0x75, 0x62, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x70, 0x70, 0x6c, 0x6d, 0x78, 0x2f, 0x70,
	0x62, 0x2f, 0x64, 0x69, 0x73, 0x74, 0x2f, 0x76, 0x31, 0x3b, 0x64, 0x69, 0x73, 0x74, 0x76, 0x31,
	0xa2, 0x02, 0x03, 0x44, 0x58, 0x58, 0xaa, 0x02, 0x07, 0x44, 0x69, 0x73, 0x74, 0x2e, 0x56, 0x31,
	0xca, 0x02, 0x07, 0x44, 0x69, 0x73, 0x74, 0x5c, 0x56, 0x31, 0xe2, 0x02, 0x13, 0x44, 0x69, 0x73,
	0x74, 0x5c, 0x56, 0x31, 0x5c, 0x47, 0x50, 0x42, 0x4d, 0x65, 0x74, 0x61, 0x64, 0x61, 0x74, 0x61,
	0xea, 0x02, 0x08, 0x44, 0x69, 0x73, 0x74, 0x3a, 0x3a, 0x56, 0x31, 0x62, 0x06, 0x70, 0x72, 0x6f,
	0x74, 0x6f, 0x33,
}

var (
	file_dist_v1_task_proto_rawDescOnce sync.Once
	file_dist_v1_task_proto_rawDescData = file_dist_v1_task_proto_rawDesc
)

func file_dist_v1_task_proto_rawDescGZIP() []byte {
	file_dist_v1_task_proto_rawDescOnce.Do(func() {
		file_dist_v1_task_proto_rawDescData = protoimpl.X.CompressGZIP(file_dist_v1_task_proto_rawDescData)
	})
	return file_dist_v1_task_proto_rawDescData
}

var file_dist_v1_task_proto_msgTypes = make([]protoimpl.MessageInfo, 6)
var file_dist_v1_task_proto_goTypes = []any{
	(*SubmitTaskRequest)(nil),     // 0: dist.v1.SubmitTaskRequest
	(*SubmitTaskResponse)(nil),    // 1: dist.v1.SubmitTaskResponse
	(*WatchTasksRequest)(nil),     // 2: dist.v1.WatchTasksRequest
	(*WatchTasksResponse)(nil),    // 3: dist.v1.WatchTasksResponse
	(*CancelTaskRequest)(nil),     // 4: dist.v1.CancelTaskRequest
	(*CancelTaskResponse)(nil),    // 5: dist.v1.CancelTaskResponse
	(*Task)(nil),                  // 6: dist.v1.Task
	(*TaskStatusChangeEvent)(nil), // 7: dist.v1.TaskStatusChangeEvent
	(*TaskAssignmentEvent)(nil),   // 8: dist.v1.TaskAssignmentEvent
}
var file_dist_v1_task_proto_depIdxs = []int32{
	6, // 0: dist.v1.SubmitTaskRequest.task:type_name -> dist.v1.Task
	7, // 1: dist.v1.WatchTasksResponse.task_status_change:type_name -> dist.v1.TaskStatusChangeEvent
	8, // 2: dist.v1.WatchTasksResponse.task_assignment:type_name -> dist.v1.TaskAssignmentEvent
	0, // 3: dist.v1.DistributedTaskService.SubmitTask:input_type -> dist.v1.SubmitTaskRequest
	2, // 4: dist.v1.DistributedTaskService.WatchTasks:input_type -> dist.v1.WatchTasksRequest
	4, // 5: dist.v1.DistributedTaskService.CancelTask:input_type -> dist.v1.CancelTaskRequest
	1, // 6: dist.v1.DistributedTaskService.SubmitTask:output_type -> dist.v1.SubmitTaskResponse
	3, // 7: dist.v1.DistributedTaskService.WatchTasks:output_type -> dist.v1.WatchTasksResponse
	5, // 8: dist.v1.DistributedTaskService.CancelTask:output_type -> dist.v1.CancelTaskResponse
	6, // [6:9] is the sub-list for method output_type
	3, // [3:6] is the sub-list for method input_type
	3, // [3:3] is the sub-list for extension type_name
	3, // [3:3] is the sub-list for extension extendee
	0, // [0:3] is the sub-list for field type_name
}

func init() { file_dist_v1_task_proto_init() }
func file_dist_v1_task_proto_init() {
	if File_dist_v1_task_proto != nil {
		return
	}
	file_dist_v1_common_proto_init()
	file_dist_v1_task_proto_msgTypes[3].OneofWrappers = []any{
		(*WatchTasksResponse_TaskStatusChange)(nil),
		(*WatchTasksResponse_TaskAssignment)(nil),
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_dist_v1_task_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   6,
			NumExtensions: 0,
			NumServices:   1,
		},
		GoTypes:           file_dist_v1_task_proto_goTypes,
		DependencyIndexes: file_dist_v1_task_proto_depIdxs,
		MessageInfos:      file_dist_v1_task_proto_msgTypes,
	}.Build()
	File_dist_v1_task_proto = out.File
	file_dist_v1_task_proto_rawDesc = nil
	file_dist_v1_task_proto_goTypes = nil
	file_dist_v1_task_proto_depIdxs = nil
}
