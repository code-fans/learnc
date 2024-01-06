#include <iostream>
#include <string>
using namespace std;

int main(){
    string str,str1;
    cin>>str>>str1;
    for (int i = 0; i < str1.size(); i++){
        cout<<jiemi(str1[i], str[i%str.size()]);
    }
    cout<<endl;
    return 0;
}