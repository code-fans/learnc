#include <iostream>
#include <algorithm>
#include <string>
int a[100000000];
using namespace std;
int main()
{
    long long n, s=0,ans=0,ans1=-1,p=1,l=0;
    cin>>n;
    while (l!=n)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i]==0)
            {
                a[i]=p;
                l++;
                if (a[i]%3==0)
                {
                    a[i]=p;
                    l++;
                }
                
            }
        }
        p++;
        s++;

    }
    cout<<s<<' '<<a[n-1]<<endl;
    return 0;
}