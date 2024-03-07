#include <iostream>
using namespace std;
int main()
{
    int ans=0,x,y,z,n,m;
    cin>>x>>y>>z>>n>>m;
    for (int i = 0; i <= n/x; i++){
        for (int j = 0; j < (n-i*x)/y; j++){
            if(i+j+(n-i*x-j*y)*z==m)
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}