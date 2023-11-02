#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[1000], str1[1000],h[1000],k[1000];
    long long n, m, zh=0, zh1=0,ans,len=0,len1=0;
    cin.getline(str, 1000,'\n');
    cin.getline(str1, 1000,'\n');
    n=strlen(str);
    m=strlen(str1);
    for (int i = 0; i < n; i++){
        if (str[i]!=' '){
            if(str[i]>='a'){
                str[len] = str[i] - 32;
            } else {
                str[len] = str[i];
            }
            len++;
        }
    }
    str[len]='\0';
    for (int i = 0; i < m; i++){
        if (str1[i]!=' '){
            if(str1[i]>='a'){
                str1[len1] = str1[i] - 32;
            } else {
                str1[len1] = str1[i];
            }
            len1++;
        }
    }
    str1[len1]='\0';
    if(strcmp(str, str1)==0){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}