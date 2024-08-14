#include <iostream>
using namespace std;
int ans1[1000000],ans2[1000000];
int a[1000006];
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n-m+1; i++){
        ans2[i]=-100000;
        ans1[i]=100000;
        for (int j = i; j-i < m; j++){
            if(ans1[i]>a[j])
                ans1[i]=a[j];
            if(ans2[i]<a[j])
                ans2[i]=a[j];
        }
    }
    for (int i = 0; i < n-m+1; i++){
        cout<<ans1[i]<<' ';
    }
    cout<<endl;
    for (int i = 0; i < n-m+1; i++){
        cout<<ans2[i]<<' ';
    }
    return 0;
}