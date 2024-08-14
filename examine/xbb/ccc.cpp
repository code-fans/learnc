#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,ans=0;
    cin>>a>>b;
    while (a!=0&&b!=0){
        ans+=a/b;
        a=a%b;
        swap(a,b);
    }
    cout<<ans<<endl;
    return 0;
}
