#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 使用 long long 防止求和溢出
typedef long long ll;
const int MAXN = 100005;
int n, q;
ll a[MAXN];
struct Node {
    ll sum;      // 区间内所有 a[i] 的总和
    ll zeroCnt;  // 区间内 a[i] == 0 的个数
    ll lm;       // 最小代价：区间左侧是一段元素和，右侧是一段 0 的个数
    ll mr;       // 最小代价：区间左侧是一段 0 的个数，右侧是一段 元素和
    ll lmr;      // 全局最小代价：左侧(和) + 中间(0的个数) + 右侧(和)
};
// 线段树合并函数：这是理解本题的关键
Node merge(const Node& a, const Node& b) {
    Node res;
    // 1. 总和与0的个数直接累加
    res.sum = a.sum + b.sum;
    res.zeroCnt = a.zeroCnt + b.zeroCnt;
    // 2. 更新 lm (左侧和 + 右侧0)
    // 来源A: 左半部分全是和 + 右半部分的 lm
    // 来源B: 左半部分的 lm + 右半部分全是 0
    res.lm = min(a.sum + b.lm, a.lm + b.zeroCnt);
    // 3. 更新 mr (左侧0 + 右侧和)
    // 来源A: 左半部分全是 0 + 右半部分的 mr
    // 来源B: 左半部分的 mr + 右半部分全是和
    res.mr = min(a.zeroCnt + b.mr, a.mr + b.sum);
    // 4. 更新 lmr (全局最优：和 + 0 + 和)
    // 来源A: 左半部分全是和 + 右半部分的 lmr
    // 来源B: 左半部分的 lmr + 右半部分全是和
    // 来源C: 左半部分的 lm + 右半部分的 mr (即：(a和+a0) + (b0+b和))
    res.lmr = min({a.sum + b.lmr, a.lmr + b.sum, a.lm + b.mr});
    return res;
}

Node tree[MAXN << 2];
// 建立叶子节点
Node make_node(ll val) {
    ll is_zero = (val == 0 ? 1 : 0);
    // 单个元素的 sum 是它本身，zeroCnt 是 1 或 0
    // 对于单个元素，lm, mr, lmr 都是 val 和 is_zero 的最小值
    return {val, is_zero, min(val, is_zero), min(val, is_zero), min(val, is_zero)};
}

void build(int pos, int L, int R) {
    if (L == R) {
        tree[pos] = make_node(a[L]);
        return;
    }
    int mid = (L + R) >> 1;
    build(pos << 1, L, mid);
    build(pos << 1 | 1, mid + 1, R);
    tree[pos] = merge(tree[pos << 1], tree[pos << 1 | 1]);
}

void update(int pos, int L, int R, int idx, ll val) {
    if (L == R) {
        tree[pos] = make_node(val);
        return;
    }
    int mid = (L + R) >> 1;
    if (idx <= mid) update(pos << 1, L, mid, idx, val);
    else update(pos << 1 | 1, mid + 1, R, idx, val);
    tree[pos] = merge(tree[pos << 1], tree[pos << 1 | 1]);
}

int main() {
    // 优化 IO 速度
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (!(cin >> n >> q)) return 0;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    build(1, 1, n);
    for (int i = 0; i < q; ++i) {
        int x;
        ll y;
        cin >> x >> y;
        update(1, 1, n, x, y);
        // tree[1].lmr 存储了整个序列的最小代价
        cout << tree[1].lmr << "\n";
    }
    return 0;
}