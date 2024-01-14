#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;

long long qiuMinMax(const long long * a, int len, int k, int l){
    long long jiZhi [100001]={0};
    int zjgs = len - l + 1;
    for(int i=0; i<zjgs; i++){
        long long maxA = a[i], minA=a[i];
        for(int j=i+1; j< i+l; j++){
            if(maxA < a[j]){
                maxA = a[j];
            }
            if(minA > a[j]){
                minA = a[j];
            }
        }
        long long jz = maxA - minA;
        
        int p=k-1;
        if(jz > jiZhi[p]){
            while(p>0 && jz > jiZhi[p]){
                jiZhi[p] = jiZhi[p-1];
                p--;
            }
            jiZhi[p] = jz;
        }
    }
    
    return jiZhi[k-1];
}

int main()
{
    int T;
    cin>>T;
    long long a [100001];
    for(int i=0; i<T; i++){
        int n, k, l;
        cin >> n >> k;
        l = n-k+1;
        
        for(int j=0; j<n; j++)
            cin >> a[j];

        if(l==1){
            cout<< 0 <<' '<< 1 <<endl;
            continue;
        }

        long long maxJZ = qiuMinMax(a, n, k , l);
   
        long long maxJZ2;
        while(l>2){
            maxJZ2 = qiuMinMax(a, n, k , l-1);
            if(maxJZ2 < maxJZ)
                break;
            l--;
        }
    
        cout<<maxJZ<<' '<<l<<endl;
    }
    return 0;
}