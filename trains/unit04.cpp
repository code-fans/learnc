#include <cstdio>
#include <algorithm>

struct point
{
    long long x, y;
};
point g[1000];

int main2(){
    freopen("data/input.txt", "r"/* r read w write*/, stdin);
    int n;
    scanf ("%d", &n);
    /*long long p[1000];*/
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

struct stud
{
    char name[20];
    int sum;
    int x,y;
};

bool cmp(stud a, stud b)//compare
{
    return a.sum > b.sum;
}

stud a[1000];

int main()
{
    freopen("data/input.txt", "r"/* r read w write*/, stdin);
    int i,n;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%s%d%d", a[i].name, &a[i].x, &a[i].y);
        a[i].sum = a[i].x + a[i].y;
    }

    std::sort(a, a+n, cmp);

    for (i = 0; i < n; i ++){
        printf("%12s%6d\n", a[i].name, a[i].sum);
    }
    return 0;
}
