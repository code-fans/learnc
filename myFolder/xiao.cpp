#include <iostream>
using namespace std;
int a[10000][4]={{0}};

int main()
{
    int n , m;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
    }
    int x,y;
    cin>>x>>y;
    for (int i = n-1; i >= 0; i--){
        if((x>=a[i][0]&&y>=a[i][1])&&(x<=(a[i][0]+a[i][2])&&y<=(a[i][1]+a[i][3]))){
            cout<<i+1;
            return 0;
        }
    }
    
    cout<<-1;
    cout<<endl;
    return 0;
}