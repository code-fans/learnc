#include <iostream>
#include <string>
using namespace std;
int main(){
    string str ,str1 , str2;
    bool m=false;
    cin>>str;
    cin>>str1;
    if (str.size()>str1.size())
    {
        str2=str;
        str=str1;
        str1=str2;
    }
    
    str2 = str1+str1;
    for (int i = 0; i < str1.size(); i++)
    {
        for (int k = 0; k < str.size(); k++)
        {
            if (str[k]!=str2[k+i])
            {
                m=false;
                break;
            }
            else
            {
                m=true;
            }
        }
        if (m)
        {
            cout<<"true"<<endl;
            return 0;
        }
    }
    cout<<"false"<<endl;
    return 0;
}