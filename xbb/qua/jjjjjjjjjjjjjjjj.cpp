#include <bits/stdc++.h>
using namespace std;
long long n,k,x[1000002]={0},y[1000002]={0},i,h=0,l=0;
int main()
{
    cin>>n>>k;
    for(i=1;i<=k;i++)
        cin>>x[i]>>y[i];
    sort(x+1,x+1+k);
    sort(y+1,y+1+k);
    for(i=1;i<=k;i++){
        if(x[i]!=x[i+1])
            h++;
        if(y[i]!=y[i+1])
            l++;
    }
    cout<<n*n-(n-h)*(n-l)<<endl;
    return 0;
}