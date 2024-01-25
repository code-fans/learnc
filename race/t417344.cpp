#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    double ans=0;
    long long n;
    cin>>n;
    for (long long i = 1; i <= n; i++){
        if(i%2==1)
            ans+=1.0/double(i);
        else
            ans-=1.0/double(i);
    }
    printf("%0.4f\n",ans);
    return 0;
}