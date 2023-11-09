#include <iostream>
using namespace std;
int main()
{
    int x ,y,m;
    int a[1000000]={0},b[1000000]={0},ans=0;
    cin>>x>>y;
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    for(int i=0;i<y;i++){
        cin>>b[i];
    }
    if (x>y){
        cout<<"-1"<<endl;
        return 0;
    }
    sort(b, b+y);
    sort(a, a+x);
    //都放在第一个
    int j=0, k=0;
    while(j<x && k<y){
        //盒子必须比蛋糕大或者相等
        while(k<y && b[k]<a[j]) k++;
        if (k==y) break;
        ans += b[k];
        j++;
        k++;
    }
    //蛋糕没有装完
    if (j<x){
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<ans<<endl;
    return 0;
}