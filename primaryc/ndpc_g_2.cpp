#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
const ll INF = 1e16; // 确保 INF + INF 不会溢出 long long
struct Matrix {
    ll m[3][3];
    Matrix() {
        for(int i=0; i<3; ++i)
            for(int j=0; j<3; ++j)
                m[i][j] = INF;
    }
};
// 合并两个区间的状态矩阵
Matrix merge(const Matrix& L, const Matrix& R) {
    Matrix res;
    for(int i=0; i<3; ++i) { // 起始状态
        for(int j=i; j<3; ++j) { // 中间状态（左区间的结束，右区间的开始）
            if(L.m[i][j] >= INF) continue;
            for(int k=j; k<3; ++k) { // 最终状态
                res.m[i][k] = min(res.m[i][k], L.m[i][j] + R.m[j][k]);
            }
        }
    }
    return res;
}
// 构造单点的状态矩阵
Matrix make_matrix(ll a) {
    Matrix res;
    // a_cost[s] 表示该点处于状态 s 时的代价
    ll a_cost[3] = {
        a,              // 状态 0: 区间左侧，不发糖，代价 Ai
        (a == 0 ? 1LL : 0LL), // 状态 1: 区间内，发糖，代价 (Ai==0 ? 1 : 0)
        a               // 状态 2: 区间右侧，不发糖，代价 Ai
    };
    for(int i=0; i<3; ++i) {
        for(int j=i; j<3; ++j) {
            // 在这一个点内，可以经历从状态 i 到状态 j 的转变
            // 我们取在这一个点上所有经过状态的代价最小值
            for(int k=i; k<=j; ++k) {
                res.m[i][j] = min(res.m[i][j], a_cost[k]);
            }
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, Q;
    if(!(cin >> N >> Q)) return 0;
    vector<ll> A(N);
    for(int i=0; i<N; ++i) cin >> A[i];
    int n_tree = 1;
    while(n_tree < N) n_tree *= 2;
    vector<Matrix> tree(2 * n_tree);
    // 初始化线段树
    for(int i=0; i<N; ++i) tree[i + n_tree] = make_matrix(A[i]);
    // 对于超出 N 的补位节点，应设为单位元矩阵（状态不改变，代价为0）
    for(int i=N; i<n_tree; ++i) {
        for(int j=0; j<3; ++j) tree[i + n_tree].m[j][j] = 0;
    }
    for(int i = n_tree - 1; i >= 1; --i) {
        tree[i] = merge(tree[2*i], tree[2*i+1]);
    }
    while(Q--) {
        int i; ll v;
        cin >> i >> v;
        i--; 
        // 更新单点并上传
        int idx = i + n_tree;
        tree[idx] = make_matrix(v);
        for(idx /= 2; idx >= 1; idx /= 2) {
            tree[idx] = merge(tree[2*idx], tree[2*idx+1]);
        }
        // 最终答案是从“状态 0”开始，经过“状态 1”，到达“状态 2”的最小代价
        // tree[1].m[0][2] 强制路径包含了 0->1->2 的过程，即必然选定了一个区间
        cout << tree[1].m[0][2] << "\n";
    }
    return 0;
}