class Solution:
    """
    @param arg1: List[int]
    @return: bool
    Time:    O(N)
    Space:   O(N)
    Strategy: Minimum tracking with condtion filtering/ Two-pass baseline approach.
    """
    def solve(self, nums1: list[int]) -> bool:
        mini = float('inf')
        for i in nums1:
            mini = min(mini, i)
        if mini %2 == 0:
            for x in nums1:
                if x %2 != 0:
                    return False
        return True
# ================ 🧪 Local Test Suite ======================================
def run_tests():
    sol = Solution()
    test_cases = [
        (( [1,4,7],), True ),
        (( [2,3],) , False ),
        (( [4,6],) , True ),
    ]
    for i, (args, expected) in enumerate(test_cases, 1):
        result = sol.solve(*args)
        status = "✅ PASS" if result == expected else "❌ FAIL"
        print(f"Test {i}: | {status} | Input={args} | Expected={expected} | Got={result}")

if __name__ == "__main__":
    run_tests()