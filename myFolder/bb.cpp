#include <iostream>
using namespace std;
int main()
{
    int a1[200][200];
    int n, ans=0;
    cin>>n;
    char c;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>c;
            if(c=='*')
                a1[i][j] = 0;
            else if(c=='@'){
                a1[i][j] = 1;
                ans ++;
            } else // #
                a1[i][j] = -1;
        }
    }
    int m, bd = 1;
    cin>>m;
    for (int i = 0; i < m; i++){
        for (int a = 0; a < n; a++){
            for (int j = 0; j < n; j++){
                if(a1[a][j]== bd){
                    if(a!=0 && a1[a-1][j]==0){
                        a1[a-1][j]=bd+1;
                        ans ++;
                    }
                    if(a!=n-1 && a1[a+1][j]==0){
                        a1[a+1][j]=bd+1;
                        ans ++;
                    }
                    if(j!=0 && a1[a][j-1]==0){
                        a1[a][j-1]=bd+1;
                        ans ++;
                    }
                    if(j!=n-1 && a1[a][j+1]==0){
                        a1[a][j+1]=bd+1;
                        ans ++;
                    }
                }
                
            }
        }
        bd++;
    }
    cout << ans << endl;
    return 0;
}


