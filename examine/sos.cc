#include <iostream>
using namespace std;
bool isp(int n)
{
    for (int i = 2; i*i <= n; i++)
        if (n%i==0)
            return false;
    return true;
}
int main()
{
    int n,m,k;
    cin>>n;
    
    k = n/2;
    m = n-k;
    for (int i = 0; i < n/2; i++)
    {
        if (isp(m) && isp(k))
        {
            cout<<m*k<<endl;
            return 0;
        }
        else
        {
            k--;
            m++;
        }
    }
    
    return 0;
}