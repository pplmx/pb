.PHONY: help pb up fmt lint gen
.DEFAULT_GOAL := help

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
