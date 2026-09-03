package main

import (
	"fmt"
	"reflect"
)

/**
 * Strategy: Hash set
 * Time:     O(N)
 * Space:    O(N)
 */

func solve(nums []int) int {
	numset := make(map[int]struct{})
	for _, item := range nums {
		numset[item] = struct{}{}
	}
	longstreak := 0
	for x := range numset {
		if _, ok := numset[x-1]; !ok {
			curr_num := x
			curr_streak := 1
			for {
				if _, ok := numset[curr_num+1]; !ok {
					break
				}
				curr_num++
				curr_streak++
			}
			longstreak = max(longstreak, curr_streak)
		}
	}
	return longstreak
}

func main() {
	type testCase struct {
		input1 []int
		expect int
	}
	tests := []testCase{
		{input1: []int{100, 4, 200, 1, 3, 2}, expect: 4},
		{input1: []int{0, 3, 7, 2, 5, 8, 4, 6, 0, 1}, expect: 9},
		{input1: []int{1, 0, 1, 2}, expect: 3},
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
