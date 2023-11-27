#include <iostream>
#include <string>
using namespace std;

string substring(string str, int b, int e){
    if(str[e-1]=='.') e--;
    return str.substr(b, e-b);
}

int main()
{
    string str, str1, ans="";
    getline(cin,str);
    int b=0, e=0, i=0, l=str.size();  
    while (i < l){
        while (i < l && str[i] == ' '){
            i++;
        }
        b = i;
        char c=str[i];
        while (i < l && str[i] != ' '){
            i++;
        }
        e=i;
        str1 = substring(str, b, e);
        if(str1.size()> ans.size()){
            ans = str1;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}