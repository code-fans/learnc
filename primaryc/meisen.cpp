#include <iostream>
#include <iomanip>
using namespace std;
bool isPrimeNumber(long long unm){
    if(unm<=1)
        return false;
    for (long long i=2; i*i <= unm;i++){
        if (unm%i==0)
            return false;
    }
    return true;
}
int main()
{
    long long e=2;
    for(int i=1;i<64;i++){
        if (isPrimeNumber(e-1))
            cout<<e-1<<" "<<i<<endl;
        e*=2;
    }
    return 0;
}