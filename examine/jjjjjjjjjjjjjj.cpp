#include <iostream>
#include <string>
using namespace std;
int lala(string &str)
{
    for (int i = 0; i < str.size(); i++){
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    string str;
    for (int i = 0; i < n; i++){
        cin>>str;
        lala(str);
        if(str[0]>='a'&&str[0]<='z')
            str[0]-=32;
        cout<<str<<endl;
    }
    return 0;
}