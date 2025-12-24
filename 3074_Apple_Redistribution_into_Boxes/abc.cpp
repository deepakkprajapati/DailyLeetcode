#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int thefunc(){
    vector<int> apple = {5,5,5}, capacity = {2,4,2,7};
    
    int k=0, sum=0;
    // get the sum of the apple vector to check with capacity
    for(int i=0; i<apple.size(); i++){ 
        sum += apple[i];
    }
    // sorting the capacity vector in Descending order to get maximum capacity at starting positions 
    sort(capacity.begin(), capacity.end(), greater<int>());
    int g=0;
    for (int i=0; i<capacity.size(); i++){
        g = g+capacity[i];
        k++;                    //increment every time we add new capacity 
        if(g>=sum)break;        //break when greed is greater(capacity) then sum
    }
 
    return k;
}
int main(){
    cout<<"The program is Working."<<endl;
    cout<<thefunc()<<endl;
}