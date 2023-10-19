#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[30000]={0};
    int ma;
    int n,m,ans=0,b;
    cin>>ma>>n>>m>>b;
    for (int i = 0; i < 300/n; i++)
        a[i*n]++;
    for (int i = 0; i < 300/m; i++)
        a[i*m]++;
    for (int i = 0; i < 300/b; i++)
        a[i*b]++;
    for (int i = 0; i < 300; i++)
        if (a[i]==1)
            ans++;
    cout<<ans<<' ';
    return 0;
}
