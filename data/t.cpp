#include <iostream>
#include <cmath>
using namespace std;

bool isp(int ispp){
    if(ispp<2)
        return false;
    for (int i = 2; i*i <= ispp; i++){
        if (ispp%i==0)
            return false;
    }
    return true;
}

int allPram2(int ispp){
    if(ispp<4){
        cout<<ispp<<endl;
        return 0;
    }
    int i=0;
    for (i = 2; i <= ispp; i++){
        while (ispp%i==0){
            cout<<i<<endl;
            ispp/=i;
        }
    }
    cout<<i-1<<endl;
    return 0;
}

int allPram(int ispp){
    int i=2;
    while (i*i <= ispp){
        while (ispp > i && ispp%i==0){
            cout<<i<< ' ';
            ispp/=i;
        }
        i++;
    }
    cout<<ispp<<endl;
    return ispp;
}

int main()
{
    int n,n1,ans=0;
    cin>>n;
    cout << allPram(n) << endl;
    return 0;   
}