#include <iostream>
#include <queue>

using namespace std;
struct point{
    int x,y;
};

int main()
{
    queue<point> dq;
    int a[10][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cin>>a[i][j];
            if((i==0||i==9||j==0||j==9)&&a[i][j]==0) {
                a[i][j]=2;
                point p;
                p.x=i;
                p.y=j;
                dq.push(p);
            }
        }
    }

    while (!dq.empty()){
        point p = dq.front();
        dq.pop();
        if(p.x>0 && a[p.x-1][p.y]==0){
            a[p.x-1][p.y]=2;
            point p1;
            p1.x=p.x-1;
            p1.y=p.y;
            dq.push(p1);
        }
        if(p.x<9 && a[p.x+1][p.y]==0){
            a[p.x+1][p.y]=2;
            point p1;
            p1.x=p.x+1;
            p1.y=p.y;
            dq.push(p1);
        }
        if(p.y>0 && a[p.x][p.y-1]==0){
            a[p.x][p.y-1]=2;
            point p1;
            p1.x=p.x;
            p1.y=p.y-1;
            dq.push(p1);
        }
        if(p.y<9 && a[p.x][p.y+1]==0){
            a[p.x][p.y+1]=2;
            point p1;
            p1.x=p.x;
            p1.y=p.y+1;
            dq.push(p1);
        }
    }
    
    int ans = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if(a[i][j] == 0)
                ans ++;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}
