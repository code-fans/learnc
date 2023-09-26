#include <stdio.h>
#include <string.h>

int main()
{
    char x[210], y[210], xy[210];
    scanf("%s%s",x,y);
    int xl=strlen(x),yl=strlen(y), z=0,ans=0, a, b; 
    for (int i = 0; i < xl || i < yl; i++)
    {

        if(xl-1-i>=0)
            a=x[xl-i-1]-'0';
        else
            a=0;

        if(yl-1-i>=0)
            b=y[yl-i-1]-'0';
        else
            b=0;
        xy[i]=(a+b+z)%10+'0';
        z=(a+b+z)/10;
        ans+=z;
    }
    int xyl = xl > yl ? xl : yl;
    if(z>0){
        xy[xyl] = '0' + z;
        xyl++; 
    }
    xy[xyl] = '\0';
    printf("%d\n",ans);
    printf("%s\n",xy);
    return 0;
}