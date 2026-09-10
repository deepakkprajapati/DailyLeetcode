package main

import (
	"fmt"
	"reflect"
)

/**
 * Strategy: DP(iterative bottom-up)
 * Time:     O(N)
 * Space:    O(1)
 */
func solve(nums []int) int {
	result := 0
	prev := 0
	prevprev := 0
	for i := 0; i < len(nums); i++ {
		result = max(prevprev+nums[i], prev)
		prevprev = prev
		prev = result
	}
	return result
}
func main() {
	type testCase struct {
		input1 []int
		expect int
	}
	tests := []testCase{
		{input1: []int{1, 2, 3, 1}, expect: 4},
		{input1: []int{2, 7, 9, 3, 1}, expect: 12},
		{input1: []int{2, 1, 1, 2}, expect: 4},
	}
	for i, tc := range tests {
		got := solve(tc.input1)
		if !reflect.DeepEqual(got, tc.expect) {
			fmt.Printf("❌ Test %d Failed | Input: %v | Got: %v, Want: %v\n",
				i, tc.input1, got, tc.expect)
		} else {
			fmt.Printf("✅ Test %d Passed | Input: %v| Got: %v, Want: %v\n",
				i, tc.input1, got, tc.expect)
		}
	}
}
