#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for (int i = 0; i < t; i++){
        cin>>n;
        int a[10000];
        long long b,b1,b2;
        for (int j = 0; j < n; j++){
            cin>>a[j];
        }
        sort(a,a+n);
        b1=a[1];
        b2=a[0]+a[1]+a[2];
        if(n<=2)
            cout<<a[n-1]<<endl;
        else{
            for (int j = 3; j < n; j++){
                int ff1=b2+a[0]+a[j];
                int ff2=b1+a[0]+a[j]+a[1]+a[1];
                b1=b2;
                b2=min(ff1,ff2);
            }
            cout<<b2<<endl;
        }
    }
    return 0;
}