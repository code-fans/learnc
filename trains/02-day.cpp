#include<cstdio>
int main()
{
    int l,y=0,r=0,ans=0,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d.%02d.%02d",&l,&y,&r);
    for (int i = 0; i < y-1; i++)
    {
        ans+=a[i];
    }
    if ( (l%400==0 || (l%4==0&&l%100!=0))  && y>2)
    {
        ans++;
    }
    ans+=r;
    printf("%d\n",ans);
}