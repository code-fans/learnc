#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[1000000];
int main(){
    int n,ans=0,k=1,g,k1=0;
    cin>>n;
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    g=a[n-1];
    for (int i = 0; i < n; i++){
        if(n-1==i)
            break;
        if(g!=a[n-2-i]){
            for (int j = 0; j < k; j++)
                ans+=n-k-j-k1;
            g=a[n-2-i];
            k1++;
            k=1;
        }
        else{
            k++;
        }
    }
    cout<<ans<<endl;
    return 0;
}