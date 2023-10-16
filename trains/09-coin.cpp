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
        if (daka==0)
        {
            jinchen=0;
        }
        else
        {
            if (tishu>=3)
            {
                if (++jinchen>=4)
                {
                    ans+=16;
                    a+=16;
                }
                else
                {
                    ans+=8;
                    a+=8;
                }
                tishu-=3;
            }
            if (tishu>3)
            {
                ans+=tishu/2;
                a+=tishu/2;
                if (a>40)
                {
                    ans-=a-40;
                }
                a=0;
            }
            
            
        }
        cout<<ans<<endl;
        
    }
    return 0;
    
}