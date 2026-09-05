package main

import (
	"fmt"
	"reflect"
)

/**
 * Strategy: prefix & suffix
 * Time:     O(N)
 * Space:    O(N)
 */
func solve(nums []int, k int) int {
	curr_max := nums[0]
	suffix_min := make([]int, len(nums))
	suffix_min[len(nums)-1] = nums[len(nums)-1]
	for i := len(nums) - 2; i >= 0; i-- {
		suffix_min[i] = min(suffix_min[i+1], nums[i])
	}
	for i := 0; i < len(nums); i++ {
		curr_max = max(curr_max, nums[i])
		if k >= curr_max-suffix_min[i] {
			return i
		}
	}
	return -1
}
func main() {
	type testCase struct {
		input1 []int
		input2 int
		expect int
	}
	tests := []testCase{
		{input1: []int{5, 0, 1, 4}, input2: 3, expect: 3},
		{input1: []int{3, 2, 1}, input2: 1, expect: -1},
		{input1: []int{0}, input2: 0, expect: 0},
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
