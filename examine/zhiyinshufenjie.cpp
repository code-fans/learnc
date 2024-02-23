#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    int n,a[10000];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int n1=n;
    int a1;
    a1=a[0];
    for (int i = 1; i < n1; i++){
        if(a[i]==a1){
            n1--;
        }
        else{
            a1=a[i];
        }
    }
    cout<<n1<<endl;
    a1=a[0];
    cout<<a1<<' ';
    for (int i = 1; i < n; i++){
        if(a[i]!=a1){
            cout<<a[i]<<' ';
            a1=a[i];
        }
    }
    cout<<endl;
    return 0;
}