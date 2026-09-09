package main

import (
	"fmt"
	"reflect"
)

/**
 * Strategy: Maths
 * Time:     O(long N)
 * Space:    O(1)
 */
func solve(n int64) int64 {
	var result int64 = 0
	for i := int64(1000); i <= n; i = i * 1000 {
		result += n - i + 1
	}
	return int64(result)
}
func main() {
	type testCase struct {
		input1 int64
		expect int64
	}
	tests := []testCase{
		{input1: 1002, expect: 3},
		{input1: 998, expect: 0},
		{input1: 1004590, expect: 1008182},
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
