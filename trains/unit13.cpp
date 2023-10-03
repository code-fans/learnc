#include <cstdio>
#include <iostream>
int a[100010];
int main()
{
    freopen("data/input.txt", "r"/* r read w write*/, stdin);
    int i, n, k;
    scanf("%d%d", &n, &k);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    std::sort(a, a + n);
    long long ans = 0;
    int L = 0;
    int R = 1;
    while (R<n)
    {
        if (a[R] - a[L] == k)
        {
            L++;
            R++;
            ans ++;
        } else if(a[R] - a[L] > k)
        {
            L++;
        } else if(a[R] - a[L] < k)
        {
            R++;
        }
    }
    printf("%lld\n", ans);
    return 0;
}