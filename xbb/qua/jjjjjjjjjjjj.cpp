#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
const int N = 2e5+5;
const int mod = 1e9+7;
int n,a,b,c;
int f[N<<1];
int ans;
int main()
{
    scanf("%d%d%d%d",&n,&a,&b,&c);
    f[n] = 1;
    for (int i = n; i > c; i--){
        if( f[i]==0)
            continue;
        f[i - a] = (f[i - a] + f[i]) % mod;
        f[i - b] = (f[i - b] + f[i]) % mod;
    }     
    for (int i = min(c-a,c-b); i <= c; i++)
        ans = (ans + f[i]) % mod;
    cout<<ans<<endl;
    return 0;
}