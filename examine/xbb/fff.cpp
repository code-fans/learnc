#include <iostream>
using namespace std;
int a[10000]={0};
int main()
{
    int n,c;
    cin>>n>>c;
    
    for (int i = 0; i < n; i++){
        int m;
        cin>>m;
        a[m]+=m;
    }
    int ans=0;
    for (int i = 1; i <= 1000; i++){
        int jg=0;
        for (int j = i; j <= i+c&&j<=1000 ; j++){
            jg+=a[j];
        }
        if(jg>ans)
            ans=jg;
    }
    cout<<ans<<endl;
    return 0;
}