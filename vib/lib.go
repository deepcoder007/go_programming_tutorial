
package vib

import (
    "fmt"
)

func Fn(v int) {
	fmt.Println("value of variable: ", v)
}

func Incr_var(v *int) {
    *v += 100
}

