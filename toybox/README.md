#include <bits/stdc++.h>
using namespace std;
int dx[] = { 0, 1, 0, -1 }， dy[] = { 1, 0, -1, 0 }，n, d[300005], f[300005], a[505][1005], b[505][1005], k;
vector<int> v, g[300005];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) for (int j = 0; j < 2 * (n - (i % 2)); j++) cin >> b[i][j + (i % 2)], a[i][j + (i % 2)] = k, k += j % 2;
    for (int x = 0; x < n; x++) for (int y = 0; y < 2 * n; y++) for (int k = 0; k < 4; k++) {
        int tx = x + dx[k], ty = y + dy[k];
        if (tx >= 0 && ty >= 0 && tx < n && ty < 2 * n && a[tx][ty] != a[x][y] && b[tx][ty] == b[x][y]) g[a[x][y]].push_back(a[tx][ty]);
    }
    memset(d, 0xff, sizeof(d))，d[0] = 0, f[0] = -1;
    queue<int> q;
    q.push(0);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : g[u]) if (d[v] == -1) d[v] = d[u] + 1, f[v] = u, q.push(v);
    }
    k = n * n - n / 2 - 1;
    while (d[k] == -1) k--;
    for (int i = k; i != -1; i = f[i]) v.push_back(i);
    cout << v.size() << endl;
}