#include <iostream>
using namespace std;
int ans=0; 
void bs(int a[],int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(j!=n-1&&a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                ans++;
            }
        }
        
    }
}
void msort(int a[],int n,int s){
    if(n==s-1) return ;
    int mid=(n+s)/2;
    msort(a,n,mid);
    msort(a,mid,s);
    
    int i=n,j=mid,k=n,b[10000];
    while (i<mid && j<s){
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
            ans += mid-i;
        }
    }
    while (i<mid){
        b[k]=a[i];
        i++;
        k++;
    }
    while (j<s){
        b[k]=a[j];
        j++;
        k++;
    }
    for (i = n; i < s; i++) a[i]=b[i];
    
}
int main()
{
    int n,a[100001];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    msort(a,0,n);
    cout<<ans<<endl;
    return 0;
}