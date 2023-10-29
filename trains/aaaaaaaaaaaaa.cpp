#include <iostream>
using namespace std;
int main()
{
    int a[1000][1000],b[1000][1000],m,n;
    cin>>m>>n;
    for (int i = 0; i < m; i++){
        for (int k = 0; k < n; k++)
        {
            cin>>a[i][k];
        }
    }
    for (int i = 0; i < m; i++){
        for (int k = 0; k < n; k++)
        {
            cin>>b[i][k];
        }
    }
    for (int i = 0; i < m; i++){
        for (int k = 0; k < n; k++)
        {
            a[i][k]+=b[i][k];
        }
    }
    for (int i = 0; i < m; i++){
        for (int k = 0; k < n; k++)
        {
            cout<<a[i][k]<<' ';
        }
        cout<<endl;
    }
    return 0;
}