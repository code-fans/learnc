#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[10000], ans=1,l;
    cin>>l;
    for (int i = 0; i < l; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<l;i++)
    {
        if(a[i]-1==a[i-1])
            ans++;
        else
            ans=1;
    }
    cout<<ans<<endl;
    return 0;
}