#include <iostream>
using namespace  std;
int b[1000][1000];
int main()
{
    int fangxiang [4][2];
    fangxiang[0][0] = 1;
    fangxiang[0][1] = 0;

    fangxiang[1][0] = 0;
    fangxiang[1][1] = -1;

    fangxiang[2][0] = -1;
    fangxiang[2][1] = 0;

    fangxiang[3][0] = 0;
    fangxiang[3][1] = 1;
    int n;
    cin >> n;

    int fx=0, k=1, s=n;
    int x=-1, y=n-1;
    for(int i=0; i<n; i++){
        x+= fangxiang[fx][0];
        y+= fangxiang[fx][1];
        b[x][y] = k;
        k++;
        
    }

    for(int i=n-1; i>0; i--){
        fx = (fx+1) %4;
        for(int j=0; j<i; j++){
            x+= fangxiang[fx][0];
            y+= fangxiang[fx][1];
            b[x][y] = k;
            k++;
        }
        fx = (fx+1) %4;
        for(int j=0; j<i; j++){
            x+= fangxiang[fx][0];
            y+= fangxiang[fx][1];
            b[x][y] = k;
            k++;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<b[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}