#include<iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string str;
    cin>>str;
    cin>>n;
    int len=str.size();
    for (int i = 0; i < n; i++){    
        for (int c = 0; c < len-1; c++){
            if(str[c]>str[c+1]){
                for (int j = c+1; j < len; j++){
                    str[j-1]=str[j];
                }
                break;
            }
        }
        len--;
    }
    int i=0;
    while (i<len && str[i]=='0') i++;
    if(i==len)
        cout<<0;
    else
        for (; i < len; i++){
            cout<<str[i];
        }

    cout<<endl;
    return 0;
}