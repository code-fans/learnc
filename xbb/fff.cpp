#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long ans=1;
    for (int i = 2; i <= n; i++){
        ans*=i;
    }
    cout<<ans<<endl;
    return 0;
}