#include <iostream>
using namespace std;

int main(){
    int n, all=0;
    cin>>n;
    for (int i = 1; i <= n; i++){
        all+=i;
        if(all > n && (all-n) % 3 == 0){
            cout<<(all - n) / 3 <<' '<<i<<endl;
            return 0;
        }
    }
    return 0;
}