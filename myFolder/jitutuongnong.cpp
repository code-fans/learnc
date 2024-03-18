#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int a[10000],i=1, mina, maxa,ao;
    cin >>a[0];
    mina = a[0];
    maxa = a[0];
    double sum=a[0];
    while (cin>>a[i]){
        sum+=a[i];
        if(mina>a[i])
            mina=a[i];
        if(maxa<a[i])
            maxa=a[i];
        i++;
    }
    cout<<mina<<' '<<maxa;
    printf(" %0.3f\n",sum/double(i));
    return 0;
}