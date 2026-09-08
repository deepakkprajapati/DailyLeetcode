package main

import (
	"fmt"
	"reflect"
)

/**
 * Strategy: [Insert Strategy Name]
 * Time:     O(1)
 * Space:    O(1)
 */
func solve(n int) int {
	return max(0, n-999)
}
func main() {
	type testCase struct {
		input1 int
		expect int
	}
	tests := []testCase{
		{input1: 1002, expect: 3},
		{input1: 998, expect: 0},
	}
	for i, tc := range tests {
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
