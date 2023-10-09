#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a=0 ,b=0 ,c=0 ,d=0;
    cin>>a>>b>>c;
    cout<<min(min( a/3, b/2),(a+b-c)/5)<<endl;
    return 0;
    
}