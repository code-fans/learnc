#include <iostream>
using namespace std;
long long ans=0;
int r[100000],a[100000];
void msort(int s,int t){
    if(s==t-1) return ;
    int mid=(s+t)/2;
    
    msort(s,mid);
    msort(mid,t);

    int i=s,j=mid,k=s;

    while (i<mid && j<t){
        if (a[i]<=a[j]){
            r[k]=a[i];
            k++;
            i++;
        }
        else{
            r[k]=a[j];
            ans += mid - i;
            k++;
            j++;
        }
    }
    
    while (i<mid){
        r[k]=a[i];
        i++;
        k++;
    }

    while (j<t){
        r[k]=a[j];
        j++;
        k++;
    }
    for (int i = s; i < t; i++)
        a[i]=r[i];
}

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    msort(0,n);
    cout<<ans<<endl;
    return 0;
}