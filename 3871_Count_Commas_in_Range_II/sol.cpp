#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Strategy: Maths
    // Time:     O(log N)
    // Space:    O(1)

    long long solve(const long long n) {
        long long result = 0;
        for (size_t i = 1000; i <= n; i *=1000){
            result += n-i +1;
        }return result;
    }
};
struct TestCase {
    long long input1;
    long long expected;
};
void run_tests() {
    Solution sol;
    vector<TestCase> testCases{
        {1002, 3}, 
        {998, 0},
        {1004590, 1008182}
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