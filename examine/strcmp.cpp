#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    string str[1000];
    int len=0;
    while(cin >> str[len])
        len++;
    string r = str[len-2], t = str[len-1];
    for (int i = 0; i < len-2; i++){
        if (str[i]==r)
            cout<<t<<' ';
        else
            cout<<str[i]<<' ';
    }
    cout<<endl;
    return 0;
}