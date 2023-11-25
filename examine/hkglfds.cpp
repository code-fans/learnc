#include <iostream>
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
    int n, n1;
    cin>>n>>n1;
    for (int i = n; i <= n1; i++){
        for (int l = i; l >= 1; l--){
            if (i%l==0&&isPrimeNumber(l)){
                cout<<l;
                if (i!=n1)
                {
                    cout <<",";
                }
                
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}