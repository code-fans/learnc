#include <bits/stdc++.h>
using namespace std;
long long ans[1000],sizeofa=0;
int main(){
    long long n,s;
    cin>>n>>s;
    cout<<n<<'=';
    while (n!=0){
        int num=n%s;
        n/=s;
        if(num<0){
            num -= s;
            n++;
        }
        ans[sizeofa++]=num;
    }
    for(int x=sizeofa-1;x>=0;x--){
        if(ans[x]>=10)
            cout<<char(ans[x]+'A'-10);
        else
            cout<<ans[x];
    }
    cout<<"(base"<<s<<')'<<endl;
    return 0;
}