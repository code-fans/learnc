#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
double mianji(double f,double s,double d)
{
    double p=(f+s+d)/2;
    return sqrt(p*(p-f)*(p-s)*(p-d));
}
double juli(double a,double b,double c,double d)
{
    return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}
int main()
{
    double x,y,x1,y1,x2,y2;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    double a,b,c;
    a=juli(x,y,x1,y1);
    b=juli(x1,y1,x2,y2);
    c=juli(x,y,x2,y2);
    printf("%0.2f",mianji(a,b,c));
    return 0;
}