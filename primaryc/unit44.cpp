#include <iostream>
using namespace std;
int unit44_main()
{
    long long m ,n,t;
    cin>>m>>n>>t ;

    cout<< m/n <<".";
    m=m%n;
    for(int i=1 ;i<=t; i++)
    {
        cout<<(m*10)/n;
        m=(m*10)%n;
    }
     cout<<endl<<142857*7;
    return 0;
}
