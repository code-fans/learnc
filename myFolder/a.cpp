#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;
int p;
void qsort(int i,int j,int a[]){
    if(i >= j-1) return ;
    int m=i,n=j;
    int k=a[(i+j)/2];
    while (m<n){
        while(a[m]>k && m<j-1) m++;
        while(a[n-1]<k && n>i) n--;
        if(m<n){
            int f=a[m];
            a[m]=a[n-1];
            a[n-1]=f;
            m++;
            n--;
        }
    }
    if(p == n || p == m) return;
    if(p<n) qsort(i,n,a);
    if(p>=m) qsort(m,j,a);
}

int main()
{
    int n;
    scanf("%d", &n);
    int  a[100000];
    for (int i = 0; i < n; i++){
        scanf("%d", a+i);
    }
    scanf("%d", &p);
    qsort(0,n,a);
    sort(a,a+p,greater<int>());

    for (int i = 0; i < p; i++){
        printf("%d\n", a[i]);
    }

    return 0;
}