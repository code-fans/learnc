#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
int main()
{
    int n;
    char c;
    long long a[100000],asize=0,bsize=0;
    char b[100000];
    while (cin>>n>>c){                 
        if(bsize&&b[bsize-1]=='*'){
            a[asize-1]*=n;
            a[asize-1]%=10000;
            bsize--;
        }else{
            a[asize]=n;
            b[bsize]=c;
            asize++;
            bsize++;
        }
    }
    while (asize>=2){
        a[asize-2]+=a[asize-1];
        a[asize-2]%=10000;
        asize--;
    }
    cout<<a[0]<<endl;
    return 0;
}