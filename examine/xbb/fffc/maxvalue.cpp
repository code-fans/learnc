#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;

int n,a[10000]={0};
int nv[1000], nvl=0;
//优化这个算法
int maxvalue(int x){
    if(x<=nvl) return nv[x];
    for(int i=nvl+1; i<=x; i++){
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
    nv[0] = 0;
    nv[1] = a[1];
    nvl = 1;

    int n2;
    string str;
    cin>>n2>>str;
    int ans = 0;
    for (int i = 0; i < n2-2; i++){
        int k = 0;  
        while(i < n2-2 && str.substr (i,3)=="abc"){
            k++;
            i+=3;
        }
        ans += maxvalue(k);
    }
    cout<<ans<<endl;
    return 0;
}
/*
3 
3 5 11
20
dabczabcabcabcabcabz
*/