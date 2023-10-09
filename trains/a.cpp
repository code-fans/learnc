#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a[7][2],ans=0,maxday;
    for(int i=0;i<7;i++)
        for(int m=0;m<2;m++)
            cin>>a[i][m];
    maxday=a[0][1]+a[0][0];
    ans=1;
    for (int i = 1; i < 7; i++)
    {
        if (maxday<a[i][0]+a[i][1])
        {
            maxday=a[i][0]+a[i][1];
            ans=i+1;
        }
    }
    if(maxday<=8)
        ans=0;
    cout<<ans<<endl;
    return 0;   
}