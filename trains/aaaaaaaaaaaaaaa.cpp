#include <iostream>
using namespace std;
int main()
{
    int m,n,a[1000][1000];
    cin>>m>>n;
    for (int i = 0; i < m; i++){
        for (int k = 0; k < n; k++){
            cin>>a[i][k];
        }
    }
    for (int i = 0; i < n; i++){
        for (int k = 0; k < m; k++){
            cout<<a[k][i]<<' ';
        }
        cout<<endl;
    }
    return 0;
    
}