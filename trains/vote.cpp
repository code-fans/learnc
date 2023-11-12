#include <iostream>
using namespace std;
int main()
{
    int a[21],n;
    long long ans=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    n=n/2+1;
    for (int i = 0; i < n; i++)
    {
        ans+=a[i]/2+1;
    }
    cout<<ans<<endl;
    return 0;
}