#include <iostream>
using namespace std;

void cout2hex(int a){
    int b = a/16;
    int c = a%16;
    if(b>9){
        cout << char('A'+b-10);
    } else {
        cout << b;
    }

    if(c>9){
        cout << char('A'+c-10);
    } else {
        cout << c;
    }
}

int main()
{
    long long s;
    cin>>s;
   
    while (s>127){
        int f = s % 128;
        s /= 128;
        cout2hex(f|128);
        cout<<' ';
    }
    cout2hex(s);
    cout << endl;
    return 0;
}