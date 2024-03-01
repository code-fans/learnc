#include <iostream>
using namespace std;
bool isp(int a)
{
    for (int i = 2; i * i <= a; i++){
        if(a%i==0)
            return false;
    }
    return true;
}
int main()
{
    int i,n,ans=0;
    cin>>i>>n;
    for (; i <= n; i++){
        if(isp(i))
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}