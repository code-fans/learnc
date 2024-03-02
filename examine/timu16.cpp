#include <iostream>
#include <algorithm>
using namespace std;
int heidongshuzhi(int a){
    int yz1,yz2,yz3;
    yz1=a%10;
    yz2=(a/10)%10;
    yz3=a/100;
    if(yz2>yz1){
        int b=yz2;
        yz2=yz1;
        yz1=b;
    }
    if(yz3>yz2){
        int b=yz3;
        yz3=yz2;
        yz2=b;
    }
    if(yz2>yz1){
        int b=yz2;
        yz2=yz1;
        yz1=b;
    }
    return (yz1*100+yz2*10+yz3)-(yz3*100+yz2*10+yz1);
}

int main(){
    int a, ans=0;
    cin>>a;
    while(a!=495){
        a = heidongshuzhi(a);
        ans ++;
    }
    cout<< ans <<endl;
    return 0;
}