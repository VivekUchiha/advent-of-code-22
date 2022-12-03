package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
)

func main() {
	in := bufio.NewReader(os.Stdin)
	max := 0
	curr := 0
	for {
		var val int
		n, err := fmt.Fscanln(in, &val)

		if n == 0 {
			if curr > max {
				max = curr
			}
			curr = 0
		}

		curr += val

		if err == io.EOF {
			break
		}
	}

	fmt.Println(max)
}
