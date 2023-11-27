#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double hn(int n,double x){ 
    if(n==1)
        return x/(x+1.0);
    else
        return x/(n+hn(n-1,x));
}

int main()
{
    int a,b;
    cin>>a>>b;
    double db = hn(b,a);
    printf("%.2lf\n", db);
    return 0; 
}