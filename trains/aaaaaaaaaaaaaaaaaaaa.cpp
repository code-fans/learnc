#include <iostream>
using namespace std;
int main(){
    long long n,ans[10000000]={0},jw=0;
    ans[0]=2;
    int len=1;
    cin>>n;
    if (n==0){
        cout<<'1'<<endl;
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        ans*=2
    }
    cout<<ans<<endl;
    return 0;
}
