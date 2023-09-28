#include<cstdio>
using namespace std;
int main(){
    freopen("data/time.in", "r", stdin);
    int n, s, m, h;
    scanf("%d",&n);
    s=n%60;
    n=n/60;
    m=n%60;
    h=n/60;
    freopen("data/time.out", "w", stdout);
    printf("%02d:%02d:%02d\n",h,m,s);
    fclose(stdin);
    fclose(stdout);
    return 0;
}