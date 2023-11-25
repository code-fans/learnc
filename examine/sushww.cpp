#include <iostream>
#include <string>
using namespace std;

bool zhuanchenrijingzhi(int k)
{
    int a=0,b=0;
    while (k!=0){
        if (k%2==0)
            a++;
        else
            b++;
        k/=2;
    }
    return a<b;
}

int main()
{
    int ans=0 ,ans1=0;
    for (int i = 1; i <= 1000; i++)
    {
        if (zhuanchenrijingzhi(i)){
            ans++;
        }
        else{
            ans1++;
        }
    }
    cout<<ans<<' '<<ans1<<endl;
    return 0;
}