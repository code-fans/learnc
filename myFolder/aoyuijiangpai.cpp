#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long n,a[100000],x,ans[100000]={0};
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i]==0)
            x=i;
    }
    for (int i = 0; i < n; i++){
        for(int j=0; j<n; j++){
            if(a[j]==i+1){
                ans[x]=i+1;
                x=j;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}