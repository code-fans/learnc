#include <iostream>
using namespace std;
int main()
{
    int n,a[100000];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    a[n]=a[0];
    for (int i = 1; i <= n; i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}