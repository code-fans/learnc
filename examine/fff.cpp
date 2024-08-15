#include <iostream>
using namespace std;
int a[1000][1000]={{0}};
bool sc(int x,int x1,int y,int y1,int j){
    int h=0,b=0;
    for (int i = x; i < x1; i++){
        for (int j = y; j < y1; j++){
            if(a[i][j]==0)
                h++;
            else
                b++;
        }
    }
    if(h==b)
        return j;
    else
        return 0;
}
int main()
{
    int n,m;
    cin>>n>>m;
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    int ans=-1;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            for (int ji = 0; ji < min(n,m); ji++){
                int u=sc(j,ji+j,i,ji+i,ji);
                if(u>ans)
                    ans=u;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
} 
// 4 5
//0 0 0 0 0
// 0 1 1 1 1
// 0 0 0 1 1
// 0 0 0 1 1