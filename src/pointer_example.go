package main

import (
	"fmt"
)

type ST struct {
	v1 int
	v2 int
	v3 int
}

func add_var(tm map[int]*ST, k int) {
	tm[k] = &ST{
		v1: k+1,
		v2: k+2,
		v3: k+3,
	}
	fmt.Println(tm[k])
}

func main() {
	m := make(map[int]*ST)
	m[1] = &ST{
		v1: 1,
		v2: 2,
		v3: 3,
	}
	add_var(m, 10)
	add_var(m, 20)
	add_var(m, 30)

	fmt.Println(m)
	fmt.Println(m[10])
	fmt.Println(m[20])
	fmt.Println(m[30])
}
