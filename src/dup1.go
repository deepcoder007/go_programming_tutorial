package main

import (
	"bufio"
	"fmt"
	"os"
)


// func main() {
// 	counts := make(map[string]int)
// 	input := bufio.NewScanner(os.Stdin)
// 	for input.Scan() {
// 		counts[input.Text()]++
// 	}
// 	for line, n := range counts {
// 		if n > 1 {
// 			fmt.Println("%d\t%s\n", n, line)
// 		}
// 	}
// }

func main() {
	counts := make(map[string]int)
	files := os.Args[1:]
	if len(files) == 0 {
		countLines(os.Stdin, counts)
	} else {
		for _, arg := range files {
			f, err := os.Open(arg)
			if err != nil {
				fmt.Fprintf(os.Stderr, "dup2: %v\n", err)
				continue
			}
			countLines(f, counts)
			f.Close()
		}
	}
	fmt.Printf("Num of entries:%d\n", len(counts))
	for line, n := range counts {
		if n > 1 {
			fmt.Printf("%d\t%s\n", n, line)
		}
	}
}

func countLines(f* os.File, counts map[string]int) {
	input := bufio.NewScanner(f)
	for input.Scan() {
		s := input.Text()
		fmt.Printf("found: %s\n", s)
		counts[s]++
	}
}
