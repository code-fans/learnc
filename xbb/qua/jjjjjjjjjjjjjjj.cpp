#include <bits/stdc++.h>
using namespace std;
int q[1000000];
int main(){
    int n,c;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>c;
        q[i]=q[i-1]+c;
    }
    cin>>n;
    for (int i = 0; i < n; i++){
        int x,y;
        cin>>x>>y;
        cout<<q[y]-q[x-1]<<endl;
    }
    return 0;
}