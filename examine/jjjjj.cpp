#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int ans=0;
    while (cin>>str){
        for (int i = 0; i < str.size(); i++){
            if(str[i]>='0'&&str[i]<='9')
                ans++;
        }
    }
    cout<<ans<<endl;
    return u0;
}