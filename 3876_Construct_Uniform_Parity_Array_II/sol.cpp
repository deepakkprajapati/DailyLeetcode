#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    // Strategy: Minimum tracking with condtion filtering/ Two-pass baseline approach.
    // Time:     O(N)
    // Space:    O(N)

    int solve(const vector<int>& nums1) {
        int mini = __INT_MAX__;
        for(int x: nums1){
            mini = min(mini, x);
        }
        if(mini %2 ==0){
            for(int x: nums1){
                if(x %2 != 0){
                    return false;
                }
            }
        }
        return true;
    }
};
struct TestCase {
    vector<int> input1;
    bool expected;
};
void run_tests() {
    Solution sol;
    vector<TestCase> testCases{
        {{1, 4, 7}, true}, 
        {{2, 3}, false},
        {{4, 6}, true}
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