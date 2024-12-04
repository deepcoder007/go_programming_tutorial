#!/bin/bash

docker run -v $(pwd):/defs namely/protoc-all -f greetpb/greet.proto -l go
docker run -v $(pwd):/defs namely/protoc-all -f greetpb/greet.proto -l cpp

