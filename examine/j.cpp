#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    char a,b;
    cin>>a>>b;
    for (int i = 0; i < str.size(); i++){
        if(str[i]==a)
            cout<<b;
        else
            cout<<str[i];
    }
    cout<<endl;
    return 0;
}