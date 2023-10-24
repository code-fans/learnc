#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,ans=0,yz5=0, yz2=0, l,m;
    cin>>n>>m;
    for (int i = n; i <= m; i++)
    {
        l= i;
        while(l>0 && l%5==0)
        {
            l/=5;
            yz5++;
        }
        
        while(l>0 && l%2==0)
        {
            l/=2;
            yz2++;
        }
    }
    cout<<min(yz2,yz5)<<endl;
    return 0;
}