#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int a=str.size();
    if(a>2 && ( (str[a-1]=='r'&&str[a-2]=='e')|| (str[a-1]=='y'&&str[a-2]=='l')))
        a-=2;
    if(a>3 && str[a-1]=='g'&&str[a-2]=='n'&&str[a-3]=='i')
        a-=3;
    for (int i = 0; i < a; i++)
        cout<<str[i];
    cout<<endl;
    return 0;
}