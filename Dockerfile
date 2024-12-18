
FROM golang:1.23.2 AS build-stage

WORKDIR /app
COPY go.mod .
COPY go.sum .
RN go mod download

RUN CGO_ENABLED=0 GOOS=linux go build -o docker_build
