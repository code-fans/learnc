#include <iostream>
#include <string>
#include <deque>

using namespace std;
int main(){
    int n,a,b[1100]={0},size=0,rz=1;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a;
        while(size==0 || a>b[size-1]){
            b[size]=rz;
            rz++;
            size++;
        }
        
        if(a==b[size-1])
            size--;
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}