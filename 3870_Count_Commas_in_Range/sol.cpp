#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Strategy: [Insert Strategy Name]
    // Time:     O(1)
    // Space:    O(1)

    int solve(const int n) {
        return max(0, n-999);
    }
};
struct TestCase {
    int input1;
    int expected;
};
void run_tests() {
    Solution sol;
    vector<TestCase> testCases{
        {1002, 3}, 
        {998, 0}
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