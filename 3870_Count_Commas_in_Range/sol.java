import java.util.*;

class Solution {
    /**
     * Time:    O(1)
     * Space:   O(1)
     * Strategy: Binary search implementation
     */
    public int solve(int n) {
        return Math.max(0, n-999);
    }
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] inputs = { 1002, 998 };
        int[] expected = {3, 0};
        System.out.println("Running Tests...");
        for (int i = 0; i < inputs.length; i++) {
            int result = sol.solve(inputs[i]);
            String status = (result == expected[i]) ? "✅ PASS" : "❌ FAIL";
            System.out.printf("%s | Test #%d: Input: %d | Expected: %d | Result: %d%n",
                status, i+1, inputs[i], expected[i], result );
        }
    }
}