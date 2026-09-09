import java.util.*;

class Solution {
    /**
     * Time:    O(log N)
     * Space:   O(1)
     * Strategy: Maths
     */
    public long solve(long n) {
        long result = 0;
        for (long i = 1000; i <= n; i*=1000) {
            result += n-i +1;
        }
        return result;
    }
    public static void main(String[] args) {
        Solution sol = new Solution();
        long[] inputs = { 1002, 998, 1004590  };
        long[] expected = {3, 0, 1008182};
        System.out.println("Running Tests...");
        for (int i = 0; i < inputs.length; i++) {
            long result = sol.solve(inputs[i]);
            String status = (result == expected[i]) ? "✅ PASS" : "❌ FAIL";
            System.out.printf("%s | Test #%d: Input: %d | Expected: %d | Result: %d%n",
                status, i+1, inputs[i], expected[i], result );
        }
    }
}