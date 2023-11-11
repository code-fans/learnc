#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    freopen("psum.in","r",stdin);
    freopen("psum.out","w",stdout);
    int n,m,k,ans=0;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>m>>k;
        ans=0;
        for (int b = m; b <= k; b++){
        int l = b;
            while (l!=0){
                if (l%10==1){
                    ans++;
                }
                l/=10;
            }
        }
        cout<<ans<<endl;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}