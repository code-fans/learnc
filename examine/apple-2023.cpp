#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string str; int len=0;
    cin>>str;
    for(int i=0; i<str.size(); i++){
        char c=str[i];
        if(c=='(')
            len++;
        else if(c==')'){
            len --;
            if(len<0){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    if(len!=0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}