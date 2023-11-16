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

bool ishw(int a)
{
    return a%10 == a/100;
}

int main()
{
    for (int i = 100; i < 1000; i++){
        if(isp(i) && ishw(i))
            cout<<i<<endl;
    }
    return 0;
}