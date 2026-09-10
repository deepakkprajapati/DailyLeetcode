#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    // Strategy: DP(iterative bottom-up)
    // Time:     O(N)
    // Space:    O(1)

    long solve(const vector<int>& nums) {
        long result = 0;
        long prev =0, prevprev =0;
        for (int i = 0; i < nums.size(); i++){
            result = max( prevprev +nums[i], prev);
            prevprev = prev;
            prev = result;
        }
        return result;
    }
};
struct TestCase {
    vector<int> input1;
    long expected;
};
void run_tests() {
    Solution sol;
    vector<TestCase> testCases{
        {{1,2,3,1}, 4}, 
        {{2,7,9,3,1}, 12},
        {{2,1,1,2}, 4}
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