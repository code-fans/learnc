#include <cstdio>
int main(){
    freopen("data/input.txt", "r"/* r read w write*/, stdin);
    int r,c,ans=0;
    scanf("%d%d",&r,&c);
    int a[r][c], b[r][c];
    
    for (int i = 0; i < r; i++)
    {
        for (int e = 0; e < c; e++)
        {
            scanf("%d", &a[i][e]);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int e = 0; e < c; e++)
        {
            scanf("%d", &b[i][e]);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int e = 0; e < c; e++)
        {
            if (a[i][e]==b[i][e])
            {
                ans++;
            }
            
        }
        
    }
    
    printf("%d\n",ans);
    return 0;
}