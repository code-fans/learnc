#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str,ans1;
    int ans=0;
    while(true){
        cin>>str;
        if (str[str.size()-1]=='.'){
            if((str.size()-1)>ans){
                cout << str.substr(0, str.size()-1);
            } else {
                cout << ans1;
            }
            return 0;
        }  

        if((str.size())>ans){
            ans=str.size();
            ans1=str;
        }
    }
    return 0;
}