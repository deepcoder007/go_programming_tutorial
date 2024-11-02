package main

import (
	"fmt"
)

type TestIFace interface {
	F1()
	F2(arg int)
}

type CLS struct {
	a int
	b int
	c int
}

func call_iface (v TestIFace) {
	fmt.Println("BEGIN call iface")
	v.F1()
	for i := 0; i != 5; i++ {
		v.F2(i)
	}
	fmt.Println("END call iface")
}

func (c* CLS) F1() {
	fmt.Println("called function f1 in CLS")
}

func (c* CLS) F2(arg int) {
	fmt.Println("called f2 in CLS with arg:", arg)
}

func main() {
	fmt.Println("test interface")

	// var c1 CLS = CLS{10, 20, 30};
	var c1 *CLS

	// fmt.Println(c1)
	// call_iface(&c1)

	fmt.Println(c1)
	call_iface(c1)
}
