#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;
double a[1010][1010]={{0.0}};

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    
    double lu=sqrt(2)*100;

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++){
            if(i==0) {
                a[i][j] = j*100;
            } else if(j==0) {
                a[i][j] = i*100;
            } else {
                a[i][j] = 0;
            }
        }
    }
    
    int n1;
    scanf("%d", &n1);

    int x,y;
    for (int i = 0; i < n1; i++){
        scanf("%d %d", &x, &y);
        if(x>0 && y>0 && x <= n && y <=m){
            a[x][y] = 1.0;
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            double lc = a[i][j-1]+100;
            if(lc > a[i-1][j]+100) 
                lc = a[i-1][j]+100;
            if(a[i][j] > 0.5){
                if(lc > a[i-1][j-1]+lu){
                    lc = a[i-1][j-1]+lu;
                }
            }
            a[i][j]=lc;
        }
    }
    printf("%.0f\n",a[n][m]);
    return 0;
}