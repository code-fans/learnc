#include <iostream>
using namespace std;
int main()
{
    int n , n1, n2 ;
    int a[120][120],b[120][120],c[120][120];
    cin>>n>>n1>>n2;
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n1; k++)
        {
            cin>>a[i][k];
        }
    }
    for (int i = 0; i < n1; i++){
        for (int k = 0; k < n2; k++)
        {
            cin>>b[i][k];
        }
    }
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n2; k++)
        {

            c[i][k]=0;
            for (int u = 0; u < n1; u++)
            {
                c[i][k]+=a[i][u]*b[u][k];
            }
            
        }
    }
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n2; k++)
        {
            cout<<c[i][k]<<' ';
        }
        cout<<endl;
    }
    return 0;
}