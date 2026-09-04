#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Strategy: Prefix & suffix
    // Time:     O(N)
    // Space:    O(N)

    int solve(vector<int>& nums, int k) {
        int curr_max = nums[0];
        vector<int> suffixmin(nums.size());
        suffixmin[nums.size()-1] = nums[nums.size()-1];

        for (int i = nums.size()-2; i >=0; i--){
            suffixmin[i] = min(suffixmin[i+1], nums[i]);
        }
        for (int i = 0; i < nums.size(); i++){
            curr_max = max(nums[i], curr_max);
            if(k >= curr_max - suffixmin[i])
                return i;
        }
        return -1;
    }
};

struct TestCase {
    vector<int> input1;
    int input2; 
    int expected;
};

void run_tests() {
    Solution sol;
    vector<TestCase> testCases{
        {{5,0,1,4},3, 3}, 
        {{3,2,1},1, -1},
        {{0},0, 0}
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