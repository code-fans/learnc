#include <iostream>
using namespace std;
void qsort(int l,int r,int a[]){
    int mid=a[(r+l)/2];
    int i=l,j=r;
    do
    {
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j){
            int p=a[i];
            a[i]=a[j];
            a[j]=p;
            i++;
            j--;
        }
    } while (i<=j);
    if(l<j) qsort(l,j,a);
    if(i<r) qsort(i,r,a);
}
int main(){
    int n,a[1000]={0};
    cin>>n;
    for (int i = 1; i <= n; i++){
        cin>>a[i];
    }
    qsort(1,n,a);
    for (int i = 1; i <= n; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    cout<<"done!"<<endl;
    return 0;
}