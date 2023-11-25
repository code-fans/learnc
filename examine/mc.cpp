#include <iostream>
#include <string>
using namespace std;
bool abs(char a)
{
    if (a>='a')
        return false;
    return true;
}
char jiemi(char m, char k){
    char a=(abs(m)?'A':'a');
    int offset = k-(abs(k)?'A':'a');
    int offset1 = m-a;
    int l=(offset1-offset+26)%26;
    return a+l;
}
int main(){
    string str,str1;
    cin>>str>>str1;
    for (int i = 0; i < str1.size(); i++){
        cout<<jiemi(str1[i], str[i%str.size()]);
    }
    cout<<endl;
    return 0;
}