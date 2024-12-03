package main

import (
	fmt "fmt"
    "os"
    "go_programming_tutorial/vib"
)


func fn(v int) {
    vib.Fn(v)
}

func incr_var(v *int) {
    vib.Incr_var(v)
}

func main() {
	fmt.Println("test function calls")
	fn(1)
	defer fn(2)
	fn(3)
	defer fn(4)
	// panic(" test panic")
	fn(5)
	defer fn(6)
    fmt.Println("--- ARGS ---- ")
    fmt.Println(os.Args)
    fmt.Println(len(os.Args))
    fmt.Println("--- ARGS ---- ")
    val := new(int)
    for i := 0; i != 10; i++ {
        incr_var(val)
        fmt.Println(*val)
    }
    var s string
    fmt.Println(s)
    s = "This is test string"
    fmt.Println(s)
}
