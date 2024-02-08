#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i=0; i<str.size(); i++){
        cout << str[i];
    }
    cout<<endl;
    for(int i=0; i<str.size(); i++){
        cout << str[i] <<' ';
    }
    cout<<endl;
    for(int i=0; i<str.size(); i++){
        cout << int(str[i])<<' ';
    }
    cout << endl << str.size()<< endl << str << endl;
    return 0;
}