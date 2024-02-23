#include <iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    long long ans=0;
    for (int i = 1; i <= n; i++){
        int c=i;
        while (c!=0){
            if(c%10==x)
                ans++;
            c/=10;
        }
    }
    cout<<ans<<endl;
    return 0;
}