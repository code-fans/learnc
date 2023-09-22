#include <cstdio>
#include <algorithm>

int z[60]; 

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int i, n;
    scanf("%d", &n);
    for(i = 0;i < n;i ++)
        scanf ("%d", &z[i]);
        
    std::sort(z ,z + n,cmp);

    printf("\n");
    for ( i = 0; i < n; i++)
    {
        printf("%8d",z[i]);
    }
    printf("\n");
    return 0;
}