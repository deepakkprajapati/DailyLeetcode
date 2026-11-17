class Solution:
    """
    @param arg1: String
    @param arg2: Integer
    @return: String
    Time:    O(N^2)
    Space:   O(1)
    Strategy: String-Array Manuplation
    """
    def solve(self, s: str , k: int) -> str:
        while len(s) > k:
            groups = []
            for i in range(0, len(s), k):
                group = s[i:i+k]
                summ = sum(int(x) for x in group)
                groups.append(str(summ))
            s = "".join(groups)
        return s

# ================ 🧪 Local Test Suite ======================================
def run_tests():
    sol = Solution()
    test_cases = [
        (( "11111222223", 3), "135" ),
        (( "00000000",  3) , "000" ),
    ]
    for i, (args, expected) in enumerate(test_cases, 1):
        result = sol.solve(*args)
        status = "✅ PASS" if result == expected else "❌ FAIL"
        print(f"Test {i}: | {status} | Input={args} | Expected={expected} | Got={result}")

if __name__ == "__main__":
    run_tests()