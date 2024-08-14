#include <iostream>
#include <cmath>
using namespace std;
int a[160][2];
int tree(int d){
    int l=0, r=0;
    if(a[d][0]!=0) l = tree(a[d][0]);
    if(a[d][1]!=0) r = tree(a[d][1]);
    if(l<r) l=r;
    return l+1;
}
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++){
        cin>>a[i][0]>>a[i][1];
    }
    cout<<tree(1)<<endl;
    return 0;
}