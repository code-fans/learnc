#include <iostream>
using namespace std;

int N, k, ys[10100][110];

int main(){

    cin>> N >> k;
    int c, l;
    ys[0][0] = 1;
    for(int i=1; i<=N; i++){
        cin >> c;
        for(int j=0; j<k; j++){
            if(ys[i-1][j]){
                l = (j+c) % k;
                ys[i][l] = 1;
                l = ((j-c) % k + k) % k;
                ys[i][l] = 1;
            }
        }
    }
    if(ys[N][0]){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}