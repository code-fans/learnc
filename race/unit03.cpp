#include<cstdio>
//#define MAX_LEN 50
const int MAX_LEN = 50;

int main(){
    int m;
    long long a[MAX_LEN][MAX_LEN];
    do
    {
        scanf("%d", &m);
    } while (m<1||m>MAX_LEN);

    for(int i=0;i<m;i++){
        a[i][0]=1;
        a[i][i]=1;
        for(int j=1;j<i;j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            printf("%15lld", a[i][j]);
        }
        printf("\n");
    }
}