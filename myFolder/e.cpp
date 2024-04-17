#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int  m,ans[1100][1100],n=1,h=1;
    cin>>m;
    ans[0][0]=1;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++){
                ans[j][k+n]=ans[j][k]+n;
                ans[j+n][k]=ans[j][k]+n;
                ans[j+n][k+n]=ans[j][k];
            }
        n<<=1;
    }
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n; k++){
            cout<<ans[i][k]<<' ';
        }
        cout<<endl;
    }
    return 0;
}