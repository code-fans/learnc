#include <iostream>
using namespace std;
int lbszy(int e, int f, int g, int h)
{
    return (e+f+g+h==24) + (e+f+g-h==24) + (e+f+g*h==24) +
           (e+f-g+h==24) + (e+f-g-h==24) + (e+f-g*h==24) +
           (e+f*g+h==24) + (e+f*g-h==24) + (e+f*g*h==24) +

           (e-f+g+h==24) + (e-f+g-h==24) + (e-f+g*h==24) +
           (e-f-g+h==24) + (e-f-g-h==24) + (e-f-g*h==24) +
           (e-f*g+h==24) + (e-f*g-h==24) + (e-f*g*h==24) +

           (e*f+g+h==24) + (e*f+g-h==24) + (e*f+g*h==24) +
           (e*f-g+h==24) + (e*f-g-h==24) + (e*f-g*h==24) +
           (e*f*g+h==24) + (e*f*g-h==24) + (e*f*g*h==24) ;
}
int main()
{
    int a, b, c, d;
    int ans=0;
    cin>>a>>b>>c>>d;
    ans= lbszy(a,b,c,d);
    cout<<ans<<endl;
    return 0;
}

//return (a+b+c+d == 24) + (a+b+c+d == 24) + (a+b+c+d == 24) +
