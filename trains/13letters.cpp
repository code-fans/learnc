#include <iostream>
using namespace std;
int main()
{
    char a[41][41];
    int x=0,y=0,n;
    cin>>n;
    for (int i = 0; i < n+n+1; i++)
    {
        for (int j = 0; j < n+n+1; j++)
        {
            a[i][j]=' ';
        }
    }
    for (int i = 0; i < n+n+1; i++)
    {
        a[i][i]='*';
    }
    for (int i = 0; i < n+n+1; i++)
    {
        a[i][n+n-i]='*';
    }
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        a[x-1][y-1]='7';
    }
    for (int i = 0; i < n+n+1; i++)
    {
        for(int j=0;j<n+n+1;j++)
            cout<<a[i][j];
        cout<<endl;
    }
    return 0;
}