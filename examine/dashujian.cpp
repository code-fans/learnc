#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str,str1;
    cin>>str>>str1;
    int a[1000],b[1000],ans[1000],len=0;
    for (int i = 0; i < str.size(); i++){
        a[i]=str[str.size()-1-i]-'0';
    }
    for (int i = 0; i < str1.size(); i++){
        b[i]=str1[str1.size()-1-i]-'0';
    }
    int tuiw=0;
    for (int i = 0; i < str.size(); i++){
        ans[i]= a[i]-b[i]-tuiw;
        if(ans[i] < 0){
            tuiw = 1;
            ans[i] +=10;
        }
        else
            tuiw=0;
    }
    len=str.size();
    //if((str[str.size()-1]-'0')==tuiw)
    //    len--;
    bool k=false;
    for (int i =len-1; i >=1 ; i--){
        if(ans[i]!=0 || k){
            cout<<ans[i];
            k=true;
        }
    }
    cout<<ans[0]<<endl;
    return 0;
}