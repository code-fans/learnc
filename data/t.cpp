#include <iostream>
#include <cmath>
using namespace std;

bool isp(int ispp){
    if(ispp<2)
        return false;
    for (int i = 2; i*i <= ispp; i++){
        if (ispp%i==0)
            return false;
    }
    return true;
}


int main()
{
    int n,n1,ans=0;
    cin>>n>>n1;
    for (int i = 1; i <= n; i++){
        if(n1>=maxPrime(i))
            ans++;
    }
    cout<<ans<<endl;
    return 0;   
}