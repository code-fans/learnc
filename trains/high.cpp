#include <iostream>
using namespace std;
int main()
{
    int n,k,a[1000000],ans=0;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (i%k==0){
            ans+=a[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}