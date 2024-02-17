#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int dfs(int l, int m, int n){
    if(n==1){
        return l<m?0:1;
    }
    if(m==0)
        return 1;
    int ans=0;
    for (int i = min(l,m); i>=0; i--){
        ans += dfs(i, m-i, n-1);
    }
    return ans;
}
int main()
{
    int t;
    int m,n;
    cin>>t;
    for (int i = 0; i < t; i++){
        cin>>m>>n;
        cout<<dfs(m, m, n)<<endl;
    }
    return 0;
}