#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;
int ans[100000];
int main(){
    int n,a[10000]={0};
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    int n2;
    string str;
    cin>>n2>>str;
    for (int i = 1; i <= n2; i++){
        for (int j = 1; j <= n2; j++){
            int l=i-3*j+1;
            if(l<=0)break;
            if(str.substr(l-1,3)=="abc") ans[i]=max(ans[i-1],ans[l]+a[j]);
            else break;
        }
    }
    cout<<ans[n2]<<endl;
    return 0;
}
/*
3 
3 1 2
13
dabcabcabcabz
*/