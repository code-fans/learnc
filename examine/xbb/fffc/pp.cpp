#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int ans[4][4]={0};
int a[200][200];

bool check(int x,int y){
    for(int i=x;i<4+x;i++)
        for(int j=y;j<4+y;j++)
            if(ans[i-x][j-y]!=a[i][j])
                return false;
    return true;
}

int main()
{
    int l;
    cin>>l;
    ans[1][1]=1;
    ans[1][2]=1;
    ans[2][1]=1;
    ans[2][2]=1;
   
    for(int ii=0;ii<l;ii++){
        int n,m;
        cin>>n>>m;
        char num;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>num;
                a[i][j]=num-'0';
            }
        }

        bool can=false;
        for(int i=0; i<=n-4;i++){
            for(int j=0;j<= m-4;j++){
                if(check(i,j)){
                    can= true;
                    break;
                }
            }
            if(can){
                break;
            }
        }

        if(can)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}