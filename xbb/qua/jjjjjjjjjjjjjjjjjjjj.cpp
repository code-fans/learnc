#include <bits/stdc++.h>
using namespace std;
long long x,X[100],y,Y[100],L0,m,n,L[110000], L2[110000],ans=0;
int main(){
    cin>>x;
    for(int i=0;i<x;i++) cin>>X[i];
    cin>>y;
    for(int i=0;i<y;i++) cin>>Y[i];
    cin>>L0>>m>>n;
    L[0] = L2[0] = L0;
    for (int i = 1;i < n;i++){L[i] = (L[i - 1] * X[i % x] + Y[i % y]) % m;L2[i] = L[i];}
    sort(L2,L2+n);
    for (int i = 0; i < n; i++){int p = upper_bound(L2, L2+n, L[i]) - L2;if(ans < i-p+2) ans = i-p+2;}
    cout<<ans<<endl;
    return 0;
}