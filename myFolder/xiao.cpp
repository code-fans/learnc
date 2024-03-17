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
    int min;
    for (int i = 0; i < n-1; i++){
        for (int j = i; i < n; i++){
            
        }
    }
    
}
int main()
{   
    int n;
    cin>>n;
    int a[10000];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    bsort(a,n);
    for (int i = 0; i < n; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}