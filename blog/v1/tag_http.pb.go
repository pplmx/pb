// Code generated by protoc-gen-go-http. DO NOT EDIT.
// versions:
// - protoc-gen-go-http v2.7.3
// - protoc             (unknown)
// source: blog/v1/tag.proto

package blogv1

import (
	context "context"
	http "github.com/go-kratos/kratos/v2/transport/http"
	binding "github.com/go-kratos/kratos/v2/transport/http/binding"
)

// This is a compile-time assertion to ensure that this generated file
// is compatible with the kratos package it is being compiled against.
var _ = new(context.Context)
var _ = binding.EncodeURL

const _ = http.SupportPackageIsVersion1

const OperationTagServiceCreateTag = "/blog.v1.TagService/CreateTag"
const OperationTagServiceDeleteTag = "/blog.v1.TagService/DeleteTag"
const OperationTagServiceGetTag = "/blog.v1.TagService/GetTag"
const OperationTagServiceListTags = "/blog.v1.TagService/ListTags"
const OperationTagServiceUpdateTag = "/blog.v1.TagService/UpdateTag"

type TagServiceHTTPServer interface {
	CreateTag(context.Context, *CreateTagRequest) (*CreateTagResponse, error)
	DeleteTag(context.Context, *DeleteTagRequest) (*DeleteTagResponse, error)
	GetTag(context.Context, *GetTagRequest) (*GetTagResponse, error)
	ListTags(context.Context, *ListTagsRequest) (*ListTagsResponse, error)
	UpdateTag(context.Context, *UpdateTagRequest) (*UpdateTagResponse, error)
}

func RegisterTagServiceHTTPServer(s *http.Server, srv TagServiceHTTPServer) {
	r := s.Route("/")
	r.POST("/v1/tags", _TagService_CreateTag0_HTTP_Handler(srv))
	r.GET("/v1/tags/{id}", _TagService_GetTag0_HTTP_Handler(srv))
	r.GET("/v1/tags", _TagService_ListTags0_HTTP_Handler(srv))
	r.PUT("/v1/tags/{id}", _TagService_UpdateTag0_HTTP_Handler(srv))
	r.DELETE("/v1/tags/{id}", _TagService_DeleteTag0_HTTP_Handler(srv))
}

func _TagService_CreateTag0_HTTP_Handler(srv TagServiceHTTPServer) func(ctx http.Context) error {
	return func(ctx http.Context) error {
		var in CreateTagRequest
		if err := ctx.Bind(&in); err != nil {
			return err
		}
		if err := ctx.BindQuery(&in); err != nil {
			return err
		}
		http.SetOperation(ctx, OperationTagServiceCreateTag)
		h := ctx.Middleware(func(ctx context.Context, req interface{}) (interface{}, error) {
			return srv.CreateTag(ctx, req.(*CreateTagRequest))
		})
		out, err := h(ctx, &in)
		if err != nil {
			return err
		}
		reply := out.(*CreateTagResponse)
		return ctx.Result(200, reply)
	}
}

func _TagService_GetTag0_HTTP_Handler(srv TagServiceHTTPServer) func(ctx http.Context) error {
	return func(ctx http.Context) error {
		var in GetTagRequest
		if err := ctx.BindQuery(&in); err != nil {
			return err
		}
		if err := ctx.BindVars(&in); err != nil {
			return err
		}
		http.SetOperation(ctx, OperationTagServiceGetTag)
		h := ctx.Middleware(func(ctx context.Context, req interface{}) (interface{}, error) {
			return srv.GetTag(ctx, req.(*GetTagRequest))
		})
		out, err := h(ctx, &in)
		if err != nil {
			return err
		}
		reply := out.(*GetTagResponse)
		return ctx.Result(200, reply)
	}
}

func _TagService_ListTags0_HTTP_Handler(srv TagServiceHTTPServer) func(ctx http.Context) error {
	return func(ctx http.Context) error {
		var in ListTagsRequest
		if err := ctx.BindQuery(&in); err != nil {
			return err
		}
		http.SetOperation(ctx, OperationTagServiceListTags)
		h := ctx.Middleware(func(ctx context.Context, req interface{}) (interface{}, error) {
			return srv.ListTags(ctx, req.(*ListTagsRequest))
		})
		out, err := h(ctx, &in)
		if err != nil {
			return err
		}
		reply := out.(*ListTagsResponse)
		return ctx.Result(200, reply)
	}
}

func _TagService_UpdateTag0_HTTP_Handler(srv TagServiceHTTPServer) func(ctx http.Context) error {
	return func(ctx http.Context) error {
		var in UpdateTagRequest
		if err := ctx.Bind(&in); err != nil {
			return err
		}
		if err := ctx.BindQuery(&in); err != nil {
			return err
		}
		if err := ctx.BindVars(&in); err != nil {
			return err
		}
		http.SetOperation(ctx, OperationTagServiceUpdateTag)
		h := ctx.Middleware(func(ctx context.Context, req interface{}) (interface{}, error) {
			return srv.UpdateTag(ctx, req.(*UpdateTagRequest))
		})
		out, err := h(ctx, &in)
		if err != nil {
			return err
		}
		reply := out.(*UpdateTagResponse)
		return ctx.Result(200, reply)
	}
}

func _TagService_DeleteTag0_HTTP_Handler(srv TagServiceHTTPServer) func(ctx http.Context) error {
	return func(ctx http.Context) error {
		var in DeleteTagRequest
		if err := ctx.BindQuery(&in); err != nil {
			return err
		}
		if err := ctx.BindVars(&in); err != nil {
			return err
		}
		http.SetOperation(ctx, OperationTagServiceDeleteTag)
		h := ctx.Middleware(func(ctx context.Context, req interface{}) (interface{}, error) {
			return srv.DeleteTag(ctx, req.(*DeleteTagRequest))
		})
		out, err := h(ctx, &in)
		if err != nil {
			return err
		}
		reply := out.(*DeleteTagResponse)
		return ctx.Result(200, reply)
	}
}

type TagServiceHTTPClient interface {
	CreateTag(ctx context.Context, req *CreateTagRequest, opts ...http.CallOption) (rsp *CreateTagResponse, err error)
	DeleteTag(ctx context.Context, req *DeleteTagRequest, opts ...http.CallOption) (rsp *DeleteTagResponse, err error)
	GetTag(ctx context.Context, req *GetTagRequest, opts ...http.CallOption) (rsp *GetTagResponse, err error)
	ListTags(ctx context.Context, req *ListTagsRequest, opts ...http.CallOption) (rsp *ListTagsResponse, err error)
	UpdateTag(ctx context.Context, req *UpdateTagRequest, opts ...http.CallOption) (rsp *UpdateTagResponse, err error)
}

type TagServiceHTTPClientImpl struct {
	cc *http.Client
}

func NewTagServiceHTTPClient(client *http.Client) TagServiceHTTPClient {
	return &TagServiceHTTPClientImpl{client}
}

func (c *TagServiceHTTPClientImpl) CreateTag(ctx context.Context, in *CreateTagRequest, opts ...http.CallOption) (*CreateTagResponse, error) {
	var out CreateTagResponse
	pattern := "/v1/tags"
	path := binding.EncodeURL(pattern, in, false)
	opts = append(opts, http.Operation(OperationTagServiceCreateTag))
	opts = append(opts, http.PathTemplate(pattern))
	err := c.cc.Invoke(ctx, "POST", path, in, &out, opts...)
	if err != nil {
		return nil, err
	}
	return &out, nil
}

func (c *TagServiceHTTPClientImpl) DeleteTag(ctx context.Context, in *DeleteTagRequest, opts ...http.CallOption) (*DeleteTagResponse, error) {
	var out DeleteTagResponse
	pattern := "/v1/tags/{id}"
	path := binding.EncodeURL(pattern, in, true)
	opts = append(opts, http.Operation(OperationTagServiceDeleteTag))
	opts = append(opts, http.PathTemplate(pattern))
	err := c.cc.Invoke(ctx, "DELETE", path, nil, &out, opts...)
	if err != nil {
		return nil, err
	}
	return &out, nil
}

func (c *TagServiceHTTPClientImpl) GetTag(ctx context.Context, in *GetTagRequest, opts ...http.CallOption) (*GetTagResponse, error) {
	var out GetTagResponse
	pattern := "/v1/tags/{id}"
	path := binding.EncodeURL(pattern, in, true)
	opts = append(opts, http.Operation(OperationTagServiceGetTag))
	opts = append(opts, http.PathTemplate(pattern))
	err := c.cc.Invoke(ctx, "GET", path, nil, &out, opts...)
	if err != nil {
		return nil, err
	}
	return &out, nil
}

func (c *TagServiceHTTPClientImpl) ListTags(ctx context.Context, in *ListTagsRequest, opts ...http.CallOption) (*ListTagsResponse, error) {
	var out ListTagsResponse
	pattern := "/v1/tags"
	path := binding.EncodeURL(pattern, in, true)
	opts = append(opts, http.Operation(OperationTagServiceListTags))
	opts = append(opts, http.PathTemplate(pattern))
	err := c.cc.Invoke(ctx, "GET", path, nil, &out, opts...)
	if err != nil {
		return nil, err
	}
	return &out, nil
}

func (c *TagServiceHTTPClientImpl) UpdateTag(ctx context.Context, in *UpdateTagRequest, opts ...http.CallOption) (*UpdateTagResponse, error) {
	var out UpdateTagResponse
	pattern := "/v1/tags/{id}"
	path := binding.EncodeURL(pattern, in, false)
	opts = append(opts, http.Operation(OperationTagServiceUpdateTag))
	opts = append(opts, http.PathTemplate(pattern))
	err := c.cc.Invoke(ctx, "PUT", path, in, &out, opts...)
	if err != nil {
		return nil, err
	}
	return &out, nil
}
