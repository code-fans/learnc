#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,a[10000];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int ans=n,c=-111;
    for (int i = 0; i < n; i++){
        if (c==a[i]){
            ans--;
        } else {
            c=a[i];
        }
    }
    cout<<ans<<endl;
    c=-1111;
    for (int i = 0; i < n; i++){
        if (c!=a[i]){
            cout<<a[i]<<' ';
            c=a[i];
        }
    }
    return 0;
}