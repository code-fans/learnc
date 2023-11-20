#include <iostream>
using namespace std;
bool ip(int k)
{
    for (int i = 2; i*i <= k; i++)
        if (k%i==0)
            return false;
    return true;
}

bool iswpsh(int k)
{
    int n;
    int a[1000];
    for (int i = 0; i < k; i++)
        a[i]=k%10;
        k/10;
    for (int i = 0; i < k/2; i++)
        if (a[k-1-i]!=a[i])
            return false;
    return true;
}

int main()
{
    int n, ans=0, m;
    cin>>n,m;
    for (int i = n; i < m; i++)
        if (ip(i))
            ans++;
    cout<<ans<<endl;
    return 0;
}