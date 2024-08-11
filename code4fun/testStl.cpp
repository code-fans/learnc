
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int a[100],n,k;
    cin>>n>>k;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    int ans=0;
    sort(a,a+n);
    int l=0,r=n-1;
    while (l<r){
        int a1=a[l]+a[r];
        if (abs(a1-k)<abs(ans-k)||((abs(a1-k)==abs(ans-k))&&a1<ans)){
            ans=a1;
        }
        if(a[l]+a[r]>k)
            r--;
        else
            l++;
    }
    
    cout<<ans<<endl;
    return 0;
}
