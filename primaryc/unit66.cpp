#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    string str2,str1;
    char s;
    int i;
    getline(cin,str1);
    for (i=0;i<str1.size();i++){
        s=str1[i];
        if ((s>='a'&&s<='z')||(s>='A'&&s<='Z')){
            s-=3;
            if((s>='Z'&&s<'a')||s<'A')
                s+=26;
        }
        str2+=s;
    }
    cout<<str2<<endl;
    return 0;
}