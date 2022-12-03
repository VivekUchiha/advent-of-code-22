package main

import (
	"fmt"
)

func main() {
	ans := 0
	for {
		var him, outcome rune
		_, err := fmt.Scanf("%c %c\n", &him, &outcome)
		if err != nil {
			fmt.Println(err)
			break
		}
		choice := (int(outcome) - 'X')
		ans += choice * 3
		choice--
		me := int(him) - 'A' + choice
		me += 3
		me %= 3
		ans += me + 1
	}
	fmt.Println(ans)
}
