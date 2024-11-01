package main

import (
	"fmt"
	"os"
)

func random_double(x int) int {
	return x + x
}

func main() {

	for i := 0; i < 10; i++ {
		fmt.Println(i, random_double(i))
	}

	fmt.Println("printed 10 numbers")

	medals := []string{"gold", "silver", "bronze"}
	fmt.Println(medals)
	fmt.Println(medals[1])
	fmt.Println(os.Getwd())
}
