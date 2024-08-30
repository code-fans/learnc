#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int djl=0,ans=0;
    while (n>0){
        djl++;
        if(ans == 0 && n%3 == 1){
            ans=djl;
        }
        n-=(n+2)/3;
    }
    cout<<djl<<' '<<ans<<endl;
    return 0;
}