#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    string str,str1;
    cin>>str>>str1;
    bool a=true;
    for (int i = 0; i < max(str.size(),str1.size())-min(str.size(),str1.size())+1; i++){
        a=true;
        for (int j = i; j < min(str.size(),str1.size())+i; j++){
            if(str.size()<str1.size()){
                if(str[j-i]!=str1[j]){
                    a=false;
                }
            }
            else{
                if(str1[j-i]!=str[j]){
                    a=false;
                }
            }
        }
        if(a){
            if(str.size()<str1.size()){
                cout<<str<<" is substring of "<<str1<<endl;
            }
            else{
                cout<<str1<<" is substring of "<<str<<endl;
            }
            return 0;
        }
    }
    cout<<"No substring"<<endl;
    return 0;
}