#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>str;
        bool aaa=true;
        for (int j = 0; j < str.size(); j++){
            if(str[j]=='>'){
                for (int k = j-1; k >= 0; k--){
                    if(str[k]==')'||str[k]==']'||str[k]=='}'||str[k]=='('||str[k]=='['||str[k]=='{'||str[k]=='>'){
                        cout<<"NO"<<endl;
                        aaa=false;
                        break;
                    }
                    if(str[k]=='<'){
                        str[k]=' ';
                        str[j]=' ';
                        break;
                    }
                    if(k==0){
                        aaa=false;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
            }

            if(str[j]==')'){
                for (int k = j-1; k >= 0; k--){
                    if(str[k]=='>'||str[k]==']'||str[k]=='}'||str[k]=='<'||str[k]=='['||str[k]=='{'||str[k]==')'){
                        cout<<"NO"<<endl;
                        aaa=false;
                        break;
                    }
                    if(str[k]=='('){
                        str[k]=' ';
                        str[j]=' ';
                        break;
                    }
                    if(k==0){
                        aaa=false;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
            }
            if(str[j]==']'){
                for (int k = j-1; k >= 0; k--){
                    if(str[k]=='>'||str[k]==')'||str[k]=='}'||str[k]=='<'||str[k]=='('||str[k]=='{'||str[k]==']'){
                        cout<<"NO"<<endl;
                        aaa=false;
                        break;
                    }
                    if(str[k]=='['){
                        str[k]=' ';
                        str[j]=' ';
                        break;
                    }
                    if(k==0){
                        aaa=false;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
            }
            if(str[j]=='}'){
                for (int k = j-1; k >= 0; k--){
                    if(str[k]=='>'||str[k]==']'||str[k]==')'||str[k]=='<'||str[k]=='['||str[k]=='('||str[k]=='}'){
                        cout<<"NO"<<endl;
                        aaa=false;
                        break;
                    }
                    if(str[k]=='{'){
                        str[k]=' ';
                        str[j]=' ';
                        break;
                    }
                    if(k==0){
                        aaa=false;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
            }
            if(str[j]=='('){
                for (int k = j; k >= 0; k--){
                    if(str[k]=='<'){
                        aaa=false;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
            }
            if(str[j]=='['){
                for (int k = j; k >= 0; k--){
                    if(str[k]=='<'||str[k]=='('){
                        aaa=false;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
            }
            if(str[j]=='{'){
                for (int k = j; k >= 0; k--){
                    if(str[k]!='{'&&str[k]!=' '){
                        aaa=false;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
            }
            if(!aaa)
                break;
        }
        if(aaa)
            for (int j = 0; j < str.size(); j++){
                if(str[j]!=' '){
                    cout<<"NO"<<endl;
                    aaa=false;
                    break;
                }
            }
        if(aaa)
            cout<<"YES"<<endl;
    }
    return 0;
}