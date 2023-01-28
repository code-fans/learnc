#include <iostream>
using namespace std;
int unit30_main()
{
    long long sum,n;
    int i;
    sum=1;
    n=1;
    for(i=1;i<=64;i++)
    {
        n*=2;
        sum+=n;
        cout<<i<<"  "<<n << "  "<< sum <<endl;
    }
    cout<<"总数"<<sum;
    return 0;
}

