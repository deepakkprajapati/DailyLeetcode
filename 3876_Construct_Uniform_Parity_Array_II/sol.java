import java.util.*;

class Solution {
    /**
     * Time:    O(N)
     * Space:   O(N)
     * Strategy: Minimum tracking with condtion filtering/ Two-pass baseline approach.
     */
    public boolean solve(int[] nums1) {
        int mini = Integer.MAX_VALUE;
        for (int i : nums1) {
            mini = Math.min(i, mini);
        }
        if (mini %2 ==0) {
            for (int i : nums1) {
                if (i %2 !=0) {
                    return false;
                }
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[][] inputs = {
            {1, 4, 7},
            {2, 3},
            {4, 6},
        };
        boolean[] expected = {true, false, true};
        System.out.println("Running Tests...");
        for (int i = 0; i < inputs.length; i++) {
            boolean result = sol.solve(inputs[i]);
            String status = (result == expected[i]) ? "✅ PASS" : "❌ FAIL";
            System.out.printf("%s | Test #%d: Input: %s | Expected: %B | Result: %B%n",
                status, i+1, Arrays.toString(inputs[i]), expected[i], result );
        }
    }
}