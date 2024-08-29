#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long d[3] = {1,1};
    long long total ,ans=2 ,sum=2 ;
    cin>>total;
    total-=2;
    while (total>0){
        sum = d[(ans-1)%3] + d[(ans-2)%3];
        total -= sum;
        d[ans%3] = sum;
        if(total>0) ans ++;
    }
    cout<<ans<<endl;
    return 0;
}