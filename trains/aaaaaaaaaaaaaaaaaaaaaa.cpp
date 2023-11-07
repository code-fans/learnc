#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin>>str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]=='T')
        {
            cout<<'A';
        }
        else if (str[i]=='A')
        {
            cout<<'T';
        }
        else if (str[i]=='G')
        {
            cout<<'C';
        }
        else 
        {
            cout<<'G';
        }
    }
    return 0;
}