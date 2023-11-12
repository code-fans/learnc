#include <iostream>
using namespace std;
int main()
{
    int n ,k, a[100000],ans=0,nxts=0;
    cin>>n>>k;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        if (a[i]>k)
            nxts++;
        else
            nxts=0;
        if (ans<nxts)
            ans=nxts;
    }
    cout<<ans<<endl;
    return 0;
}