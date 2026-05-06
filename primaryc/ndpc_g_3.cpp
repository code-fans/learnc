#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;
typedef long long ll;
const ll INF = 1e16; // 足够大的值，防止加法溢出

// 状态矩阵结构体
struct Matrix {
    ll mat[3][3];
    Matrix() {
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                mat[i][j] = INF;
    }
    // 单位元矩阵：同状态代价为0，不同状态不可达
    static Matrix identity() {
        Matrix res;
        for (int i = 0; i < 3; ++i) res.mat[i][i] = 0;
        return res;
    }
};
// 合并操作：类似矩阵乘法，但在 (min, +) 半环上
Matrix merge(const Matrix& l, const Matrix& r) {
    Matrix res;
    for (int i = 0; i < 3; ++i) {
        for (int j = i; j < 3; ++j) { // 左区间结束状态
            if (l.mat[i][j] >= INF) continue;
            for (int k = j; k < 3; ++k) { // 右区间结束状态
                res.mat[i][k] = min(res.mat[i][k], l.mat[i][j] + r.mat[j][k]);
            }
        }
    }
    return res;
}

// 根据 A[i] 的值生成单点转移矩阵
Matrix make_matrix(ll x) {
    Matrix res;
    // 状态代价：a[0]前置 A_i, a[1]路径中(A_i=0则代价1), a[2]后置 A_i
    ll a[3] = { x, (x == 0 ? 1LL : 0LL), x };
    
    for (int i = 0; i < 3; ++i) {
        for (int j = i; j < 3; ++j) {
            // 在这一个点，你可以从状态 i 经过中间状态 k 变成 j
            for (int k = i; k <= j; ++k) {
                res.mat[i][j] = min(res.mat[i][j], a[k]);
            }
        }
    }
    return res;
}

// 手写线段树类
class SegmentTree {
    int n;
    vector<Matrix> tree;

public:
    SegmentTree(const vector<ll>& A) {
        n = A.size();
        tree.resize(4 * n);
        build(A, 1, 0, n - 1);
    }
    void build(const vector<ll>& A, int node, int start, int end) {
        if (start == end) {
            tree[node] = make_matrix(A[start]);
            return;
        }
        int mid = (start + end) / 2;
        build(A, 2 * node, start, mid);
        build(A, 2 * node + 1, mid + 1, end);
        tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
    }
    void update(int node, int start, int end, int idx, ll val) {
        if (start == end) {
            tree[node] = make_matrix(val);
            return;
        }
        int mid = (start + end) / 2;
        if (idx <= mid) update(2 * node, start, mid, idx, val);
        else update(2 * node + 1, mid + 1, end, idx, val);
        tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
    }
    ll query_all() {
        // 返回从状态 0 (还没开始) 到状态 2 (已经结束) 的最小总代价
        return tree[1].mat[0][2];
    }
};

int main() {
    // 优化标准输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, Q;
    if (!(cin >> N >> Q)) return 0;
    vector<ll> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    SegmentTree st(A);
    for (int q = 0; q < Q; ++q) {
        int i;
        ll v;
        cin >> i >> v;
        st.update(1, 0, N - 1, i - 1, v);
        cout << st.query_all() << "\n";
    }
    return 0;
}