#include <iostream>
using namespace std;
long long ans(long long b,long long p,long long k){
    if(p==1)
        return b;
    long long a=ans(b,p/2,k);
    a = a*a %k;
    return p & 1 ? a*b%k : a;
}

int main()
{
    long long b,p,k;
    cin>>b>>p>>k;
    cout<<b<<"^"<<p<<' '<<"mod"<<' '<<k<<'='<<ans(b%k,p,k)<<endl;
    return 0;
}