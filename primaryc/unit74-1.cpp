#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNumber(int unm){
    if(unm<2)
        return false;
    for (int i=2; i <=  sqrt(unm); i++){
        if (unm%i==0)
            return false;
    }
    return true;
}

bool PrimeNumber(int unm){
    for(int i=10; i<unm; i*=10) {
        if(i>10 && unm % i == unm % (i/10))
            return false;
        if(! isPrimeNumber(unm % i))
            return false;
    }
    return isPrimeNumber(unm);
}

// 123 -> 321
int reverse(int num){
    int ans=0;
    while (num>0)
    {
        ans =ans * 10 +  num % 10;
        num /= 10;
    }
    return ans;
}

int main2()
{
    int n;
    cout << "请输入一个数字：";
    cin >>  n;
    cout << reverse(n) << endl;
}

int main()
{
    int i;
    for(i=1; i<=1000000; i++)
    {
        if (PrimeNumber(i))
            cout<<i<<endl;
    }
    return 0;
}