#include <bits/stdc++.h>
using namespace std;
vector <int> e[100001];
int dp[10000000]={0};
bool vis1[100001]={0};
void dfs(int x,int d){
	if(dp[x]>=d)
        return ;
    dp[x]=d;
	for(int i=0;i<e[x].size();i++)
		dfs(e[x][i],d);
}

int main(){
	int n,m;
	cin>>n>>m; 
	
    cout<<n+m<<endl;
    return 0;
}