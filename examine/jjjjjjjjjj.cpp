#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    char a;
    cin>>n;
    string str;
    for (int i = 0; i < n; i++){
        cin>>str;
        for (int j = 0; j < str.size(); j++){
            if(i==0&&str[i]>='a'&&str[i]<='z'){
                a=str[i]-32;
                cout<<a;
            }
            else if(i!=0&&(str[i]>='A'&&str[i]<='Z')){
                a=str[i]+32;
                cout<<a;
            }
            else
                cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}