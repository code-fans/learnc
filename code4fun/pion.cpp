#include <cmath>
#include <cstdio>
using namespace std;

double leibnitz_pi()
{
    double ans=4;
    for (long long i = 1; i < 10000000; i++)
    {
        ans+= 4.0/(i*4.0+1.0) - 4.0/(i*4.0-1.0);
        /*
        if(i%1000 == 0)
            printf("%.20lf\n",ans);
        */
    }
    return ans;
}

double nilakante_pi()
{
    double ans=3.0;
    for (long long i = 0; i < 100000; i++)
    {
        ans += double(4.0)/double((i*4+2)*(i*4+3)*(i*4+4)) - double(4.0)/double((i*4+4)*(i*4+5)*(i*4+6));
        if(i%1000 == 0)
            printf("%.20lf\n",ans);
    }
    return ans;
}

double bbp_pi()
{
    double ans=0.0;
    for (long long i = 0; i < 1000; i++)
    {
        ans += (4.0/(8.0*i+1.0) - 2.0/(8.0*i+4.0) - 1.0/(8.0*i+5.0)- 1.0/(8.0*i+6.0) ) / pow(16, i);
        if(i%1000 == 0)
            printf("%.20lf\n",ans);
    }
    return ans;
}


int main()
{
    printf("%.20lf\n",bbp_pi());
    return 0;
}