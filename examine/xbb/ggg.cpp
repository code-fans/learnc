#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,k,a[10000];
    cin>>n>>k;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int i=0,ans=0;
    while (i<n){
        int s=a[i];
        int j=i+1;
        while (j<n && a[j] <= a[i] + k){
            s+=a[j];
            j++;
        }
        if(s>ans)
            ans=s;
        while(i<n-1 && a[i+1]==a[i]) i++;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}