package main

import (
	"fmt"
	"reflect"
)

/**
 * Strategy: Itertive [Bottom-up Dynamic Programming]
 * Time:     O(N)
 * Space:    O(1)
 */
func solve(n int) int {
	if n < 2 {
		return n
	}
	prev0 := 0
	prev1 := 1
	result := 0
	for i := 2; i <= n; i++ {
		result = prev0 + prev1
		prev0 = prev1
		prev1 = result
	}
	return result
}
func main() {
	type testCase struct {
		input1 int
		expect int
	}
	tests := []testCase{
		{input1: 2, expect: 1},
		{input1: 3, expect: 2},
		{input1: 4, expect: 3},
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
