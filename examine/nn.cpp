#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    int hang,m=2,n,k=0,l=0;
    cin>>n;
    while (m<=n)
    {
        k=0;
        while (n%m==0) {
            k++;
            n/=m;
        }
        if(l!=0&&k!=0)
            cout<<'*';
        if(k>=2){
            cout<<m<<'^'<<k;
            l++;
        }
        else if(k==1){
            cout<<m;
            l++;
        }
        m++;
    }
    
    return 0;
}