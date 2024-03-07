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
    int ans =0, x=-1;
    for (int i=0 ; i < a; i++){
        if (x < b[i].s1){
            x = b[i].s2;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}