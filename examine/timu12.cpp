#include <iostream>
using namespace std;
int main()
{
    freopen("../data/csp.txt", "r", stdin);
    int n=400000,n1,len=0;
    int ans=0;
    int a[100000];
    while (cin>>a[len ]){
        len++;
    }
    
    while(true){
        bool f=false;
        for(int j = 0; j<len ;j++){
            if(n>=a[j]&&a[j]!=-1){
                n=a[j];
                a[j]=-1;
                f=true;
            }
        }
        if(!f)
            break;
        ans++;
        n=400000;
    }
    cout<<ans<<endl;
    return 0;
}