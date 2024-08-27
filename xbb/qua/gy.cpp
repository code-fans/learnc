#include <iostream>
using namespace std;
bool ism(int a,int m){
    for (int i = 2; a>m && i<=m && i*i <= a; i++){
        while (a%i==0)
            a/=i;
    }
    return a<=m;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int ans=0;
    for (int i = 1; i <= n; i++){
        if (ism(i,m))
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
/*
10 3
*/