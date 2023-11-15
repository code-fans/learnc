#include <iostream>
using namespace std;

bool isp(int num)
{
    for (int i = 2; i*i <= num; i++){
        if (num%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int fw;
    cin>>fw;
    for (int i = 3; i < fw-1; i+=2){
        if(isp(i) && isp(i+2))
            cout<<i<<' '<<i+2<<endl;
    }
    return 0;
}