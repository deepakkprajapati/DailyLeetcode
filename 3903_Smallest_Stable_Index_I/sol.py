class Solution:
    """
    @param arg1: List[int]
    @param arg2: int
    @return: int
    Time:    O(N)
    Space:   O(N)
    Strategy: Prefix & suffix
    """
    def solve(self, nums: list[int] , k: int) -> int:
        curr_max = nums[0]
        length = len(nums)
        suffix_min = [nums[-1]] * length
        for i in range(length-2, -1, -1):
            suffix_min[i] = min( suffix_min[i+1] , nums[i])
        for i in range(length):
            curr_max = max(curr_max, nums[i])
            if k>= curr_max - suffix_min[i]:
                return i
        return -1

# ================ 🧪 Local Test Suite ======================================
def run_tests():
    sol = Solution()
    test_cases = [
        (( [5,0,1,4], 3), 3 ),
        (( [3,2,1], 1), -1 ),
        (( [0], 0), 0 ),
    ]
    for i, (args, expected) in enumerate(test_cases, 1):
        result = sol.solve(*args)
        status = "✅ PASS" if result == expected else "❌ FAIL"
        print(f"Test {i}: | {status} | Input={args} | Expected={expected} | Got={result}")

if __name__ == "__main__":
    run_tests()