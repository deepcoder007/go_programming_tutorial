package main

import (
	"fmt"
)

type CLS struct {
	x int
	y int
}

func (this CLS)  get_x() int {
	return this.x
}

func (this CLS)  get_y() int {
	return this.y
}

func main() {
	fmt.Println("test classes")

	v := CLS{100, 200}
	fmt.Println(v.get_x())
	fmt.Println(v.get_y())
	fmt.Println(CLS.get_x(v))
	fmt.Println(CLS.get_y(v))
}
