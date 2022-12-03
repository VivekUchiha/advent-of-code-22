package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"sort"
)

func main() {
	in := bufio.NewReader(os.Stdin)
	sums := make([]int, 0)
	curr := 0
	for {
		var val int
		n, err := fmt.Fscanln(in, &val)

		if n == 0 {
			sums = append(sums, curr)
			curr = 0
		}

		curr += val

		if err == io.EOF {
			break
		}
	}

	sort.Ints(sums)
	sums = sums[len(sums)-3:]
	ans := sums[0] + sums[1] + sums[2]
	fmt.Println(ans)
}
