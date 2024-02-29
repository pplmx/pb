.PHONY: help init pb up fmt lint gen
.DEFAULT_GOAL := help

# init: go install some necessary tools
init:
	@go install github.com/bufbuild/buf/cmd/buf@latest
	@go install github.com/google/gnostic/cmd/protoc-gen-openapi@latest
	@go install google.golang.org/protobuf/cmd/protoc-gen-go@latest
	@go install google.golang.org/grpc/cmd/protoc-gen-go-grpc@latest
	@go install github.com/go-kratos/kratos/cmd/kratos/v2@latest
	@go install github.com/go-kratos/kratos/cmd/protoc-gen-go-http/v2@latest

# buf: buf-up buf-fmt buf-lint buf-gen
pb: up fmt lint gen

# buf update
up:
	@cd proto; buf mod update

# buf format
fmt:
	@buf format -w

# buf lint
lint:
	@buf lint

# buf generate
gen:
	@buf generate

# Show help
help:
	@echo ""
	@echo "Usage:"
	@echo "    make [target]"
	@echo ""
	@echo "Targets:"
	@awk '/^[a-zA-Z\-_0-9]+:/ \
	{ \
		helpMessage = match(lastLine, /^# (.*)/); \
		if (helpMessage) { \
			helpCommand = substr($$1, 0, index($$1, ":")-1); \
			helpMessage = substr(lastLine, RSTART + 2, RLENGTH); \
			printf "\033[36m%-22s\033[0m %s\n", helpCommand,helpMessage; \
		} \
	} { lastLine = $$0 }' $(MAKEFILE_LIST)
