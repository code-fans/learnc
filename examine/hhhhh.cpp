/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    while (cin>>str)
    {
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i]=='(')
                for (int j = i; j < str.size(); j++){
                    if(str[i]==')'){
                        str[i]=' ';
                        str[j]=' ';
                        break;
                    }
                }
        }
        for (int j = 0; j < str.size(); j++)
        {
            if(str[j]!=')'||str[j]!='(')
                cout<<' ';
            else if(str[j]=='(')
                cout<<'$';
            else
                cout<<'?';
        }
    }
    return 0;
}*/
