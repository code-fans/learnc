#include <bits/stdc++.h>
using namespace std;
bool num[500500];
int p[35000], cnt=0;
bool dp[1001000];
void work(int n){
	for(int i=2; i<=n; i++){
		if(num[i]==false)
			p[++cnt] = i;
		for(int j=1; j<=cnt&&i*p[j]<=n; j++){
			num[i*p[j]] = true;
			if(i%p[j]==0)
				break;
		}
	}
}
int main(){
    ios::sync_with_stdio(0);
    long long n,m;
    cin>>n>>m;
    work(50000);
    int ans=0;
    for (register int i = 1; i <= cnt; i++)
    {
        for (long long j = max(2ll, (n - 1) / p[i] + 1) * p[i]; j <= m; j += p[i]) 
            if(j - n >= 0)
                dp[j - n] = 1;
    }  
    
    for(int i = n ;i<= m;i++){
        if(!dp[i-n]) ans ++;
    }
    if(n==1)
        ans--;
    cout<<ans<<endl;
    return 0;
}