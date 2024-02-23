#include <iostream>
using namespace std;
int main(){
    int a[999]={0};
    int n;
    cin>>n;
    a[0]=1;
    for (int i = 1; i < n; i++){
        a[i]=1;
        for (int j = 0; j < (i+1)/2; j++){
            a[i]+=a[j];
        }
    }
    cout<<a[n-1]<<endl;
    return 0;
}