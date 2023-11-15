#include  <iostream>
using namespace std;
int main()
{
    int a[10000],n,ans=0;
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9];
    cin>>n;
    for (int i = 0; i < 10; i++){
        if (a[i]<=n+30){
            ans++;
        }
    }
    cout<<ans<<endl;
}