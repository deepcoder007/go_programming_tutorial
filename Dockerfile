
# FROM golang:1.23.2 AS build-stage
FROM ubuntu:noble

WORKDIR /app
RUN apt-get update && apt-get install -y golang ca-certificates htop net-tools neovim vim redis-tools
COPY go.mod .
COPY go.sum .
COPY src/pointer_example.go .
RUN go mod download

# RUN CGO_ENABLED=0 GOOS=linux go build -o docker_build
ENTRYPOINT ["/bin/bash"]
