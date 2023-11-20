#include<iostream>
using namespace std;
int q(int a)
{
    int ans;
    ans=a/70;
    if (a%70!=0)
        ans++;
    return ans;
}
int main()
{
    int n,a;
    cin>>n;
    int ans=0,ans1=0;
    for (int i = 0; i < n; i++){
        cin>>a;
        ans1+=q(a);
    }
    ans+=ans1/10;
    ans1=ans1%10;
    cout<<ans<<"."<<ans1<<endl;
    return 0;
}