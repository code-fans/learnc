#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,a[1100],ans=0;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            int bb=int(0.1+sqrt(a[i]+a[j]));
            if(bb*bb == a[i]+a[j])
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}