#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x,ans=0,ans1=0;
    cin>>x;
    int a[501];
    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
    }

    //sort(a,a+x, less<int>());
    //sort(a,a+x, greater<int>());
    sort(a,a+x);
    for (int i = 0; i < x-1; i++)
    {
        ans1+=a[i];
        ans+=ans1;
        cout << a[i] << ' ';
        
    }
    cout<<endl<<ans<<endl;
    return 0;
}