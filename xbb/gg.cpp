#include <iostream>
#include <algorithm>
using namespace std;
int a[30000];
int getf(int x){
    return a[x]==x?x:getf(a[x]);
}
int main(){
    int n,m,p;
    cin>>n>>m>>p;
    for (int i = 1; i <= n+1; i++){
        a[i]=i;
    }
    for (int i = 0; i < m; i++){
        int ai,bi;
        cin>>ai>>bi;
        if (getf(ai)!=getf(bi)){
            a[getf(bi)]=ai;
        }
    }
    for (int i = 0; i < p; i++){
        int ai,bi;
        cin>>ai>>bi;
        if (getf(ai)==getf(bi))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}