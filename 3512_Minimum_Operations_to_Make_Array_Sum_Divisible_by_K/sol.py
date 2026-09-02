class Solution:
    """
    @param arg1: List
    @param arg2: int
    @return: int
    Time:    O(N)
    Space:   O(1)
    Strategy: sumofarray%k
    """
    def solve(self, nums: list[int] , k: int) -> int:
        return sum(nums)%k

# ================ 🧪 Local Test Suite ======================================
def run_tests():
    sol = Solution()
    test_cases = [
        (( [3,9,7], 5), 4),
        (( [4,1,3], 4) , 0),
        (( [3,2], 6) , 5),
    ]
    for i, (args, expected) in enumerate(test_cases, 1):
        result = sol.solve(*args)
        status = "✅ PASS" if result == expected else "❌ FAIL"
        print(f"Test {i}: | {status} | Input={args} | Expected={expected} | Got={result}")

if __name__ == "__main__":
    run_tests()
