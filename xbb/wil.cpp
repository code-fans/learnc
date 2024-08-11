#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <cmath>
#include <queue>
#include <deque>
using namespace std;
struct wilbur{
    int x,y;
} pre[105][105];

int m,n;

bool Map[105][105];

int dir[8][2]={{0,1},{1,0},{0,-1},{-1,0},{1,-1},{-1,-1},{-1,1},{1,1}};

bool In(int x,int y)
{
    return (x>0 && x<=m &&y>0 && y<=n);
} 

void printway(int x,int y)
{
    if (x==1 && y==1)
        printf("%d %d\n",x,y);
    else{
        printway(pre[x][y].x,pre[x][y].y);
        printf("%d %d\n",x,y);
    }
}

bool BFS()
{
    int front=0, end=0;
    wilbur q[100100];
    q[0].x=1;
    q[0].y=1;
    end++;
    Map[1][1] = 1;
    while (end>front){
        wilbur cur= q[front];
        front++;
        if (cur.x==m && cur.y==n){
            printway(m,n);
            return true;
        }
        for (int i = 0; i < 8; i++){
            int x=cur.x+dir[i][0];
            int y=cur.y+dir[i][1];
            if (In(x,y) && !Map[x][y]){
                q[end].x=x;
                q[end].y=y;
                end++;
                pre[x][y].x=cur.x;
                pre[x][y].y=cur.y;
                Map[x][y] = 1;
            } 
        }
    }
    return false;
}

int main()
{
    cin>>m>>n;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin>>Map[i][j];
        }
    }
    if( !BFS()){
     cout << "-1"<< endl;
    }
    return 0;
}
/*
5 5
0 0 1 0 1
0 1 1 1 0
1 0 1 0 1
0 1 0 1 0
1 0 1 1 0
*/