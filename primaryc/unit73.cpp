#include<iostream>
#include<iomanip>
using namespace std;

bool choushu(int n)
{
    for(;n%2==0;n/=2);
    for(;n%3==0;n/=3);
    for(;n%5==0;n/=5);
    return(n==1);
} 

int main()
{
    int num=0;
    for(int i=1;i<=100000000;i++)
    {
        if(choushu(i)){
            cout<<setw(11)<<i;
            num++;
            if (num%5==0){
                cout<<endl;
            }
        }
    }
    cout<<endl<<"个数"<<num<<endl;
    return 0;
}