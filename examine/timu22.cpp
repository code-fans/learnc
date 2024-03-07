#include <iostream>
#include <algorithm>
using namespace std;
struct p
{
    int s1;
    int s2;
};
p b[10000];
bool cmp(p a,p b){
    if(a.s2!=b.s2)
        return a.s2<b.s2;
    else
        return a.s1<b.s1;
}
int main()
{
    int a;
    cin>>a;
    for (int i=0; i < a; i++){
        cin>>b[i].s1>>b[i].s2;
    }
    sort(b,b+a,cmp);
    int ans =1, i1=0;
    for (int i=1 ; i < a; i++){
        if (b[i1].s2<=b[i].s1){
            i1=i;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}