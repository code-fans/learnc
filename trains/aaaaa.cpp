#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
struct p
{
    int id;
    int fn;
};
bool cmp(p a, p b)
{
    if (a.fn==b.fn)
    {
        return a.id<b.id;
    }
    else
    {
        return a.fn>b.fn;
    }
}
p mw[6000];
int main()
{
    int n, m, ans=0;
    cin>>n>>m;
    m += m/2;
    for (int i = 0; i < n; i++)
    {
        cin>>mw[i].id>>mw[i].fn;
    }
    sort(mw,mw+n,cmp);
    ans = mw[m-1].fn;

    while(m<n && mw[m].fn == ans)
        m++;

    cout<<ans<<' ' << m << endl;
    for (int i = 0; i < m; i++)
    {
        cout<<mw[i].id<<' '<<mw[i].fn<<endl;
    }
    return 0;
}
