#include <iostream>
using namespace std;
long long zs(int n)
{
    long long fn , fn1= 1, fn2= 2, fn3= 4;
   
    if (n==1)
    {
        return 1;
    }
    if (n==2)
    {
        return 2;
    }
    if (n==3)
    {
        return 4;
    }
    
    for (int i = 4; i <= n; i++)
    {
        fn=(fn1+fn2+fn3);
        fn1=fn2;
        fn2=fn3;
        fn3=fn;
    }
    return fn;
    
}

int main()
{
    long long n=1;
    cin>>n;
    while (n>0)
    {
        cout<<zs(n)<<endl;
        cin>>n;
    }
    return 0;
}