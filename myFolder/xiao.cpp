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
        while (r1 < r && a[r1]<a[n]) r1++;
        while (r2 > 0 && a[r2]>a[n]) r2--;
        if(r1<r2){
            sawp(a,r1,r2);
            r1++;
            r2--;
        }
    } while (r1 < r2);
    // r1 == r2 时 a[r1] 可能小于 a[n]
    if(r1 < r && a[r1]<a[n]) r1++;

    sawp(a, r1, n); 

    qsort(a, l, r1 );
    qsort(a, r1+1, r);
}

void qsort2(int a[], int l,int r){

    int l1=l,r1=r-1, mid=a[(l1+r1)/2];
    do
    {
        while(a[l1]<mid) l1++;
        while(a[r1]>mid) r1--;
        if(l1<=r1){
            sawp(a,l1,r1);
            l1++;
            r1--;
        }
    } while (l1<=r1);
    if(r1 > l) qsort2(a, l, r1+1);
    if(l1 < r-1) qsort2(a, l1, r);
}

void msort(int a[],int l, int r)
{
    if(r-l < 2)
        return;
    int m = (l+r)/2;
    msort(a, l, m);
    msort(a, m, r);
    // merge
    int k[10000];
    int i=l;
    int j=m;
    int s=0;
    while(i< m&&j< r){
        if(a[i]>a[j]){
            k[s]=a[j];
            j++;
        }
        else{
            k[s]=a[i];
            i++;
        }
        s++;
    }
    while (i<m){ k[s]=a[i];i++; s++;}
    while (j<r){ k[s]=a[j];j++; s++;}
    for(i=0;i<s;i++) a[l+i]=k[i];
}

int main()
{   
    int n;
    cin>>n;
    int a[100100];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }                 
    
    qsort2(a, 0, n); 
    for (int i = 0; i < n; i++){
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