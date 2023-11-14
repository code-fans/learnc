#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[100],i=0;
    cin.getline(str,100);
    ////int len=strlen(str);
    while (str[i]!='\0'){
        if (str[i]=='0')
            str[i]='O';
        if (str[i]=='1')
            str[i]='I';
        if (str[i]=='2')
            str[i]='Z';
        i++;
    }
    cout<<str<<endl;
    return 0;
}