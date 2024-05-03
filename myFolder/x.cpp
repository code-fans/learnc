#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
struct x
{
    int a;
    int b;
};
x c[100000];
bool cmp(x s,x s1){
    if(s.a!=s1.a) return s.a<s1.a;
    return s.b<s1.b;
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>c[i].a>>c[i].b;
    }
    sort(c,c+n,cmp);
    int ans=c[0].a,ans1=c[0].b;
    for (int i = 1; i < n; i++){
        if(ans1<c[i].a){
            cout<<"no"<<endl;
            return 0;
        }
        else{
            ans1=max(ans1,c[i].b);
        }
    }
    cout<<ans<<' '<<ans1<<endl;
    return 0;
}