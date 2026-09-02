class Solution:
    """
    @param arg1: List
    @return: int
    Time:    O(N)
    Space:   O(N)
    Strategy: XOR
    """
    def solve(self, nums: list[int]) -> int:
        result = 0
        for x in nums:
            result ^= x
        return result

# ================ 🧪 Local Test Suite ======================================
def run_tests():
    sol = Solution()
    test_cases = [
        (( [2,2,1], ), 1 ),
        (( [4,1,2,1,2], ) , 4 ),
        (( [1], ) , 1 ),
        
    ]
    for i, (args, expected) in enumerate(test_cases, 1):
        result = sol.solve(*args)
        status = "✅ PASS" if result == expected else "❌ FAIL"
        print(f"Test {i}: | {status} | Input={args} | Expected={expected} | Got={result}")

if __name__ == "__main__":
    run_tests()
