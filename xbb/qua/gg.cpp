#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a[10000]={0},b[3][10000],n;
    cin>>n;
    for (int i = 0; i < n; i++){
        int y,s,ying;
        cin>>y>>s>>ying;
        b[0][i]=y+s+ying;
        b[1][i]=y+s;
        b[2][i]=max(y,s);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i!=j){
                if (b[0][i]>b[0][j] || 
                (b[1][i]>b[1][j] && b[0][i]==b[0][j]) ||
                (b[2][i]>b[2][j]&&b[1][i]==b[1][j]&&b[0][i]==b[0][j])  )
                    a[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout<<a[i]+1<<' ';
    }
    cout<<endl;
    return 0;
}
/*
6
140 140 150
140 149 140
148 141 140
141 148 140
145 145 139
0 0 0
*/