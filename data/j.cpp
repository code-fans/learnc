#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
bool cmpnocase(string str,string str1)
{
    int len= str.size();
    int len1= str1.size();
    if(len != len1)
        return false;
    for (int i = 0; i < len; i++){
        if (toupper(str[i]) != toupper(str1[i]) )
        //if (str[i] != str1[i] && str[i]-32 != str1[i]  && str[i] != str1[i]-32 )
            return false;
    }
    return true;
}

int main()
{
    string str,str1;
    //freopen("input.txt", "r", stdin);
    cin>>str1;
    int ans=0,ans1=-1,l=0;
    while (cin>>str){
        if(cmpnocase(str, str1)){
            if(ans1 == -1){
                ans1=l;
            }
            ans++;
        }
        l += str.size()+1;
    }
    
    if (ans1==-1)
        cout<<"-1"<<endl;
    else
        cout<<ans<<' '<<ans1<<endl;
    return 0;
}