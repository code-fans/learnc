#include <bits/stdc++.h>
using namespace std;
int ans[5500000]={0},n;
int main(){
    cin>>n;
    int cnt=0;
    for(int i = 1;1;i++){
        for(int j=i;j<=5500000;j+=i)
            ans[j]++;
        if(ans[i]==4)
            cnt++;
        if(cnt==n){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}