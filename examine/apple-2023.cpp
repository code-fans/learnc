#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long a,ans=-1,l,n=0;
    cin>>a;
    while (a>0)
    {
        n++;
        l=1+(a-1)/3;
        if ((a-1)%3==0 && ans <0 )
        {
            ans=n;
        }
        a-=l;
    }
    if (ans<0)
    {
        ans=n;
    }
    
    cout<<n<<' '<<ans<<endl;
    
    return 0;
}