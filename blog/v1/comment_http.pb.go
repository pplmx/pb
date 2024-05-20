// Code generated by protoc-gen-go-http. DO NOT EDIT.
// versions:
// - protoc-gen-go-http v2.7.3
// - protoc             (unknown)
// source: blog/v1/comment.proto

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

const OperationCommentServiceCreateComment = "/blog.v1.CommentService/CreateComment"

type CommentServiceHTTPServer interface {
	CreateComment(context.Context, *CreateCommentRequest) (*CreateCommentResponse, error)
}

func RegisterCommentServiceHTTPServer(s *http.Server, srv CommentServiceHTTPServer) {
	r := s.Route("/")
	r.POST("/v1/comment", _CommentService_CreateComment0_HTTP_Handler(srv))
}

func _CommentService_CreateComment0_HTTP_Handler(srv CommentServiceHTTPServer) func(ctx http.Context) error {
	return func(ctx http.Context) error {
		var in CreateCommentRequest
		if err := ctx.Bind(&in); err != nil {
			return err
		}
		if err := ctx.BindQuery(&in); err != nil {
			return err
		}
		http.SetOperation(ctx, OperationCommentServiceCreateComment)
		h := ctx.Middleware(func(ctx context.Context, req interface{}) (interface{}, error) {
			return srv.CreateComment(ctx, req.(*CreateCommentRequest))
		})
		out, err := h(ctx, &in)
		if err != nil {
			return err
		}
		reply := out.(*CreateCommentResponse)
		return ctx.Result(200, reply)
	}
}

type CommentServiceHTTPClient interface {
	CreateComment(ctx context.Context, req *CreateCommentRequest, opts ...http.CallOption) (rsp *CreateCommentResponse, err error)
}

type CommentServiceHTTPClientImpl struct {
	cc *http.Client
}

func NewCommentServiceHTTPClient(client *http.Client) CommentServiceHTTPClient {
	return &CommentServiceHTTPClientImpl{client}
}

func (c *CommentServiceHTTPClientImpl) CreateComment(ctx context.Context, in *CreateCommentRequest, opts ...http.CallOption) (*CreateCommentResponse, error) {
	var out CreateCommentResponse
	pattern := "/v1/comment"
	path := binding.EncodeURL(pattern, in, false)
	opts = append(opts, http.Operation(OperationCommentServiceCreateComment))
	opts = append(opts, http.PathTemplate(pattern))
	err := c.cc.Invoke(ctx, "POST", path, in, &out, opts...)
	if err != nil {
		return nil, err
	}
	return &out, nil
}
