#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int a[500], ans1=0,l,ans[500]={0};
    cin>>l;
    for (int i = 0; i < l; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<l;i++)
    {
        if (a[i]%2!=0)
        {
            ans[ans1]=a[i];
            ans1++;
        }
    }
    sort(ans,ans+ans1);
    for (int i = 0; i < ans1-1; i++)
    {
        cout<<ans[i]<<",";
    }
    cout<<ans[ans1-1]<<endl;
    return 0;
}