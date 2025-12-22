#include<iostream>
#include<vector>
#include<string>
using namespace std;

int thefunc(){
    vector<string> strs = {"xga","xfb","yfa"};
    int k=0;
    int r =strs.size();
    int c =strs[0].size();
    for(int j=0; j<c; j++){
        for(int i=1; i<r; i++){
            cout<<strs[i][j]<<" "<<strs[i-1][j]<<endl;
            if(strs[i][j] < strs[i-1][j]){
                k++;
                break;
            }
        }
        if(k==0)return k;
    }
    return k;
}
int main(){
    cout<<"The program is Working."<<endl;
    cout<<thefunc()<<endl;
}