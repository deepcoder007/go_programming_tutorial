package main

import "fmt"
import "os"

func main() {
	fmt.Println("Hello, World!!")
	var s, sep string
	sep = "  "
	for i := 1; i < len(os.Args); i++ {
		s += sep + os.Args[i]
	}
	fmt.Println(s)
}
