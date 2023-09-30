#include <cstdio>
int main()
{
    int a, m, max=0, max2=0,andmax;
    freopen("data/input.txt", "r"/* r read w write*/, stdin);
    scanf("%d%d",&a, &m);
    int all[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &all[i]);
    }
    for (int v = 0; v < m; v++)
    {
        max2+=all[v];
    }
    for (int i = 0; i < a-m; i++)
    {
        max2=max2-all[i]+all[i+m];
        if (andmax < max2)
        {
            andmax=max2;
        }
    }
    printf("%d\n",andmax);
    return 0;
}