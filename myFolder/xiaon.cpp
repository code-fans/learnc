#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
void sawp(int a[],int i,int j)
{
    int p=a[i];
    a[i]=a[j];
    a[j]=p;
}
void qsort2(int a[], int l,int r){

    int i=l, j=r;
    int mid=a[(l+r)/2];
    do
    {
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j){
            sawp(a,i,j);
            i++;
            j--;
        }
    } while (i<=j);

    if(l < j) 
        qsort2(a,l, j);
    if(i < r)
        qsort2(a,i,r);
}
int main()
{   
    int n;
    cin>>n;
    int a[100010];
    for (int i = 1; i <= n; i++){
        cin>>a[i];
    }                 
    
    qsort2(a,1, n); 
    for (int i = 1; i <= n; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    //stable_sort();
    return 0;
}
/*
9 
3 5 8 1 2 9 4 7 6
*/ 