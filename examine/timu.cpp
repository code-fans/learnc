#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <algorithm>
using namespace std;
long long p[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int main()
{
    long long n;
    cin>>n;
    long long f=1;
    while(f*2<=n){
        int c=0;
        while(f*p[c]<=n){
            f*=p[c];
            c++;
        }
    }
    cout<<f<<endl;
    return 0;
}