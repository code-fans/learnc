#include <iostream>
using namespace std;
int main()
{
    int a[10][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cin>>a[i][j];
        }
    }

    for(int i=0; i<10; i++){
        if(a[0][i]==0) a[0][i] =2;
        if(a[i][0]==0) a[i][0] =2;
        if(a[9][i]==0) a[9][i] =2;
        if(a[i][9]==0) a[i][9] =2;
    }
    bool needCheck = true;
    while(needCheck){
        needCheck = false;
        for (int i = 1; i < 9; i++){
            for (int j = 1; j < 9; j++){
                if(a[i][j]==0 &&
                    ( a[i][j-1]==2 || a[i][j+1]==2 || a[i-1][j]==2 || a[i+1][j]==2  )){
                        a[i][j] =2;
                        needCheck = true;
                }
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if(a[i][j] == 0)
                ans ++;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}
