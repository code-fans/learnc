#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a[1000][1000];
    int n,i,j;
    cin>>n>>i>>j;
    for (int m = 1; m <= n; m++)
    {
        cout<<"("<<i<<","<<m<<") ";
    }
    cout<<endl;
    for (int m = 1; m <= n; m++)
    {
        cout<<"("<<m<<","<<j<<") ";
    }
    cout<<endl;
    for (int m = 1; m <= n; m++)
    {
        if(j-i+m>0 && j-i+m<=n)
            cout<<"("<<m<<","<<j-i+m<<") ";
    } 
    cout<<endl;
    for (int m = 1; m <= n; m++)
    {
        if(j+i-m>0&&j+i-m<=n)
            cout<<"("<<j+i-m<<","<<m<<") ";
    }
    cout<<endl;
    return 0;
}