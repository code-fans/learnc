/*
 * ================================================================
 *   神经网络文本分类器 —— 识别英文 vs 拼音
 * ================================================================
 *
 *   算法流程：逐词判断 + 多数投票
 *     1. 对句子中每个单词提取 7 维特征向量
 *     2. 送入两层神经网络，输出 (0,1) 之间的预测分数
 *     3. 统计投票数，多数决定句子类别
 *
 *   特征定义 (7 维):
 *     f[0] = 词长 / 8           拼音词通常较短 (2~6字母)
 *     f[1] = 是否含字母 q       拼音高频: qi/qing/quan...
 *     f[2] = 是否含字母 x       拼音高频: xi/xing/xue...
 *     f[3] = 是否含 zh/ch/sh    拼音特有声母组合, 英文不含
 *     f[4] = 词尾非拼音字母      英文常以 s/d/k/t 结尾, 拼音只以 a/e/i/o/u/n/g/r 结尾
 *     f[5] = 是否有连续辅音对    th/br/st 等是英文特征 (排除 zh/ch/sh)
 *     f[6] = 元音字母占比        拼音韵母结构简单, 元音占比偏高
 *
 *   网络结构：输入层(7) → 隐藏层(4) → 输出层(1)
 *     总参数量 = 7×4 + 4 + 4×1 + 1 = 33
 *
 * ================================================================
 */

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

const int NI = 7;
const int NH = 4;

double sigmoid(double x) { return 1.0 / (1.0 + exp(-x)); }
double sig_d(double s) { return s * (1.0 - s); }

// ============================================================
//  神经网络类
//
//  结构示意 (全连接):
//
//    输入层 (NI=7)      隐藏层 (NH=4)      输出层 (1)
//
//    f[0] ──┐           ┌── H[0] ─── W2[0] ──┐
//    f[1] ──┤           ├── H[1] ─── W2[1] ──┼──→ ŷ + b2
//    f[2] ──┼─── W1 ──→ ├── H[2] ─── W2[2] ──┤
//    f[3] ──┤           └── H[3] ─── W2[3] ──┘
//    f[4] ──┤                 + b1[j]
//    f[5] ──┤
//    f[6] ──┘
//
//  权重展开:
//
//              f[0]      f[1]      f[2]      f[3]      f[4]      f[5]      f[6]
//    H[0]   W1[0][0]  W1[0][1]  W1[0][2]  W1[0][3]  W1[0][4]  W1[0][5]  W1[0][6]  → W2[0] ─┐
//    H[1]   W1[1][0]  W1[1][1]  W1[1][2]  W1[1][3]  W1[1][4]  W1[1][5]  W1[1][6]  → W2[1] ─┤
//    H[2]   W1[2][0]  W1[2][1]  W1[2][2]  W1[2][3]  W1[2][4]  W1[2][5]  W1[2][6]  → W2[2] ─┼→ ŷ+b2
//    H[3]   W1[3][0]  W1[3][1]  W1[3][2]  W1[3][3]  W1[3][4]  W1[3][5]  W1[3][6]  → W2[3] ─┘
//
//  总参数: W1(28) + b1(4) + W2(4) + b2(1) = 37
// ============================================================
class NeuralNet {
public:
    double W1[NH][NI];
    double b1[NH];
    double W2[NH];
    double b2;

    NeuralNet() : b2(0) {
        srand(123);
        for (int j = 0; j < NH; j++) b1[j] = 0;
        for (int j = 0; j < NH; j++)
            for (int i = 0; i < NI; i++)
                W1[j][i] = (rand() % 1000 - 500) / 500.0;
        for (int j = 0; j < NH; j++)
            W2[j] = (rand() % 1000 - 500) / 500.0;
    }

    // ========================================================
    //  前向传播 (Forward Propagation)
    //
    //  数学表达:
    //    隐藏层: z1[j] = b1[j] + Σ_{i=0}^{NI-1} W1[j][i] * f[i]
    //            h[j]  = sigmoid(z1[j])
    //
    //    输出层: z2    = b2 + Σ_{j=0}^{NH-1} W2[j] * h[j]
    //            ŷ     = sigmoid(z2)
    // ========================================================
    double forward(const vector<double>& in, double hid[NH]) {
        for (int j = 0; j < NH; j++) {
            double z = b1[j];
            for (int i = 0; i < NI; i++)
                z += W1[j][i] * in[i];
            hid[j] = sigmoid(z);
        }
        double z = b2;
        for (int j = 0; j < NH; j++)
            z += W2[j] * hid[j];
        return sigmoid(z);
    }

    // ========================================================
    //  反向传播训练 (Backpropagation)
    //
    //  ---- 第 1 步: 损失函数 ----
    //    L = ½(target - ŷ)²
    //
    //  ---- 第 2 步: 输出层误差项 ----
    //    δ_out = (target - ŷ) × σ'(ŷ)
    //
    //    直觉:
    //      target - ŷ > 0  →  预测偏小, 正向调整
    //      target - ŷ < 0  →  预测偏大, 反向调整
    //      σ'(ŷ) 在 ŷ=0.5 时最大 → 最不确定时调整幅度最大
    //
    //  ---- 第 3 步: 隐藏层误差项 ----
    //    δ_hid[j] = δ_out × W2[j] × σ'(h[j])
    //
    //    输出误差通过 W2[j] 反向传回, 连接越强, "责任"越大.
    //
    //  ---- 第 4 步: 梯度下降更新参数 ----
    //    W2[j]    += lr × δ_out   × h[j]
    //    b2       += lr × δ_out
    //    W1[j][i] += lr × δ_hid[j] × f[i]
    //    b1[j]    += lr × δ_hid[j]
    //
    //    公式推导 (以 W2[j] 为例):
    //      ∂L/∂W2[j] = -δ_out × h[j]
    //      W2[j] ← W2[j] - lr × ∂L/∂W2[j]
    //             = W2[j] + lr × δ_out × h[j]
    // ========================================================
    //  参数说明:
    //    in     - 输入特征向量 (当前单词的 NI 维特征)
    //    target - 期望输出 (1.0=英文, 0.0=拼音)
    //    lr     - 学习率 (Learning Rate), 控制每次参数更新的步长
    //             lr 过大 → 震荡不收敛; lr 过小 → 学习速度慢
    //             本程序取 5.0, 配合小数据集可快速拟合
    void train(const vector<double>& in, double target, double lr) {
        double hid[NH];
        double out = forward(in, hid);

        double d_out = (target - out) * sig_d(out);

        for (int j = 0; j < NH; j++) {
            double d_hid = d_out * W2[j] * sig_d(hid[j]);
            for (int i = 0; i < NI; i++)
                W1[j][i] += lr * d_hid * in[i];
            b1[j] += lr * d_hid;
        }

        for (int j = 0; j < NH; j++)
            W2[j] += lr * d_out * hid[j];
        b2 += lr * d_out;
    }

    double predict(const vector<double>& in) {
        double hid[NH];
        return forward(in, hid);
    }
};

// ============================================================
//  特征提取: 将一个单词转换为 7 维向量
//
//  示例 "quick": f = [0.625, 1, 0, 0, 1, 1, 0.4]
//    f[1]=1: 含 q
//    f[4]=1: k 结尾, 非拼音词尾
//    f[5]=1: ck 连续辅音
//
//  示例 "qi":    f = [0.25, 1, 0, 0, 0, 0, 0.5]
//    f[1]=1: 含 q
//    f[4]=0: i 结尾, 拼音词尾
//    f[5]=0: q-i 非连续辅音
//
//  示例 "zhe":   f = [0.375, 0, 0, 1, 0, 0, 0.5]
//    f[3]=1: 含 zh
//
//  示例 "the":   f = [0.375, 0, 0, 0, 0, 1, 0.5]
//    f[3]=0: th 非 zh/ch/sh
//    f[5]=1: th 连续辅音
// ============================================================
vector<double> word_feat(const string& w) {
    int has_q = 0, has_x = 0, has_zhcs = 0, cc = 0, vowels = 0;

    for (int i = 0; i < (int)w.size(); i++) {
        if (w[i] == 'q') has_q = 1;
        if (w[i] == 'x') has_x = 1;
        if (w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u')
            vowels++;

        if (i + 1 < (int)w.size()) {
            bool c1 = !(w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u');
            bool c2 = !(w[i+1]=='a'||w[i+1]=='e'||w[i+1]=='i'||w[i+1]=='o'||w[i+1]=='u');
            if (c1 && c2) {
                if ((w[i]=='z'&&w[i+1]=='h')||(w[i]=='c'&&w[i+1]=='h')||(w[i]=='s'&&w[i+1]=='h'))
                    has_zhcs = 1;
                else
                    cc = 1;
            }
        }
    }

    char last = w.back();
    int end_eng = 0;
    if (last!='a'&&last!='e'&&last!='i'&&last!='o'&&last!='u'&&last!='n'&&last!='g'&&last!='r')
        end_eng = 1;

    return {
        (double)w.size() / 8.0,
        (double)has_q,
        (double)has_x,
        (double)has_zhcs,
        (double)end_eng,
        (double)cc,
        (double)vowels / w.size()
    };
}

// ============================================================
//  主函数
// ============================================================
int main() {
    NeuralNet nn;

    vector<pair<vector<double>, double>> data;

    const char* en[] = {
        "the","this","brown","quick","jumps",
        "is","has","was","read","find",
        "have","will","of","in","to",
    };
    const char* cn[] = {
        "qi","xiang","xue","xiao","qing",
        "zhi","shi","zhan","chang","cheng",
        "zhe","ge","de","he","men",
    };

    for (auto w : en) data.push_back({word_feat(w), 1.0});
    for (auto w : cn) data.push_back({word_feat(w), 0.0});

    for (int epoch = 0; epoch < 200; epoch++)
        for (auto& p : data)
            nn.train(p.first, p.second, 5.0);

    ios::sync_with_stdio(false);
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        int eng = 0;
        for (int i = 0; i < n; i++) {
            string w; cin >> w;
            if (nn.predict(word_feat(w)) > 0.5) eng++;
        }
        cout << (eng > n / 2 ? "English" : "Pinyin") << '\n';
    }
}
