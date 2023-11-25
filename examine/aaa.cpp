#include <iostream>
#include <string>
using namespace std;
bool ni(string str,int a){
    for (int i = 0; i < str.size(); i++)
        if (str[i]==str[a]&&i!=a)
            return false;
    return true;
}
int main()
{
    string str;
    cin>>str;
    for (int i = 0; i < str.size(); i++)
        if (ni(str,i)){
            cout<<str[i]<<endl;
            return 0;
        }
    cout<<"no"<<endl;
    return 0;
}