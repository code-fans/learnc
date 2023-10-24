#include <iostream>
using namespace std;
int main()
{
    long long a, n, ans, ans1, l,m ,p;
    cin>>a>>n;
    m=a;
    p=n;
    while (a%n!=0)
    {
        l=a%n;
        a=n;
        n=l;
    }
    cout<<n<<' ';
    cout<<p/n*m<<endl;
    return 0;
}