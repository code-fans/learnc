#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    while (getline(cin,str)){
        cout<<str<<endl;
        for (int i = 0; i < str.size(); i++){
            if(str[i]==')')
                for (int j = i-1; j >= 0; j--){
                    if(str[j]=='('){
                        str[i]=' ';
                        str[j]=' ';
                        break;
                    }
                    if(str[j]==')')
                        break;
                }
        }
        for (int i = 0; i < str.size(); i++){
            if(str[i]=='(')
                cout<<'$';
            else if (str[i]==')')
                cout<<'?';
            else
                cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}