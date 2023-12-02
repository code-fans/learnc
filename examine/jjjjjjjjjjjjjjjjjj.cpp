#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int a=1;
    char b=str[0];
    for (int i = 1; i < str.size(); i++){
        if(str[i]==b){
            a++;
        }
        else{
            cout<<a<<b;
            a=1;
            b=str[i];
        }
    }
    cout<<a << b <<endl;
    return 0;
}