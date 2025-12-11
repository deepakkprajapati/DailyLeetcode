#include<iostream>
#include <vector>
using namespace std;

int thefunc(){
    // vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    // int m = 3, n = 3;
    vector<int> nums1 = {2,0}, nums2 = {1};
    int m = 1, n = 1;

    for(int i=0; i<(n) ; i++,m++){
        // cout<<nums1[m]<<endl<<nums2[i]<<endl;
        nums1[m]=nums2[i];
    }
    int s =nums1.size();
    for(int i=0; i<s-i; i++){
        for(int j=0; j<s-i-1; j++){
            if(nums1[j]>nums1[j+1]){
                int t= nums1[j+1];
                nums1[j+1]=nums1[j];
                nums1[j]=t;
            }
        }
    }
    for (const auto& num : nums1) {
    cout << num << " ";
}
cout << endl;

    return 0;
}
int main(){
    cout<<"The Program is working.."<<endl;
    cout<<thefunc();
    return 0;
}