#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <algorithm>
using namespace std;
struct q
{
    int x;
    int y;
};
int size=0;
int n,m;
q a[10000];
int b[101][101];
void tz(){
    size=1;
    int i=0;
    while(i<size){
        int x = a[i].x;
        int y = a[i].y;
        if(x>0 &&b [x-1][y]==1){
            b[x-1][y]=0;
            a[size].x=x-1;
            a[size].y=y;
            size++;
        }
        if(y>0 &&b [x][y-1]==1){
            b[x][y-1]=0;
            a[size].x=x;
            a[size].y=y-1;
            size++;
        }
        if(x!=n &&b [x+1][y]==1){
            b[x+1][y]=0;
            a[size].x=x+1;
            a[size].y=y;
            size++;
        }
        if(y!=m &&b [x][y+1]==1){
            b[x][y+1]=0;
            a[size].x=x;
            a[size].y=y+1;
            size++;
        }
        i++;
    }
}

int main()
{
    int ans=0;
    cin>>n>>m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>b[i][j];
        }
    }
    bool t=true;
    while (t){
        t = false;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(b[i][j]==1){
                    a[0].x=i;
                    a[0].y=j;
                    b[i][j] = 0;
                    tz();
                    t = true;
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}