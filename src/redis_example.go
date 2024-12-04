package main

import (
	"fmt"
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
		val, err := client.Get(ctx, "name").Result()
		if err != nil {
			panic(err)
		}
		fmt.Println("name:", val)
	}

	{
		val, err := client.Get(ctx, "age").Result()
		if err != nil {
			panic(err)
		}
		fmt.Println("age:", val)
	}
	{
		err := client.Set(ctx, "test_val", "thisValIsTestVAl", 0).Err();
		if err != nil {
			panic(err)
		}
	}
}
