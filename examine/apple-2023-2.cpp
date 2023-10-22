#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long n, s=0,ans=0,ans1=-1;
    cin>>n;
    while (n>0)
    {
        ans++;
        if ((n-1)%3==0 && ans1==-1)
        {
            ans1=ans;
        }
        n-= 1+(n-1)/3;
    }
    cout<<ans<<' '<<ans1<<endl;
    return 0;
}