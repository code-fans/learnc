#include <bits/stdc++.h>
using namespace std;
long long a[1100][1100] = { { 0 } };
int main() {
    int n, m,x, y, x1, y1;
    cin >> n >> m;
    for (int k = 1; k <= m; ++k)
	{
		cin >> x >> y >> x1 >> y1;
		for (int i = x; i <= x1; ++i)
			for (int j = y; j <= y1; ++j)
				a[i][j]++;
	}
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}