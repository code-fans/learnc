#include <iostream>
#include <cmath>
using namespace std;
int main2()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a*2+b*5+c*3)<d)
        cout<<"Yes"<<endl<<d-a*2+b*5+c*3<<endl;
    else
        cout<<"NO"<<endl<<a*2+b*5+c*3-d<<endl;
    return 0;
}
int main()
{
    cout<<int(-129.9 /10.0)<<endl;
    return 0;
}