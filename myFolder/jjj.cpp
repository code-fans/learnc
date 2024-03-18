#include <iostream>
using namespace std;
int main()
{
    long long n,ans=0;
    int a,b;
    cin>>a>>b;
    n=a;
    for (int i = 0; i < b; i++){
        n=n*n;
        ans=n;
        for (int j = 1; j <= n; j++){
            ans*=j;
        }
        n=ans;
    }
    cout<<n;
}