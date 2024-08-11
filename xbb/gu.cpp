#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    map<string, string> a;
    string str;
    while(getline(cin, str)){
        std::istringstream iss(str);
        int f=0;
        string s;
        string t[5];
        while(iss>>s){
            t[f] = s;
            f++;
        }
        if(f==2){
            a[t[1]] = t[0];
        }else  break;
    }

    while(cin>> str){
        map<string, string>::iterator it = a.find(str);
        if(it != a.end() )
            cout << it->second << endl;
        else    
            cout<<"eh"<<endl;
    }
    return 0;
}