package main

import (
	"fmt"
	"log"
	"context"
	"github.com/redis/go-redis/v9"
)

func main() {
	client := redis.NewClient(&redis.Options{
		Addr: "localhost:6379",
		Password: "",
		DB: 0,
		Protocol: 2,
	})
	ctx := context.Background()

	{
		chan_name := "test_channel"
		chan_name_2 := "second_channel"

		for i := 0; i != 10; i++ {
			err := client.Publish(ctx, chan_name, "message1").Err()
			if err != nil {
				fmt.Println("unable to publish")
				log.Fatalf("Failed to subscribe: %v", err)
			}
			err = client.Publish(ctx, chan_name_2, "second_message").Err()
			if err != nil {
				fmt.Println("unable to publish")
				log.Fatalf("Failed to subscribe: %v", err)
			}
		}
	}
}
