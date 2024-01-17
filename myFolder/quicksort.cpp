#include <iostream>
using namespace std;
void gsort(int s ,int t, int a[]){
   
    if(s==t-1) return ;
    
    int mid=(s+t)/2;
    gsort(s, mid,a);
    gsort(mid,t,a);
    int i=s, j=mid,k=s;
    int r[100];
    while (i<mid && j<t){
        if (a[i]<=a[j]){
            r[k]=a[i];
            k++;
            i++;
        }
        else{
            r[k]=a[j];
            j++;
            k++;
        }
    }
    while (i<mid)
    {
        r[k]=a[i];
        k++;
        i++;
    }
    while (j<t  )
    {
        r[k]=a[j];
        k++;
        j++;
    }
    for (int i = s; i < t; i++)
        a[i]=r[i];
}
int main(){
    int n,a[1000]={0};
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    gsort(0, n, a);
    for (int i = 0; i < n; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    cout<<"done!"<<endl;
    return 0;
}