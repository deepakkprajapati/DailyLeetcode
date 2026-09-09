class Solution:
    """
    @param arg1: int
    @return: int
    Time:    O(log N)
    Space:   O(1)
    Strategy: int
    """
    def solve(self, n: int) -> int:
        result = 0
        i = 1000
        while i <= n:
            result += n-i +1
            i = i*1000
        return result
# ================ 🧪 Local Test Suite ======================================
def run_tests():
    sol = Solution()
    test_cases = [
        (( 1002, ), 3 ),
        (( 998, ) , 0 ),
        (( 1004590, ) , 1008182 ),
    ]
    for i, (args, expected) in enumerate(test_cases, 1):
        result = sol.solve(*args)
        status = "✅ PASS" if result == expected else "❌ FAIL"
        print(f"Test {i}: | {status} | Input={args} | Expected={expected} | Got={result}")
if __name__ == "__main__":
    run_tests()