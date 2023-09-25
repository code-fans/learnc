#include <cstdio>
#include <stdio.h>
#include <ctype.h>
#include <iostream>
using namespace std;
int main()
{
    //char str[250];
    string str;
    int ans=0, ans2=0;
    //fgets(str, 250, stdin);
    getline(cin, str);
    for (int i = 0; str.size() > i; i++) //i < strlen(str)
    {
        if (isdigit(str[i]))
            ans++;
        else if (isalpha(str[i])!=0)
                ans2++;
    }
    printf("%d%4d\n",ans,ans2);
}