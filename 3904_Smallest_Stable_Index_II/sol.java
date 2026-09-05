import java.util.*;

class Solution {
    /**
     * Time:    O(N)
     * Space:   O(N)
     * Strategy: Prefix & Suffix
     */
    public int solve(int[] nums, int k) {
        int curr_max = nums[0];
        int[] suffix_min = new int[nums.length];
        suffix_min[nums.length -1] = nums[nums.length -1];
        for(int i = nums.length-2; i >= 0; i--){
            suffix_min[i] = Math.min(suffix_min[i+1], nums[i]);
        }
        for(int i=0; i< nums.length; i++){
            curr_max = Math.max(curr_max, nums[i]);
            if (k>= curr_max - suffix_min[i]) {
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[][] inputs = {
            {5,0,1,4},
            {3,2,1},
            {0}
        };
        int[] targets = {3, 1, 0};
        int[] expected = {3, -1, 0};
        System.out.println("Running Tests...");
        for (int i = 0; i < inputs.length; i++) {
            int result = sol.solve(inputs[i], targets[i]);
            String status = (result == expected[i]) ? "✅ PASS" : "❌ FAIL";
            System.out.printf("%s | Test #%d: Input: %s, Target: %d | Expected: %d | Result: %d%n",
                status, 
                i + 1, 
                Arrays.toString(inputs[i]), 
                targets[i], 
                expected[i], 
                result
            );
        }
    }
}