#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(){
    long long x,y,z;
    cin>>x>>y>>z;
    long long a=1,b[100000]={0};
    for (long long i = 0; i < z; i++){
        b[i] = a * y;
        if(i>=1+x){
            a+=b[i-x-1];
        }
    }
    cout<<a<<endl;
    return 0;
}