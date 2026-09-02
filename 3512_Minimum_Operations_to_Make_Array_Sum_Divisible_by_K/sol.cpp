#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Strategy: sumofarray%k
    // Time:     O(N)
    // Space:    O(1)

    int solve(vector<int>& nums, int k) {
        int sum = 0;
        for(int x: nums){
            sum += x;
        }
        return sum%k;
    }
};

// 2. LOCAL TEST SUITE
struct TestCase {
    vector<int> input1;
    int input2; 
    int expected;
};

void run_tests() {
    Solution sol;
    vector<TestCase> testCases{
        {{3, 9, 7}, 5, 4}, 
        {{4, 1, 3}, 4, 0},
        {{3, 2}, 6, 5}
    };

    for(size_t i = 0; i < testCases.size(); ++i) {
        int result = sol.solve(testCases[i].input1, testCases[i].input2);
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
