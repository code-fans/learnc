
#include <iostream>
using namespace std;

int a[10002]={0};
int main()
{
    int n;
    cin>>n;
    int ans=1;
    for (int i = 1; i <=n/2; i++){
        a[i]=1;
        for (int j = 1; j <= i/2; j++){
            a[i]+=a[j];
        }
        // cout<<i<<" -> "<<a[i]<<endl;
        ans+=a[i];
    }
    cout<<ans<<endl;
    return 0;
}