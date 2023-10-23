#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[10000];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int ans=0,m=1;
    for (int i = 0; i < n; i++)
    {
        ans=0;
        while (a[i]==a[m])
        {
            ans++;
            if (ans>n/2)
            {
                cout<<a[m]<<endl;
                return 0;
            }
            m++;
        }
    }
    cout<<"no"<<endl;
        
}