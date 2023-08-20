#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
int main()
{
    char str[2000];
    int i, unm, unma;
    unm =unma=0;

    gets(str);

    for (i=0;str[i]!='\0';i++){
        unm++;
        if(str[i]=='.')
            unma++;
    }
    puts(str);
    cout<<"字符个数:"<< unm <<endl;
    cout<<".的个数:"<< unma <<endl;
    return 0;
}