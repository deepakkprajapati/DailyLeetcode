package main

import (
	"fmt"
	"reflect"
)

/**
 * Strategy: XOR
 * Time:     O(N)
 * Space:    O(N)
 */
// EDIT HERE: Change function signature and return type as needed
func solve(nums []int) int {
	result := 0
	for _, x := range nums {
		result ^= x
	}
	return result
}

func main() {
	type testCase struct {
		input1 []int
		expect int
	}
	tests := []testCase{
		{input1: []int{2, 2, 1}, expect: 1},
		{input1: []int{4, 1, 2, 1, 2}, expect: 4},
		{input1: []int{1}, expect: 1},
	}

	for i, tc := range tests {
		// EDIT HERE: Update arguments to match your function signature
		got := solve(tc.input1)
		if !reflect.DeepEqual(got, tc.expect) {
			fmt.Printf("❌ Test %d Failed | Input: %v | Got: %v, Want: %v\n",
				i, tc.input1, got, tc.expect)
		} else {
			fmt.Printf("✅ Test %d Passed | Input: %v | Got: %v, Want: %v\n",
				i, tc.input1, got, tc.expect)
		}
	}
}
