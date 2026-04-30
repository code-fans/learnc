#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

double sigmoid(double x) { return 1.0 / (1.0 + exp(-x)); }

const int NI = 7, NH = 4;

const double W1[NH][NI] = {
    { 3.710006f, -2.413765f, -2.803077f, -2.680381f,  1.579006f,  1.954104f,  0.245059f},
    {13.538697f, -4.231386f, -5.780430f, -5.164664f,  4.589959f,  3.178131f,  3.330309f},
    {-3.958442f,  4.382911f,  5.746146f,  5.367162f, -3.292627f,  0.012318f, -4.969226f},
    {-4.715671f,  4.459607f,  5.380659f,  5.025408f, -3.800097f, -0.080590f, -2.934028f},
};
const double b1[NH] = { -4.225355f, -8.699625f,  0.051223f, -1.043316f};
const double W2[NH] = {  2.037527f,  7.936069f, -6.270283f, -4.418031f};
const double b2     = -1.764993f;

double predict(const vector<double>& in) {
    double hid[NH];
    for (int j = 0; j < NH; j++) {
        double z = b1[j];
        for (int i = 0; i < NI; i++) z += W1[j][i] * in[i];
        hid[j] = sigmoid(z);
    }
    double z = b2;
    for (int j = 0; j < NH; j++) z += W2[j] * hid[j];
    return sigmoid(z);
}

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

int main() {
    ios::sync_with_stdio(false);
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        int eng = 0;
        for (int i = 0; i < n; i++) {
            string w; cin >> w;
            if (predict(word_feat(w)) > 0.5) eng++;
        }
        cout << (eng > n / 2 ? "English" : "Pinyin") << '\n';
    }
}
