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
		// chan_name_2 := "second_channel"

		for i := 0; i != 10; i++ {
			err := client.Publish(ctx, chan_name, "message1").Err()
			if err != nil {
				fmt.Println("unable to publish")
				log.Fatalf("Failed to subscribe: %v", err)
			}
		}

		// pubsub := client.Subscribe(ctx, chan_name)
		// // pubsub := client.Subscribe(ctx, chan_name, chan_name_2)
		// pubsub_2 := client.Subscribe(ctx, chan_name_2)
		// defer pubsub.Close()
		// defer pubsub_2.Close()

		// _, err := pubsub.Receive(ctx)
		// if err != nil {
		// 	log.Fatalf("Failed to subscribe: %v", err)
		// }
		// fmt.Printf("Subscribed to channel: %s\n", chan_name)
		// _, err = pubsub_2.Receive(ctx)
		// if err != nil {
		// 	log.Fatalf("Failed ot subscribe: %v", err)
		// }
		// fmt.Printf("Subscribed to channel: %s\n", chan_name_2)

		// ch := pubsub.Channel()
		// ch_2 := pubsub_2.Channel()
		// fmt.Println(ch)
		// fmt.Println(ch_2)
		// // for msg := range ch {
		// // 	fmt.Printf("Received message from  %s: %s\n", msg.Channel, msg.Payload)
		// // }
		// for {
		// 	select {
		// 		case msg := <-ch: {
		// 			fmt.Printf("Received message from  %s: %s\n", msg.Channel, msg.Payload)
		// 		}
		// 		case msg := <-ch_2: {
		// 			fmt.Printf("Received message from  %s: %s\n", msg.Channel, msg.Payload)
		// 		}
		// 	}
		// }
	}
}
