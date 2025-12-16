#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

vector<string> thefunc(){
    //vector<string>& code, vector<string>& businessLine, vector<bool>& isActive 
    // vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    vector<string> code = {"SAVE20","","PHARMA5","SAVE@20"}, businessLine = {"restaurant","grocery","pharmacy","restaurant"};
    vector<bool> isActive = {true,true,true,true};
    vector<string> cat = {"electronics", "grocery", "pharmacy", "restaurant"};
    
    vector<string> o;
    vector<bool> bl ;
    vector<bool> co ;
    int s = code.size();

    for(int i=0; i<s; i++){
        bool t=false;
        for(int j=0; j<s; j++){
            if(businessLine[i] == cat[j]){
                t=true;
                break;
            }
        }
        bl.push_back(t);
        bool tt=false;
        for (unsigned char c : code[i]){ 
            if (false == (isalnum(c) && c == '_')){
                tt==false;
                break;
            }
            else {
                co.push_back(tt);
                break;
            }
        }
    }
    for (const auto& num : bl) {
    cout << num << " ";
    }
    cout << endl;
    for (const auto& num : co) {
    cout << num << " ";
    }

    // for(int i=0; i<s; i++){
    //     if(isActive[i]){
    //         if(bl[i]){
    //             if(){

    //             }
    //         }
        
    //     }
    // }


    cout << endl;
    return o;
}
int main(){
    cout<<"The Program is working.."<<endl;
    // cout<<
    thefunc();
    return 0;
}