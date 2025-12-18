#include<iostream>
#include<vector>
#include<string>
using namespace std;

int thefunc(){
    vector<int> nums = {2,2,1,1,1,2,2};
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                // Manual swap without std::swap
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    // Optimal: Boyer-Moore Voting Algorithm (O(n) time, O(1) space)
    // Maintain a candidate and a count.
    // If count == 0, set candidate to current element.
    // If current == candidate, increment count; else decrement.
    // At the end, candidate is the majority (no need for second pass since it's guaranteed).
    for (const auto& num : nums)
        cout<<num<<" ";
    cout<<endl<<n<<endl;
    return nums[n/2];
}
int main(){
    cout<<"The program is running."<<endl;
    cout<<thefunc()<<endl;

}