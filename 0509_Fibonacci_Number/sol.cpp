#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Strategy: Itertive [Bottom-up Dynamic Programming]
    // Time:     O(N)
    // Space:    O(1)
    int solve(const int n) {
        if (n <2){  return n; }
        int prev0 = 0;
        int prev1 = 1;
        int result = 0;
        for (int i = 2; i <= n; i++){
            result = prev0 + prev1;
            prev0 = prev1;
            prev1 = result;
        }
        return result;
    }
};
struct TestCase {
    int input1;
    int expected;
};
void run_tests() {
    Solution sol;
    vector<TestCase> testCases{
        {2, 1}, 
        {3, 2},
        {4, 3}
    };
    for(size_t i = 0; i < testCases.size(); ++i) {
        int result = sol.solve(testCases[i].input1);
        bool isCorrect = (result == testCases[i].expected);
        cout << (isCorrect ? "✅" : "❌") << " Test #" << i;
        cout << " | Expected: " << testCases[i].expected 
             << " | Result: " << result << endl;
    }
}
int main() {
    run_tests();
    return 0;
}