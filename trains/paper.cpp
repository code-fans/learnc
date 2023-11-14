#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    // a%2==0 ? 1
    //cout<<(((a%2==0 ? 1 : 0) +(((b-a+1)-(a%2==0 ? 1 : 0))/2)+(((b-a+1)-(a%2==0 ? 1 : 0))%2))) <<endl;
    //cout<<( a%2==0 ? 1 +(b-a+1)/2 : (b-a)/2+1) << endl;
    cout << 1+(b-a+(a+1)%2)/2 << endl;
    return 0;
}