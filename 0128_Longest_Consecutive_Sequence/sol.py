class Solution:
    """
    @param arg1: List[int]
    @return: int
    Time:    O(N)
    Space:   O(N)
    Strategy: Hash set
    """
    def solve(self, nums: list[int]) -> int:
        numset = set(nums)
        longstreak = 0
        for x in numset:
            if x-1 not in numset:
                curr_sreak =1
                curr_num =x
                while curr_num+1 in numset:
                    curr_num = curr_num+1
                    curr_sreak = curr_sreak+1
                longstreak = max(longstreak, curr_sreak)
        return longstreak

# ================ 🧪 Local Test Suite ======================================
def run_tests():
    sol = Solution() 
    test_cases = [
        (([100,4,200,1,3,2],), 4),
        (([0,3,7,2,5,8,4,6,0,1],) , 9),
        (([1,0,1,2],) , 3),
    ]
    for i, (args, expected) in enumerate(test_cases, 1):
        result = sol.solve(*args)
        status = "✅ PASS" if result == expected else "❌ FAIL"
        print(f"Test {i}: | {status} | Input={args} | Expected={expected} | Got={result}")

if __name__ == "__main__":
    run_tests()
