#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;

int thefunc(){
    vector<string> strs = {"cba","daf","ghi"};
    int r = strs.size();
    int c = strs[0].size();
    int k=0;
    for(int j=0; j<c; j++){
        for(int i=1; i<r; i++){
            if(strs[i][j] < strs[i-1][j]){
                k++;
                break;
            }
        }
    }
    return k;
}
int main(){
    cout<<"The Program is Working."<<endl;
    cout<<thefunc()<<endl;
}