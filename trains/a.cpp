#include<iostream>
using namespace std;
int main()
{
    int d[40]={0}, i=0;
    long long b;
    cin>>b;
    while(b!=0)
    {
        d[i++]=b%2;
        b/=2;
    }
    for(int j=15;j>=0;j--)
    {
        b=b*2+d[j];
    }
    for(int j=31;j>=16;j--)
    {
        b=b*2+d[j];
    }
    cout<<b<<endl;
    return 0;
}