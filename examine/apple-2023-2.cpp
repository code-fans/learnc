#include <iostream>
#include <algorithm>
#include <string>
int a[100000000];
using namespace std;
int main()
{
    long long n, s=0,ans=0,ans1=-1,p,l=0;
    cin>>n;
    while (l<n)
    {
        s++;
        p=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i]==0)
            {
                p++;
                if (p%3==1)
                {
                    a[i]=s;
                    l++;
                }
                
            }
        }
    }
    cout<<s<<' '<<a[n-1]<<endl;
    return 0;
}