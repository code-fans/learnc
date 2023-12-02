#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for (int i = 0; i < str.size(); i++){
        char c= str[str.size()-1-i];
        char b;
        int  indc;
        if(c>='a'){
            b = 'A';
            indc = c-'a';
        } else {
            b = 'a';
            indc = c-'A';
        }
        indc = (indc+3) % 26;
        cout << char(b + indc);
    }
    cout<<endl;
    return 0;
}