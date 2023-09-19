#include<cstdio>
int a[4][7] = {{},
        {0,6,18,7,10,5,9},
        {0,13,2,16,17,14,8},
        {0,3,15,12,1,4,11}
        };
int main()
{
    int i, j;
    for(i=1;i<=3;i++){
        for(j=1;j<=6;j++){
            float f=a[i][j];
            printf("%8.2f", f);
        }
        printf("\n");
    }
    return 0;
}