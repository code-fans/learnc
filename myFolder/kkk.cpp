#include <iostream>
#include <cstdio>
using namespace std;
int duanshu(int a[], int su,int n){
    int ans=1, l=0;
    for (int i = 0;i< n; i++){
        if(l+a[i]>su){
            ans++;
            l = a[i];
        } else {
            l += a[i];
        }
    }
    return ans;
}
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int a[100020];
    int maxl=0,minl=0;
    for (int i = 0; i < n; i++){
        scanf ("%d",a+i);
        if(minl<a[i]){
            minl=a[i];
        }
    }
     
    maxl= (n/r+1) * minl;
    while (minl+1 < maxl){
        int mid=(minl+maxl)/2;
        if(duanshu(a, mid, n) > r)
            minl=mid+1;
        else
            maxl=mid;
    }
    if(duanshu(a,minl,n)>r)
        printf("%d\n", maxl);
    else 
        printf("%d\n", minl);
    return 0;
}