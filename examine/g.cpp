#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long a=9,b=1,n=0;
    cin>>n;
    if(n==1){
        cout<<9<<endl;
        return 0;
    }    
    
    for (int i = 1; i < n-1; i++){
        long long a1=a;
        a=(9*a+b)%12345;
        b=(b*9+a1)%12345;
    }
    cout<<(8*a+b)%12345<<endl;
    return 0;
}