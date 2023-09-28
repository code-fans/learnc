#include <cstdio>
int main(){
    freopen("data/input.txt", "r"/* r read w write*/, stdin);
    int r,c,ans=0;
    scanf("%d%d",&r,&c);
    int a[r*c*2];

    for (int i = 0; i < r*c *2; i++)
    {
        scanf("%d", a+i);
    }
    
    for (int i = 0; i < r*c; i++)
    {
        if (a[i]== a[r*c + i])
        {
            ans++;
        }
    }
    
    printf("%d\n",ans);
    return 0;
}