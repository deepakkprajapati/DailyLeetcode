class Solution:
    """
    @param arg1: int
    @return: int
    Time:    O(1)
    Space:   O(1)
    Strategy: [Insert Strategy Name]
    """
    def solve(self, n: int) -> int:
        return max(0, n-999)

# ================ 🧪 Local Test Suite ======================================
def run_tests():
    sol = Solution()
    test_cases = [
        (( 1002, ), 3 ),
        (( 998, ), 0 ),
    ]
    for i, (args, expected) in enumerate(test_cases, 1):
        result = sol.solve(*args)
        status = "✅ PASS" if result == expected else "❌ FAIL"
        print(f"Test {i}: | {status} | Input={args} | Expected={expected} | Got={result}")

if __name__ == "__main__":
    run_tests()