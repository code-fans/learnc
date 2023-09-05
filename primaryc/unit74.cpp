#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/// @brief 
/// @param unm 
/// @return 
bool isPrimeNumber(int unm){
    for (int i=2; i <=  sqrt(unm); i++){
        if (unm%i==0)
            return false;
    }
    return true;
}
int main()
{
    int i, j, n, w=6;
    cout<<"n=";
    do
    {
        cin>>n;
    } while (n<4);
    for(i=4;i<=n;i+=2){
        for(j=2; j<= i/2+1; j++){
            if(isPrimeNumber(j) && isPrimeNumber(i-j)){
                cout<<setw(w)<<i<<'='<<j<<'+'<<i-j<<"   ";
                break;
            }
        }
        if( i % 4 == 2)
            cout<< endl;
        if(j > i/2)
            cout<< i <<"验证失败！"<<endl;
    }
    cout<< endl;
    return 0;
}