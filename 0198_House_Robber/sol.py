class Solution:
    """
    @param arg1: List[int]
    @return: int
    Time:    O(N)
    Space:   O(1)
    Strategy: DP (iterative bottom-up)
    """
    def solve(self, nums: list[int]) -> int:
        result = 0
        prev, prevprev = 0, 0
        for i in nums:
            result = max(prevprev + i, prev)
            prevprev = prev
            prev = result
        return result
# ================ 🧪 Local Test Suite ======================================
def run_tests():
    sol = Solution()
    test_cases = [
        (( [1,2,3,1],), 4 ),
        (( [2,7,9,3,1],), 12 ),
        (( [2,1,1,2],), 4 ),
    ]
    for i, (args, expected) in enumerate(test_cases, 1):
        result = sol.solve(*args)
        status = "✅ PASS" if result == expected else "❌ FAIL"
        print(f"Test {i}: | {status} | Input={args} | Expected={expected} | Got={result}")
if __name__ == "__main__":
    run_tests()