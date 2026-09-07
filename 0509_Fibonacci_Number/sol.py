class Solution:
    """
    @param arg1: int
    @return: return_type
    Time:    O(N)
    Space:   O(1)
    Strategy: Itertive [Bottom-up Dynamic Programming]
    """
    def solve(self, n: int) -> int:
        if n <2:
            return n
        result = 0
        prev0 = 0
        prev1 = 1
        for i in range(2, n+1):
            result = prev0 + prev1
            prev0 = prev1
            prev1 = result
        return result

# ================ 🧪 Local Test Suite ======================================
def run_tests():
    sol = Solution()
    test_cases = [
        (( 2,), 1 ),
        (( 3,) , 2 ),
        (( 4,) , 3 ),
    ]
    for i, (args, expected) in enumerate(test_cases, 1):
        result = sol.solve(*args)
        status = "✅ PASS" if result == expected else "❌ FAIL"
        print(f"Test {i}: | {status} | Input={args} | Expected={expected} | Got={result}")

if __name__ == "__main__":
    run_tests()