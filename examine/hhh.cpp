#include <iostream>
using namespace std;
int ans[10000][10000];

int main(){
    int fangxiang=0,n,d=1;
    cin>>n;
    int x=-1,y=n-1;
    for (int i = 2*n; i > 1; i--){
        for (int j=0 ; j< i/2; j++){
            switch(fangxiang%4){
                case 0: x+=1; break;
                case 1: y-=1; break;
                case 2: x-=1; break;
                case 3: y+=1; break;
            }
            ans[x][y]=d;
            d++;
        }
        fangxiang++;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<ans[i][j]<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}