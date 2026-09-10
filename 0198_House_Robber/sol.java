import java.util.*;

class Solution {
    /**
     * Time:    O(N)
     * Space:   O(1)
     * Strategy: DP(iterative bottom-up)
     */
    public int solve(int[] nums) {
        int result = 0;
        int prev = 0, prevprev = 0;
        for (int i = 0; i < nums.length; i++) {
            result = Math.max(prevprev +nums[i], prev);
            prevprev = prev;
            prev = result;
        }
        return result;
    }
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[][] inputs = { {1,2,3,1}, {2,7,9,3,1}, {2,1,1,2} };
        int[] expected = {4, 12, 4};
        System.out.println("Running Tests...");
        for (int i = 0; i < inputs.length; i++) {
            int result = sol.solve(inputs[i]);
            String status = (result == expected[i]) ? "✅ PASS" : "❌ FAIL";
            System.out.printf("%s | Test #%d: Input: %s | Expected: %d | Result: %d%n",
                status, i+1, Arrays.toString(inputs[i]), expected[i], result );
        }
    }
}