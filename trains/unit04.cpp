#include<cstdio>
struct point
{
    long long x, y;
};

point g[1000];

int main(){
    freopen("data/input.txt", "r"/* r read w write*/, stdin);
    int n;
    scanf ("%d", &n);
    //long long p[1000];
    for(int m=0; m<n; m++)
        scanf ("%lld,%lld", &g[m].x, &g[m].y);
    int num = 0;
    for (int r=1; r<n; r++){
        if(g[num].x < g[r].x)
            num = r;
    }
    printf("%lld,%lld\n", g[num].x, g[num].y);
    return 0;
}