#include <iostream>
using namespace std;
int main()
{
    int t,a[2];
    long long ans=0;
    a[0]=18;
    a[1]=6;
    cin>>t;
    ans+=(t/7)*((18*5)+6);
    t%=7;
    if (t<=5)
    {
        ans+=18*t;
    }
    else
    {
        ans+=18*5+6;
    }
    cout<<ans<<endl;
    return 0;
}