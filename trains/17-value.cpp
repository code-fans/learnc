#include <iostream>
using namespace std;
int main()
{
    int n, m, ryz=0,max=0,ans=0;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        int k;
        ryz=0;
        for(int j = 0; j < m; j++)
        {
            cin>>k;
            if (k%6==0)
            {
                ryz+=k;
            }
        }
        if (max<ryz)
        {
            max=ryz;
            ans=i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
    
}