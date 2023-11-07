#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin>>str;
    char a[100];
    for (int i = 0; i < str.size(); i++)
        if (i!=(str.size()-1))
            a[i]=str[i]+str[i+1];
        else
            a[i]=str[0]+str[i];
    a[str.size()] = '\0';
    cout<<a<<endl;
    return 0;
}