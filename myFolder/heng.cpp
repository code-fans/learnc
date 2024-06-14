#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long a[21000],n,b;
    cin>>n>>b;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    long long c=0,ans=0;
    while (c<b){
        c+=a[ans];
        ans++;
    }
    cout<<ans<<endl;
}