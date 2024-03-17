#include <iostream>
#include <cstdio>
#include <string>
using namespace std;



long long maxMutli(int d[], int n , int b, int g){
    if(g==0){
        long long shu=0;
        for (int i = b; i < n; i++){
            shu*=10;
            shu+=d[i];
        }
        return shu;
    }
    int p=n-g;
    // b+1, b+2, ... p
    long long ans = 0;
    for (int i=b+1;i<=p;i++){
        long long shu=0;
        for (int j = b; j < i; j++){
            shu*=10;
            shu+=d[j];
        }
        shu *= maxMutli(d, n, i , g-1);
        if(shu>ans)
            ans=shu;
    }
    return ans;
}

int main()
{
    int data[100];
    int n,g;
    cin>>n>>g;
    string a;
    cin>>a;
    for (int i = 0; i < n; i++){
        data[i]=a[i]-'0';
    }
    cout<<maxMutli(data, n, 0, g)<<endl;

    return 0;
}