#include <iostream>
#include <cmath>
using namespace std;
int a[1000][1000],n,d;
int main()
{
    cin>>n>>d;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < d; j++){
            cin>>a[i][j];
        }
    }
    int b=0,c=0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < d; j++){
            if (i==n-1||i==0||j==d-1||j==0)
                cout<<a[i][j]<<' ';
            else
                cout<< round(float(a[i+1][j]+a[i-1][j]+a[i][j]+a[i][j-1]+a[i][j+1])/5.0)<<' ';
        }
        cout<<endl;
    }
    return 0;
}