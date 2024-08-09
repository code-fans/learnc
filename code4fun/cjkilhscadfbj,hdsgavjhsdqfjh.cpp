#include <iostream>
using namespace std;
int main()
{
    int a,b,k;
    cin>>a>>b>>k;
    cout<< (k-1)%a+1 <<' '<<(k-1)%b+1;    
    return 0;
}