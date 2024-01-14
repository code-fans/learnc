#include <iostream>
#include <queue>

using namespace std;
struct point{
    int x,y;
};

int main()
{

    queue<point> dq;
    char a[110][110];
    int n,s;
    cin>>n;
    for(int k=0;k<n;k++){
        cin>>s;
        for (int i = 0; i < s; i++){
            for (int j = 0; j < s; j++){
                cin>>a[i][j];
            }
        }
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        a[x1][y1]='@';
        point q;
        q.x=x1;
        q.y=y1;
        dq.push(q);
        while (!dq.empty()){
            point p = dq.front();
            dq.pop();
            if(p.x>0 && a[p.x-1][p.y]=='.'){
                a[p.x-1][p.y]='@';
                point p1;
                p1.x=p.x-1;
                p1.y=p.y;
                dq.push(p1);
            }
            if(p.x<s-1 && a[p.x+1][p.y]=='.'){
                a[p.x+1][p.y]='@';
                point p1;
                p1.x=p.x+1;
                p1.y=p.y;
                dq.push(p1);
                ans++;
            }
            if(p.y>0 && a[p.x][p.y-1]=='.'){
                a[p.x][p.y-1]='@';
                point p1;
                p1.x=p.x;
                p1.y=p.y-1;
                dq.push(p1);
            }
            if(p.y<s-1 && a[p.x][p.y+1]=='.'){
                a[p.x][p.y+1]='@';
                point p1;
                p1.x=p.x;
                p1.y=p.y+1;
                dq.push(p1);
            }
        }
        if(a[x2][y2]=='@')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
