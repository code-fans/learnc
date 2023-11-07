#include <iostream>
#include <string>
using namespace std;
int main(){
    char str[10000];
    int n; 
    cin.getline(str,10000,'\n');
    n=strlen(str);
    if(strcmp(str, "int")==0 ||
        strcmp(str, "long")==0 ||
        strcmp(str, "include")==0 ||
        strcmp(str, "double")==0 ||
        strcmp(str, "char")==0 ||
        strcmp(str, "for")==0 ||
        strcmp(str, "if")==0 ||
        strcmp(str, "break")==0 ||
        strcmp(str, "continue")==0 ||
        strcmp(str, "while")==0 ||
        strcmp(str, "do")==0 ||
        strcmp(str, "case")==0||
        strcmp(str, "switch")==0||
        strcmp(str, "else")==0 ||
        strcmp(str, "using")==0||
        strcmp(str, "namespace")==0||
        strcmp(str, "float")==0 ){
        
            cout<<"no"<<endl;
                return 0;
    }
    if (! ( (str[0]>='a'&&str[0]<='z') ||
            (str[0]>='A'&&str[0]<='Z') ||
            str[0]=='_')) {
            cout<<"no"<<endl;
                return 0;
        }
    for (int i = 1; i < n; i++){
        if (!((str[i]>='a'&& str[i]<='z')||
            (str[i]>='A'&& str[i]<='Z')||
            (str[i]>='0'&& str[i]<='9')||str[i]=='_')){

            cout<<"no"<<endl;
                return 0;
        }
    }

    cout<<"yes"<<endl;
    return 0;
}