#include <iostream>
#include <cmath>
using namespace std;

int thefunc(){
    int n=10;
    int c2,sr,o=0;
    for(int a=1; a<=n; a++){
        for(int b=1; b<=n; b++){
            c2 = a*a + b*b;
            // cout<<sq<<endl;
            if(sq<=n*n){
                sr = sqrt(sq);
                if(sr*sr == sq)
                o++;
            }
        }
    }
    return o;
}

int main() {
    cout<<"The Program is working!!" << endl;
    cout<<thefunc() <<endl;
    return 0;
}
