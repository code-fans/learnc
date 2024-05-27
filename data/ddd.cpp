#include <iostream>
#include <cstdio>
using namespace std;

int gcm(int a, int b){
    while(a % b){
        int c = b;
        b = a % b;
        a = c;
    }
    return b;
}

int gcd(int a, int b){
    if(a==0 || b==0)
        return a+b;
    return a / gcm(a,b) * b;
}

int main()
{
    int n,toshu,zuoqi[1001],zuoqi2[1001][100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d",&toshu);
        for (int j = 0; j < toshu; j++){
            scanf("%d",zuoqi+j);
            for (int k = 0; k < zuoqi[j]; k++){
                scanf("%d",& zuoqi2[j][k]);
            }
        }
        
        bool needsearch = true;
        int sx = toshu, zh = 0, tianshu = 0;
        while(needsearch){
            needsearch = false;
            int a = gcd(zuoqi[0],zuoqi[1]);
            for (int j = 2; j < toshu; j++){
                a=gcd(a, zuoqi[j]);
            }
            for (int j = 0; j<a; j++){ // 循环天数
                int zx = -1; 
                int minx = 100000;
                bool yj = false;

                for(int k=0; k<toshu; k++){
                    if(zuoqi[k] > 0 ){
                        int nj = zuoqi2[k][j%zuoqi[k]];
                        if(nj < minx){
                            minx = nj;
                            yj = true;
                            zx = k;
                        } else if(nj == minx){
                            yj = false;
                        }
                    }
                }
                if(yj){
                    zuoqi[zx] = 0;
                    zh = tianshu + j +1;
                    needsearch = true;
                    sx --;
                }
            }
            tianshu += a;
        }
        printf("%d %d\n",sx,zh);
    }
    return 0;
}
