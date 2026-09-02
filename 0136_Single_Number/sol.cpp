#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    // Strategy: XOR
    // Time:     O(N)
    // Space:    O(N)

    int solve(vector<int>& nums) {
        // Strategy #2 {XOR}
        int result = 0;
        for(auto x : nums){
            result ^= x;
        } 
        return result;

        // Strategy #1
        // set <int> temp = {};
        // for (int i = 0; i < nums.size(); i++){
        //     if(temp.find(nums[i]) != temp.end()){
        //         temp.erase(nums[i]);
        //     }else{
        //         temp.insert(nums[i]);
        //     }
        // }
        // return *temp.begin();
    }
};

struct TestCase {
    vector<int> input1;
    int expected;
};

void run_tests() {
    Solution sol;
    vector<TestCase> testCases{
        {{2,2,1}, 1}, 
        {{4,1,2,1,2}, 4},
        {{1}, 1}
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
