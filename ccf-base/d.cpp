#include <iostream>
using namespace std;
int main()
{
    int a[2][7],ans=0,ans2=0,m=0;
    for (int k = 0; k < 7; k++)
    {
        cin>>a[0][k]>>a[1][k];
    }
    for (int i = 0; i < 7; i++)
    {
        if (a[0][i]+a[1][i]>=8||a[0][i]+a[1][i]>m)
        {
            m=a[0][i]+a[1][i];
            ans=i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}


