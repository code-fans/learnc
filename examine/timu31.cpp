#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int a[10000],b[10000],ans=0;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    int i1=0;
    for (int i = 0; i < n; i++){
        bool hasf=false;
        while (i<n){
            if(b[i1]<a[i]){
                hasf=true;
                break;
            }
            i++;
        }
        ans+=hasf;
        i1++;
    }
    cout<<ans<<endl;
    return 0;
}