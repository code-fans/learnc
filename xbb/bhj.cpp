#include <iostream>
using namespace std;
int ans=0;
int b[100100], a[100100];
void msort(int l,int r,int a[])
{
    if(r-l<=1)
        return ;
    int mid=(l+r)/2;
    msort(l,mid,a);
    msort(mid,r,a);
    int ll=l,rr=mid;
    int len=0;
    while (ll<mid && rr<r){
        if (a[ll]>a[rr]){
            b[len]=a[rr];
            rr++;
            ans+=mid-ll;
        }
        else{
            b[len]=a[ll];
            ll++;
        }
        len++;
    }
    while (ll<mid){
        b[len]=a[ll];
        ll++;
        len++;
    }
    while (rr<r){
        b[len]=a[rr];
        rr++;
        len++;
    }
    for (int i = l; i < r; i++){
        a[i]=b[i-l];
    }
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    msort(0,n,a);
    cout<<ans<<endl;
    return 0;
}