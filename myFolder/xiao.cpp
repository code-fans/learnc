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
void bsort(int a[],int n)
{
    for (int i = 0; i < n-1; i++){
        bool nhm=true;
        for (int j = 1; j < n-i; j++){
            if(a[j-1]>a[j]){
                sawp(a,j-1,j);
                nhm=false;
            }
        }
        if(nhm)
            break;
    }
}
void ssort(int a[],int n)
{
    int min,mini;
    for (int i = 0; i < n-1; i++){
        min=a[i];
        mini=i;
        for (int j = i+1;j < n; j++){
            if(min<a[j]){
                min=a[j];
                mini=j;
            }
        }
        sawp(a,i,mini);
    }
}
void isort(int a[],int n){
    for (int i = 1; i < n; i++){
        int p=a[i];
        int j=i;
        while (j > 0 && a[j-1] > p){
            a[j] = a[j-1];
            j--;
        }
        a[j]=p;
    }
}

void qsort(int a[],int l,int r){
    if(r-l<2)
        return;
    int n = r-1, r1 = l, r2=r-2;
    do
    {
        while (a[r1]<a[n]) r1++;
        while (a[r2]>a[n]) r2--;
        if(r1<r2){
            sawp(a,r1,r2);
            r1++;
            r2--;
        }
    } while (r1 < r2);

    //if(r1<n)
    sawp(a, r1, n);

    qsort(a, l, r1-1 );
    qsort(a, r1, r);
}

void qsort2(int a[],int l,int r){

    int l1=l,r1=r-1, mid=a[(r+l)/2];
    do
    {
        while(a[l1]<mid && l1!=r1) l1++;
        while(a[r1]>mid && r1!=l1) r1--;
        sawp(a,l1,r1);
    } while (l1<r1);
    if(l1-1 >l) qsort2(a,l,l1);
    if(l1 < r-1) qsort2(a,l1,r);
}

void qsort3(int a[],int l,int r)
{
    int i,j,mid,p;
    i=l; j=r;
    mid= a[(l+r)/2];
    do
    {
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j)
        {
            p=a[i]; a[i]=a[j]; a[j]=p;
            i++;j--;
        }
    } while (i<=j);
    if(l<j) qsort3(a,l, j);
    if(i<r) qsort3(a, i, r);
}

void qsort4(int a[],int l,int r){
    if(r-l<2)
        return;
    int mid = a[(l+r)/2], r1 = l, r2=r-1;
    do
    {
        while (a[r1]< mid) r1++;
        while (a[r2]> mid) r2--;
        if(r1<r2){
            sawp(a,r1,r2);
            r1++;
            r2--;
        }
    } while (r1 < r2);

    qsort(a, l, r2);
    qsort(a, r1, r);
}


int main()
{   
    int n;
    cin>>n;
    int a[10000];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    qsort(a,0,n);
    for (int i = 0; i < n; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}
/*
9 
3 5 8 1 2 9 4 7 6
*/