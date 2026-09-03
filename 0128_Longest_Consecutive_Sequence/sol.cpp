#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    // Strategy: Hash set
    // Time:     O(N)
    // Space:    O(N)

    int solve(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(), nums.end());
        int longstreak = 0;
        for(int x: numset){
            if((numset.find(x-1)) == numset.end()){
                int curr_num = x;
                int curr_streak = 1;
                while((numset.find(curr_num+1) != numset.end())){
                    curr_num++;
                    curr_streak++;
                }
                longstreak = max(curr_streak, longstreak);
            }
        }
        return longstreak;
    }
};

// 2. LOCAL TEST SUITE
struct TestCase {
    vector<int> input1;
    int expected;
};

void run_tests() {
    Solution sol;
    vector<TestCase> testCases{
        {{100,4,200,1,3,2}, 4}, 
        {{0,3,7,2,5,8,4,6,0,1}, 9},
        {{1,0,1,2}, 3}
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
