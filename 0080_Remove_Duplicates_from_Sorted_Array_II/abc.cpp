#include<iostream>
#include<vector>
#include<string>
using namespace std;

int thefunc(){
    vector<int> nums = {0,0,1,1,1,1,2,3,3}; // [0,0,1,1,2,3,3]
    // for(int max=0,i=1,k=0; i<nums.size(); i++){
    //     if(nums[i]==nums[k]){
    //         max=2;
    //         k++;
    //     }
    // }

    if (nums.size() <= 2) return nums.size();
    
    int k = 2; // We can always keep the first two elements
    
    for (int i = 2; i < nums.size(); i++) {
        // If current element is different from the one at k-2,
        // it means we're allowed to add it (since at most 2 duplicates)
        if (nums[i] != nums[k - 2]) {
            nums[k] = nums[i];
            k++;
        }
    }


    // int max=1,k = 1;
    // for (int i = 1; i < nums.size(); i++){
    //     if(nums[i-1] != nums[i]){
    //         nums[k] = nums[i];
    //         k++;
    //         max=1;
    //     }
    //     else{
    //         max++;
    //     }
    //     if((max<=2)){
    //         nums[k]=nums[i];
    //         k++;
    //     }
    // }
    for (const auto& num : nums) {
        cout << num << " ";
    }
    cout<<endl<<k<<endl;


    return k;
}
int main(){
    cout<<"The program is running."<<endl;
    cout<<thefunc()<<endl;

}