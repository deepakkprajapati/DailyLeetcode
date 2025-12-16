#include<iostream>
#include <vector>
using namespace std;

int thefunc(){
    // vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    
    if(nums.empty()) return 0;
    int k = 1;
    for (int i = 1; i < nums.size(); i++){
        if(nums[i-1] != nums[i]){
            nums[k] = nums[i];
            k++;
        }
    }
    for (const auto& num : nums) {
        cout << num << " ";
    }
    cout<<endl<<k<<endl;
    return k;
}
int main(){
    cout<<"The Program is working.."<<endl;
    cout<<thefunc();
    return 0;
}