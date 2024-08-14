#include <iostream>
using namespace std;

void print(int a[],int len){
    for (int i = 0; i < len; i++){
        cout<<a[i];
    } 
    cout<<endl;
}

int coutq(int sz[],int b,int n)
{
    if(b==n-1){
        print(sz,n);
        return 1;
    }
    int s=0;
    for (int i = b; i < n; i++){
        swap(sz[i], sz[b]);
        s += coutq(sz,b+1,n);
    }
    int t = sz[b];
    for (int i = b; i < n-1; i++){
        sz[i] = sz[i+1];
    }
    sz[n-1] = t;
    return s;
}

int main()
{
    int n,sz[10];
    cin>>n;
    for (int i = 0; i < n; i++){
        sz[i]=i+1;
    }
    cout<<coutq(sz,0,n)<<endl;
    return 0;
}