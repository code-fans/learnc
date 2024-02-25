#include <iostream>
using namespace std;
int main()
{
    int a,b,m,n,ans=0,ans1=0;
    cin>>a>>b>>m>>n;
    ans1+=a+b;
    for (int i = 2; i < n; i++){
        ans=a+b;
        a=b;
        b=ans;
        ans1+=ans;
        if(ans>=m)
            break;
    }
    cout<<ans1<<endl;
    return 0;
}