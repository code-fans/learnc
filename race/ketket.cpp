#include <iostream>
using namespace std;
long long jcf(long long n){
    return 1<<n;
}
long long ans(long long n,int p){
    long long p2 = jcf(p);
    long long p3=n & (p2-1);
    p2=p2>>1;
    if(p3>=p2)
        return 0;
    return p2-p3;
}
int main()
{
    long long a,b,c,x, sumX=0;
    cin>>a>>b;
    for (int i = 0; i < b; i++){
        cin>>c;
        long long ans1;
        ans1=ans(a,c);
        sumX+=ans1;
        a+=ans1;
    }
    cout << sumX << endl;
    return 0;
}