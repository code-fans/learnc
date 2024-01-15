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
        jiZhi[i] = maxA - minA;
    }
    sort(jiZhi, jiZhi+zjgs, greater<long long>());
    return jiZhi[k-1];
}

bool qiuMinMax2(const long long * a, int len, int k, int l, long long jz){
    int sub = 0;
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
        if( jz <= maxA - minA)
            sub ++;
        if(sub == k){
            return true;
        }
    }
    return false;
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
        if(maxJZ==0){
            cout<< 0 <<' '<< 1 <<endl;
            continue;
        }
        int s=1, m;

        while(l>s){
            m=(l+s)/2;
            bool eq = qiuMinMax2(a, n, k , m, maxJZ);
            if(eq){
                l= m;
            } else {
                s =m +1;
            }
        }
    
        cout<<maxJZ<<' '<<l<<endl;
    }
    return 0;
}