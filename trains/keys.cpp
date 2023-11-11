#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    long long ans=0;
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n; k++){
            cin>>m;
            if (i==k||k+i==n-1){
                ans+=m;
            }     
        }
    }
    cout<<ans<<endl;
    return 0;
}