#include <cstdio>
using namespace std;
int main()
{
    int m,n,a,J=0;
    scanf("%d",&m);
    for (int i = 0; i < m; i++)
    {
        J=0;
        scanf("%d",&n);
        for (int c = 0; c < n; c++)
        {
            scanf("%d",&a);
            if (a==0)
            {
                J++;
            }
        }
        
    
        printf(J==0?"Qualifoed\n":"Unqualified\n");
        
    }
    return 0;
}