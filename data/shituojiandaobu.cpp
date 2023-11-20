#include <iostream>
#include <string>
using namespace std;
int shuiyingli(string str,string str1)
{
    if (str[0]==str[0])
        cout<<"Tie"<<endl;
    if ((str[0]=='R'&&str[0]=='S')||(str[0]=='S'&&str[0]=='p')||(str[0]=='P'&&str[0]=='R'))
        cout<<"Player1"<<endl;
    else
        cout<<"Player2"<<endl;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    string str,str1;
    for (int i = 0; i < n; i++){
        cin>>str>>str1;
        shuiyingli(str,str1);
    }
    return 0;
}