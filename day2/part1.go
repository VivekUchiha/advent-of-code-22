package main

import (
	"fmt"
)

func main() {
	ans := 0
	for {
		var him, me rune
		_, err := fmt.Scanf("%c %c\n", &him, &me)
		if err != nil {
			fmt.Println(err)
			break
		}
		ans += int(me) - 'X' + 1
		val := int(me) - int(him) - 23
		val += 3
		val %= 3
		switch val {
		case 0:
			ans += 3
		case 1:
			ans += 6
		}
	}
	fmt.Println(ans)
}
