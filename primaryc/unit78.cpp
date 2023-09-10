#include <iostream>
using namespace std;

#define GCD greatestCommonDivisor
#define LCM leastCommonMultiple

// 碾转相除法求最大公约数
long long greatestCommonDivisor(long long num1, long long num2){

    int r = num1 % num2;
    while(r != 0){
        num1 = num2;
        num2 = r;
        r = num1 % num2;
    }
    return num2;
}

// 最小公倍数
long long leastCommonMultiple(long long num1, long long num2){
    int u = num1*(num2/greatestCommonDivisor (num1, num2));
    return u;
}

int main(){
    int a,n;
    
    do{
        cin>>a>>n;
    } while( a==0 || n==0);

    cout<< GCD(a,n)<<endl;
    cout<< LCM(a,n)<<endl;

    return 0;
}