#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
char a[100][100];
int lie[100]={0};
int dfs(int l, int n, int geshu){
    if(geshu > n-l)
        return 0;
    if(geshu==0)
        return 1;
    int c=0;

    for (int i = 0; i < n; i++){
        if(a[l][i]=='#'&&lie[i]==0){
            lie[i]=1;
            c+=dfs(l+1,n, geshu-1);  
            lie[i]=0; 
        }
    }
    c+=dfs(l+1,n,geshu);
    return c;
}
int main()
{
    int n,geshu;
    while(1)
    {
        cin>>n>>geshu;
        if(n<0)
            return 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin>>a[i][j];
            }
        }
        cout<<dfs(0,n, geshu)<<endl;
    }
    return 0;
}
