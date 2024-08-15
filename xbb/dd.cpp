#include <bits/stdc++.h>
using namespace std;
string a[100000];
int main()
{
	int n=0;
    while (cin>>a[++n]);
    sort(a+1,a+1+n);
    int t=a[1].size();
    for (int i = 2; i <= n; i++){
        int j=0;
        while ( j<a[i-1].size() && j<a[i].size() && a[i][j]==a[i-1][j] )
            j++;
        t += a[i].size()-j; 
    }
    cout<<t+1<<endl;
	return 0;
}