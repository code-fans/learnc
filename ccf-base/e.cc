#include <iostream>
using namespace std;
bool isWqs(long long num){
    long long yszh=1;
    for (long long k = 2; k < num; k++){
        if (num%k==0){
            yszh+=k;
        }
    }
    return yszh == num;
}

int main()
{
    long long a;
    cin>>a;
    for (long long i = 2; i <= a; i++)
        if(isWqs(i))
            cout<<i<<endl;
    return 0;
}