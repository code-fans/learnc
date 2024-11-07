#include <iostream>
using namespace std;

void to(int b){
    if(b>=10){
        char ans='A'+b-10;
        cout<<ans;
    }
    else
        cout<< b;
}

int main()
{
    long long ll;
    cin>>ll;

    do {
        int a;
        a= ll & 0x7f;
        ll >>= 7;
        if (ll!=0)
            a |= 0x80;
        to(a>>4);
        to(a%16);
        cout<<' '; 
    } while(ll);
    
    cout<<endl;
    return 0;
}