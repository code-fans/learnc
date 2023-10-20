#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    int x,y=0,b=0,a=0,p=1;
    //scanf("%d=%d",&x,&y);
    cin>>x;
    char c;
    cin>>c;
    cin>>y;
    while (y)
    {
        b+=(y%10)*p;
        y/=10;
        if (y*b==x)
        {
            cout<<x<<"="<<y<<"*"<<b<<endl;
            return 0;
        }
        p*=10;
    }
    cout<<"Impossible"<<endl;
    return 0;
    
}