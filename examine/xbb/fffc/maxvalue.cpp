#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;

int n,a[10000]={0};
//优化这个算法
int maxvalue(int x){
    if(x==0) return 0;
    if(x==1)
        return a[1];
    int nv[1000];
    nv[0] = 0;
    nv[1] = a[1]; 
    for(int i=2; i<=x; i++){
        nv[i] = nv[i-1] + a[1];
        for(int j=2; j<=n && j<=i; j++){
            if(nv[i] < nv[i-j] + a[j]){
                nv[i] = nv[i-j] + a[j];
            }
        }
    }
    return nv[x];
}

int main(){

    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    int n2;
    string str;
    cin>>n2>>str;
    int ans = 0;
    for (int i = 0; i < n2-2; i++){
        int k =0;  
        if(str.substr(i,3)=="abc"){
            do{
                k++;
                i+=3;
            }while(i < n2-2 && str.substr (i,3)!="abc");
        }
        ans += maxvalue(k);
    }
    cout<<ans<<endl;
    return 0;
}
/*
3 
3 1 2
13
dabcabcabcabz
*/