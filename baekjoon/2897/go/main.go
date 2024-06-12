package main

import (
	"fmt"
	"strings"
)

func main() {
	var r, c int
	fmt.Scanf("%d %d\n", &r, &c)

	m := make([][]rune, r)
	for i := range m {
		m[i] = make([]rune, c)
	}

	for i := 0; i < r; i++ {
		var row string
		fmt.Scanf("%s\n", &row)
		for j := range row {
			m[i][j] = rune(row[j])
		}
	}

	answer := [5]int{0, 0, 0, 0, 0}
	for i := 0; i < r-1; i++ {
		for j := 0; j < c-1; j++ {
			var space string
			space += string(m[i][j]) + string(m[i][j+1]) + string(m[i+1][j]) + string(m[i+1][j+1])

			if strings.Count(space, "#") < 1 {
				answer[strings.Count(space, "X")]++
			}

		}
	}

	for i := 0; i < 5; i++ {
		fmt.Println(answer[i])
	}
}
