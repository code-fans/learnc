#include <iostream>
#include <cmath>
using namespace std;
bool isp(int a){
    for (int i = 2; i*i <= a; i++){
        if(a%i==0) return false;
    }
    return true;
}
int main()
{
    for (int i = 2; i <= 1000000; i++){
        if(isp(i))
            cout<<i<<' ';
    }
    
    return 0;
}
 