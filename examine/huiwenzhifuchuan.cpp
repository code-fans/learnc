#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len=str.size()-1;
    bool ishw=true;
    for (int i = 0; i < len; i++){
        if(str[i]!=str[len-i-1])
            ishw=false;
    }
    if(ishw)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}