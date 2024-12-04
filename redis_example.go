package main

import (
	"fmt"
)

func main() {
	client := redis.NewClient(&redis.Options{
		Addr: "localhost:6379",
		Password: "",
		DB: "",
		Protocol: 2,
	})
	ctx := context.Background()

	val, err := client.Get("name").Result()
	if err != nil {
		panic(err)
	}
	fmt.Println("name:", val)
}
