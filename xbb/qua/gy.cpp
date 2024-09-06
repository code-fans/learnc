#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n,a[100010],b[100010], km;
    cin>>n>>km;
    for (int i = 0; i < n-1; i++)
        cin>>a[i];
    for (int i = 0; i < n; i++)
        cin>>b[i];

    long long ans=0, yj=b[0], bujian=0;
    for (int i = 0; i < n-1; i++){
        yj = min(yj, (long long)b[i]);
        long long jy = (a[i] - bujian + km -1) /km;
        ans += jy * yj;
        bujian = jy * km + bujian - a[i];
    }
    cout<<ans<<endl;
    return 0;
}