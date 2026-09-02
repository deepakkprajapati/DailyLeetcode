package main

import (
	"fmt"
	"reflect"
)

/**
 * Strategy: sumofarray%k
 * Time:     O(N)
 * Space:    O(1)
 */

func solve(nums []int, k int) int {
	sum := 0
	for _, v := range nums {
		sum = sum + v
	}
	return sum % k
}
func main() {
	type testCase struct {
		input1 []int
		input2 int
		expect int
	}
	tests := []testCase{
		{input1: []int{3, 9, 7}, input2: 5, expect: 4},
		{input1: []int{4, 1, 3}, input2: 4, expect: 0},
		{input1: []int{3, 2}, input2: 6, expect: 5},
	}

	for i, tc := range tests {
		got := solve(tc.input1, tc.input2)
		if !reflect.DeepEqual(got, tc.expect) {
			fmt.Printf("❌ Test %d Failed | Input: %v, %v | Got: %v, Want: %v\n",
				i, tc.input1, tc.input2, got, tc.expect)
		} else {
			fmt.Printf("✅ Test %d Passed | Input: %v, %v | Got: %v, Want: %v\n",
				i, tc.input1, tc.input2, got, tc.expect)
		}
	}
}
