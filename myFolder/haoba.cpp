#include <iostream>
#include <algorithm>
#include <cmath>
#define INF 999999999

using namespace std;

int main(){
    int n;
    cin>>n;
    while (n){
        int sd, sj;
        double ans= INF;
        for (int i = 0; i < n; i++){
            cin>>sd >> sj;
            if(sj>=0){
                double csj = sj + 16200.0/sd;
                if(csj < ans){
                    ans = csj;
                }
            }
        }
       
        cout<<ceil(ans)<<endl;
        cin>>n;
    }
    return 0;
}