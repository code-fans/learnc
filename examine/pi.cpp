#include <iostream>
#include <cmath>
using namespace std;

double arctanx(double x)
{
    double m=x,ans=0;
    int fh=1;
    for (int i = 1; m/i >= 1e-6 ; i+=2)
    {
        ans+= fh*(m/i);
        m*=x*x;
        fh*=-1;
    }
    return ans;
} 

int main()
{
    cout.flags(cout.fixed); 
    cout.precision(10);
    cout<<arctanx(1 / sqrt(3))*6<< endl;
    //printf("%.10f\n",arctanx(1 / sqrt(3))*6 );
    return 0;
}