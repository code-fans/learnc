#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cstdio>
using namespace std;

float max(int a,int b,int c)
{
    if (a>b && a>c)
        return a;
    if (b>c)//b>a&&b>c
        return b;
    return (float)c;
}

int main()
{
    int a,b,c;
    float ans;
    cin>>a>>b>>c;
    ans= max(a,b,c) / ( max(a+b,b,c) * max(a,b,b+c) );
    printf("%.3f\n",ans);
    return 0;
}