#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    for (int i = 0; i < str.size(); i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
            if(str[i]=='Z'){
                cout<<'A';
            }
            else if(str[i]=='z'){
                cout<<'a';
            }
            else{
                cout<<char(str[i]+1);
            }
        }
        else{
            cout<<str[i];
        }
    }
    cout<<endl;
    return 0;
}