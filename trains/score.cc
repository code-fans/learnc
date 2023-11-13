#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str;
    cin>>str;
    int a=0, b=0;
    while (str!='#'){
        if (str=='N') a++;
        if (str=='G') b++;
        if ((a>10&&a>=b+2)||(b>10&&b>=a+2)){
            cout<<a<<":"<<b<<endl;
            a=0;
            b=0;
        }
        cin>>str;
    }
    if(a!=0||b!=0)
        cout<<a<<":"<<b<<endl;
    return 0;
}
//NNNGGNNNNNNNNGGGGG#