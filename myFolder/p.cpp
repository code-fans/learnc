#include <iostream>
#include <cstdio>
using namespace std;
long long rf(long long a,long long b,long long c[],long long s){
    if(a==b-1) return a;
    long long mid=(a+b)/2;
    if(s==c[mid]) return mid;
    if(s>c[mid]) return rf(mid,b,c,s);
    return rf(a,mid,c,s);
    
}
int main()
{
    long long a,b[1000000];
    scanf("%lld",&a);
    for (long long i = 0; i < a; i++){
        scanf("%lld",b+i);
    }
    long long k,s;
    scanf("%lld",&k);
    for (int i = 0; i < k; i++){
        scanf("%lld",&s);
        long long wz=rf(0,a,b,s);
        if(b[wz]>s && wz>0){
            if(s-b[wz-1]<b[wz]-s)
                wz--;
        } else if(b[wz]<s && wz<a-1){
            if(b[wz+1]-s<s-b[wz])
                wz++;
        }
        printf("%lld\n",b[wz]);
    }
    return 0;
}