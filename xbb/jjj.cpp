#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long ans=0;
int a[100000];
vector<int> v;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        vector<int>::iterator it = upper_bound(v.begin(),v.end(), a[i]);
        int now = it - v.begin();
        ans += i-now;
        v.insert(v.begin()+now, a[i]);
    }
    cout<<ans<<endl;
    return 0;
}