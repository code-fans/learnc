#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string str,str1;
    cin>>str>>str1;
    int ans[10000],a[10000]={0},b[10000]={0},len=0;
    int t=0;
    for (int i = 0; i < str.size(); i++){
        a[i]=str[str.size()-1-i]-'0';
    }
    for (int i = 0; i < str1.size(); i++){
        b[i]=str1[str1.size()-1-i]-'0';
    }
    for (int i = 0; i < max(str.size(),str1.size()); i++){
        ans[i]=(a[i]+b[i]+t)%10;
        t=(a[i]+b[i]+t)/10;
        len++;
    }
    if(t==1)
        cout<<1;
    bool is0=false;
    for (int i = 0; i < len; i++){
        if(ans[len-1-i]!=0||is0){
            cout<<ans[len-1-i];
            is0=true;
        }
    }
    cout<<endl;
    return 0;
}