#include <iostream>
using namespace std;
long long ans(long long n,long long a,long long b,long long c){
    if(n<=c)
        return 1;
    return (ans(n-a,a,b,c)+ans(n-b,a,b,c))%100000007;
}
int main(){
    long long n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<ans(n,a,b,c)<<endl;
    return 0;
}