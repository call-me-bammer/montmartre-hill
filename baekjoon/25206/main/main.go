package main

import "fmt"

func main() {
	scores := make(map[string]float32)

	scores["A+"] = 4.5
	scores["A0"] = 4.0
	scores["B+"] = 3.5
	scores["B0"] = 3.0
	scores["C+"] = 2.5
	scores["C0"] = 2.0
	scores["D+"] = 1.5
	scores["D0"] = 1.0
	scores["F"] = 0

	var course, grade string
	var point, sumOfPoints, sumOfScores float32

	for i := 0; i < 20; i++ {
		fmt.Scanln(&course, &point, &grade)

		if grade == "P" {
			continue
		}

		sumOfScores += point * scores[grade]
		sumOfPoints += point
	}

	fmt.Println(sumOfScores / sumOfPoints)
}
