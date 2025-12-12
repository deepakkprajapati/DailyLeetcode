#include<iostream>
#include <vector>
using namespace std;

int thefunc(){
    // vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    vector<int> nums = {3,2,2,3};
    int val = 3, s =nums.size();
    for(int i=0; i<s; i++){
        if(nums[i]==val){
            nums.erase(nums.begin()+ i);
            i--,s--;
        }
    }
    for (const auto& num : nums) {
        cout << num << " ";
    }
    cout<<endl;
    return 0;
}
int main(){
    cout<<"The Program is working.."<<endl;
    cout<<thefunc();
    return 0;
}