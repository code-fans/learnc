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
class NeuralNet {
public:
    double W1[NH][NI]; double b1[NH]; double W2[NH]; double b2;
    NeuralNet() : b2(0) {
        srand(123);
        for (int j = 0; j < NH; j++) b1[j] = 0;
        for (int j = 0; j < NH; j++)
            for (int i = 0; i < NI; i++)
                W1[j][i] = (rand() % 1000 - 500) / 500.0;
        for (int j = 0; j < NH; j++)
            W2[j] = (rand() % 1000 - 500) / 500.0;
    }
    double forward(const vector<double>& in, double hid[NH]) {
        for (int j = 0; j < NH; j++) {
            double z = b1[j];
            for (int i = 0; i < NI; i++) z += W1[j][i] * in[i];
            hid[j] = sigmoid(z);
        }
        double z = b2;
        for (int j = 0; j < NH; j++) z += W2[j] * hid[j];
        return sigmoid(z);
    }
    void train(const vector<double>& in, double target, double lr) {
        double hid[NH]; double out = forward(in, hid);
        double d_out = (target - out) * sig_d(out);
        for (int j = 0; j < NH; j++) {
            double d_hid = d_out * W2[j] * sig_d(hid[j]);
            for (int i = 0; i < NI; i++) W1[j][i] += lr * d_hid * in[i];
            b1[j] += lr * d_hid;
        }
        for (int j = 0; j < NH; j++) W2[j] += lr * d_out * hid[j];
        b2 += lr * d_out;
    }
};
vector<double> word_feat(const string& w) {
    int has_q = 0, has_x = 0, has_zhcs = 0, cc = 0, vowels = 0;
    for (int i = 0; i < (int)w.size(); i++) {
        if (w[i] == 'q') has_q = 1;
        if (w[i] == 'x') has_x = 1;
        if (w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u') vowels++;
        if (i + 1 < (int)w.size()) {
            bool c1 = !(w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u');
            bool c2 = !(w[i+1]=='a'||w[i+1]=='e'||w[i+1]=='i'||w[i+1]=='o'||w[i+1]=='u');
            if (c1 && c2) {
                if ((w[i]=='z'&&w[i+1]=='h')||(w[i]=='c'&&w[i+1]=='h')||(w[i]=='s'&&w[i+1]=='h'))
                    has_zhcs = 1;
                else cc = 1;
            }
        }
    }
    char last = w.back();
    int end_eng = 0;
    if (last!='a'&&last!='e'&&last!='i'&&last!='o'&&last!='u'&&last!='n'&&last!='g'&&last!='r')
        end_eng = 1;
    return {(double)w.size()/8.0,(double)has_q,(double)has_x,(double)has_zhcs,(double)end_eng,(double)cc,(double)vowels/w.size()};
}
int main() {
    NeuralNet nn;
    vector<pair<vector<double>, double>> data;
    const char* en[] = {"the","this","brown","quick","jumps","is","has","was","read","find","have","will","of","in","to"};
    const char* cn[] = {"qi","xiang","xue","xiao","qing","zhi","shi","zhan","chang","cheng","zhe","ge","de","he","men"};
    for (auto w : en) data.push_back({word_feat(w), 1.0});
    for (auto w : cn) data.push_back({word_feat(w), 0.0});
    for (int epoch = 0; epoch < 200; epoch++)
        for (auto& p : data) nn.train(p.first, p.second, 5.0);
    cout << "W1:" << endl;
    for (int j = 0; j < NH; j++)
        for (int i = 0; i < NI; i++)
            printf("%.6ff,\n", nn.W1[j][i]);
    cout << "b1:" << endl;
    for (int j = 0; j < NH; j++) printf("%.6ff,\n", nn.b1[j]);
    cout << "W2:" << endl;
    for (int j = 0; j < NH; j++) printf("%.6ff,\n", nn.W2[j]);
    cout << "b2:" << endl;
    printf("%.6ff\n", nn.b2);
}
