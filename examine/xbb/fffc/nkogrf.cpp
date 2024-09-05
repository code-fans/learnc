#include <iostream>
#include <algorithm>
using namespace std;
struct aaaaa{
    int h;
    int z;
    int w;
}a[100000];
bool cmp(aaaaa a1,aaaaa b1){
    if(a1.z!=b1.z) 
        return a1.z>b1.z ;
    if (a1.w!=b1.w)
        return a1.w>b1.w;
    return a1.h<b1.h;
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        int y,s,w;
        cin>>y>>s>>w;
        a[i].h=i+1;
        a[i].w=y;
        a[i].z=y+s+w;
    }
    sort(a,a+n,cmp);
    for (int i = 0; i < 5; i++)
        cout<<a[i].h<<' '<<a[i].z<<endl;
    return 0;
}