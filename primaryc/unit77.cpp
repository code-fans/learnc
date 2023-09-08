#include <iostream>
using namespace std;
int zuoye2(int n)
{
    if(n==7)
        return 1;
    else
        return zuoye2(n+1)+1; 
}
int main2()
{
    cout<<zuoye2(1)<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int zuoye(int n)
{
    if(n==1)
        return 0;
    else
        return zuoye(n-1)+2; 
}
int main()
{
    cout<<zuoye(10)<<endl;
    return 0;
}