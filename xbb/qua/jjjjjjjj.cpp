#include <iostream>
using namespace std;
int ans=0;
void mf(int a, int b){
    int f[15];
    f[5] = 5;
    f[1] = a;
    f[2] = b;
    f[3] = 15-a-b;
    f[8] = 10-b;
    f[9] = 10-a;
    f[6] = 15-f[3]-f[9];
    f[4] = 10-f[6];
    f[7] = 10-f[3];
    int y[15]={0};
    for (int i = 1; i <= 9; i++){
        if(f[i]<1 || f[i]>9)
            return ;
        y[f[i]]++;
        if(y[f[i]]>1) return;
    }
    for (int i = 0; i < 3; i++){
        for (int j = 1; j <= 3; j++){
            cout<<f[i*3+j];
        }
        cout<<endl;
    }
    ans++;
    cout<<endl;
}
int main(){
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= 9; j++){
            if(i!=5&&j!=5&&i!=j){
                mf(i,j);
            }
        }
    }    
    cout<<ans<<endl;
    return 0;
}