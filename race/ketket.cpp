#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    long long  n;
    cin>>n;
    n*=n;
    double ans=double(n)/100.0f;
    printf("%0.0f\n",ceil(ans));
    return 0;
}