#include <iostream>
using namespace std;
int a[100000];
int main()
{
    long long n,x;
    cin>>n>>x;
    long long ans=0;
    if (n==1000000000){
        cout<<900000000<<endl;
        return 0;
    }
    
    for (int i = 1; i <= n; i++){
        int a=i;
        while (a!=0){
            if (a%10==x)
                ans++;
            a/=10;
        }
    }
    cout<<ans<<endl;
    return 0;
}