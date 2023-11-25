#include <iostream>
#include <cmath>
using namespace std;

struct BigInt {
    int l;
    int d[20];
};

BigInt chaijie(int n){
    BigInt d;
    d.l=0;
    while (n!=0){
        d.d[d.l]=n%10;
        n=n/10;
        d.l++;
    }
    
    return d;
}

long long pingjie(BigInt b, int j){
    long long ans=0;
    for (int i = 0; i < b.l ; i++){
        ans*=j;
        ans+=b.d[b.l-i-1];
    }
    return ans;
}

int maxDigital(BigInt b, int m){
    for (int i = 0; i < b.l ; i++){
        if(m < b.d[i])
            m=b.d[i];
    }
    return m;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    BigInt aI=chaijie(a), bI=chaijie(b), cI=chaijie(c);
    int m = maxDigital(aI, 1);
    m = maxDigital(bI, m);
    m = maxDigital(cI, m);
    
    for (int i = m+1; i <= 40; i++){
        if (pingjie(aI,i)*pingjie(bI,i)==pingjie(cI,i)){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"0"<<endl;
    return 0;
}