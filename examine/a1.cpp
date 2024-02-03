#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    char a;
    long long padd=0, pmulti,i=1;
    cin>>pmulti; 
    pmulti %= 10000;
    while (cin>>a){
        if(a!='*' && a!='+')
            break;
        long long temp;
        cin>>temp;
        if(a=='*'){
            pmulti *= temp;
            pmulti %= 10000;
        } else {
            padd += pmulti;
            padd %= 10000;
            pmulti = temp;
        }
    }
    padd += pmulti;

    cout<<padd%10000<<endl;
    return 0;
}