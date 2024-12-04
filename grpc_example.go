package main

import (
	"context"
	"log"
	"net"
	"fmt"
	"os"

	greetpb "go_programming_tutorial/gen/pb-go/greetpb.greet"
	"google.golang.org/grpc"
)

type server struct{}

func main() {
	if os.Args[1] == "server" {
		fmt.Println("make server")
		lis, err := net.Listen("tcp", "0.0.0.0:50051")
		if err != nil {
			log.Fatalf("Failed to listen %v", err)
		}

		s := grpc.NewServer()
		greetpb.RegisterGreetServiceServer(s, &server{})

		if err := s.Serve(lis); err != nil {
			log.Fatalf("Failed to start server %v", err)
		}
	} else {
		fmt.Println("make client")
		conn, err := grpc.Dial("localhost:50051", grpc.WithInsecure())
		if err != nil {
			log.Fatalf("connection failed: %v", err)
		}
		defer conn.Close()
		c := greetpb.NewGreetServiceClient(conn)

		// create request
		req := greetpb.GreetRequest{
			Greeting: &greetpb.Greeting{
				FirstName: "Kumar",
				LastName:  "Saurabh",
			},
		}

		// call Greet service
		res, err := c.Greet(context.Background(), &req)
		if err != nil {
			log.Fatalf("request failed: %v", err)
		}
		fmt.Println(res.Result)
	}
}

// Greet greets with FirstName
func (*server) Greet(ctx context.Context, in *greetpb.GreetRequest) (*greetpb.GreetResponse, error) {
	result := "Hello " + in.GetGreeting().GetFirstName()
	res := greetpb.GreetResponse{
		Result: result,
	}
	return &res, nil
}
