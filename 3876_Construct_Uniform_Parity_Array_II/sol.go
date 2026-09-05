package main

import (
	"fmt"
	"math"
	"reflect"
)

/**
 * Strategy: Minimum tracking with condtion filtering/ Two-pass baseline approach.
 * Time:     O(N)
 * Space:    O(N)
 */
func solve(nums1 []int) bool {
	mini := math.MaxInt
	for _, v := range nums1 {
		mini = min(mini, v)
	}
	if mini%2 == 0 {
		for _, v := range nums1 {
			if v%2 != 0 {
				return false
			}
		}
	}
	return true
}
func main() {
	type testCase struct {
		input1 []int
		expect bool
	}
	tests := []testCase{
		{input1: []int{1, 4, 7}, expect: true},
		{input1: []int{2, 3}, expect: false},
		{input1: []int{4, 6}, expect: true},
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
