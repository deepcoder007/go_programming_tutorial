package main

import (
	"fmt"
	"os"
)

type Employee struct {
	ID 		int
	Name 	string
	Address string
	Salary 	int
}

func random_double(x int) int {
	return x + x
}

func reverse(s []int) {
	for i, j := 0, len(s) - 1; i < j; i, j = i+1, j-1 {
		s[i], s[j] = s[j], s[i]
	}
}

func next5(v int) (int, int, int, int, int) {
	return v, v +1, v+2, v+3, v+4
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

	var a [3]int
	a[0] = 23
	a[1] = 234
	a[2] = 23423423
	fmt.Println(a)
	reverse(a[:])
	fmt.Println(a)

	fmt.Println(" work on MAPS")
	ages := make(map[string]int)
	ages["alice"] = 31
	ages["charlie"] = 34
	fmt.Println(ages)

	var person1 Employee
	person1.ID = 1
	person1.Name = "Person1"
	person1.Address = "this is address of person1"
	person1.Salary = 234000
	fmt.Println(person1)
	fmt.Println(person1)
	fmt.Println(person1)
	fmt.Println(next5(10))
	fmt.Println(next5(100))
	fmt.Println(next5(1000))
}
