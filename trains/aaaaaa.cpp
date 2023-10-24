#include <iostream>
using namespace std;
struct ys
{
    int yz;
    int cs;
};
ys ans[1001];
int main()
{
    int a;
    int l=0,u=0;
    int zs=0;
    cin>>a;
    for (int i = 2; i*i <= a; i++)
    {
        if(a%i==0){
            l=0;
            while (a%i==0)
            {
                l++;
                a=a/i;
            }
            zs+=l;
            ans[u].yz=i;
            ans[u].cs=l;
            u++;
        }
    }
    if(a>1){
        ans[u].yz=a;
        ans[u].cs=1;
        u++;
        zs++;
    }
    
    cout<<zs<<endl;
    for (int i = 0; i < u; i++)
    {
        cout<<ans[i].yz<<' '<<ans[i].cs<<endl;
    }
    return 0;
}