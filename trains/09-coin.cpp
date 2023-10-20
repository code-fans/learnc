#include <iostream>
#include <cstdio>
using namespace std;
int main() 
{
    freopen("data/input.txt", "r", stdin);
    int daka=0,tishu,jinchen=0,ans=0,a=0,f;
    cin>>f;
    int ti;
    for (int i = 0; i < f; i++)
    {
        cin>>daka;
        cin>>tishu;
        a=0;
        if (daka==0)
        {
            jinchen=0;
        }
        else
        {
            a = tishu >=3 ? 8+(tishu-3)/2 : 0;
            a = a > 20 ? 20 : a;
            ans += ++jinchen >= 4 ? a*2: a;
        }
    }
    cout<<ans<<endl;
    return 0;
}