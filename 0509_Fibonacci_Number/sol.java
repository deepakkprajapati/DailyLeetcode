import java.util.*;

class Solution {
    /**
     * Time:    O(N)
     * Space:   O(1)
     * Strategy: Itertive [Bottom-up Dynamic Programming]
     */
    public int solve(int n) {
        if (n <2) {
            return n;
        }
        int prev0 = 0;
        int prev1 = 1;
        int result = 0;
        for (int i = 2; i <= n; i++) {
            result = prev0 + prev1;
            prev0 = prev1;
            prev1 = result;
        }
        return result;
    }
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] inputs = { 2, 3, 4 };
        int[] expected = {1, 2, 3};
        System.out.println("Running Tests...");
        for (int i = 0; i < inputs.length; i++) {
            int result = sol.solve(inputs[i]);
            String status = (result == expected[i]) ? "✅ PASS" : "❌ FAIL";
            System.out.printf("%s | Test #%d: Input: %d, | Expected: %d | Result: %d%n",
                status, i+1, inputs[i], expected[i], result );
        }
    }
}