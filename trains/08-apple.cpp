#include<iostream>
using namespace std;
int c(int a)
{
    return a<0? -a :a;
    
}
int main()
{
    int n;
    cin>>n;
    int apple;
    cin>>apple;
    int a=n,ans=0;
    int x ;
    for (int i = 0; i < apple; i++)
    {
        cin>>x;
        ans+=c(a-x);
        a=x;
    }
    cout<<ans<<endl;
    return 0;
    
}