package main

import (
	"fmt"
)

func fn(v int) {
	fmt.Println("value of variable: ", v)
}

func main() {
	fmt.Println("test function calls")
	fn(1)
	defer fn(2)
	fn(3)
	defer fn(4)
	fn(5)
	defer fn(6)
}
