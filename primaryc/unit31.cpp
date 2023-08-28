#include <iostream>
using namespace std;
int unit31_main()
{
    int  i;
    for(i=1;i<=20;i++)
    {
    if(i%7==0||i%10==7)
     cout <<"过"<<" ";
    else
     cout <<i<<" ";

    }
    return 0;
}
