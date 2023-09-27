#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    char x[210], y[210], xy[210];
    scanf("%s%s",x,y);
    int xl=strlen(x), yl=strlen(y), z=0, ans=0, a, b; 
    std::reverse(y,y+yl);
    std::reverse(x,x+xl);
    int xyl = std::max(xl, yl); // xl>yl ? xl : yl;  xl if xl>yl else yl

    for (int i = 0; i<xyl/*i < xl || i < yl*/; i++)
    {
        if(i<xl)
            a= x[i]-'0';
        else
            a=0;

        if(i<yl)
            b=y[i]-'0';
        else
            b=0;

        xy[i] = (a+b+z)%10+'0';
        z=(a+b+z)/10;
        //if(z>0) ans ++;
        ans+=z;
    }
    if (z!=0)
    {
        xy[xyl] = z+'0';
        xyl+=1;
    }   
    
    xy[xyl] = 0; //'0' == 48  ' ' 32  'A' 65 'a' 97

    std::reverse(xy,xy+xyl);
    
    printf("%d\n",ans);    
    printf("%s\n",xy);
    return 0;
}