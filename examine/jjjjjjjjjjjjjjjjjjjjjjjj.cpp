#include <iostream>
using namespace std;
bool isp(int a)
{
    for (int i = 2; i < a; i++)
    {
        if(a%i==0)
            return false;
    }
    return true;
}
int main()
{
    int a[1000],len=0,ans=0;
    cin>>len;
    for (int i = 2; i < len; i++)
    {
        if(isp(i))
            cout<<i<<endl;
    }
    return 0;
    
}