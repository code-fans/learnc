#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string str,str1;
    cin>>str;
    long long kaituo=0;
    int n;
    cin>>n;
    long long jici;
    int ci=0;
    for (int i = 0; i < n; i++){
        cin>>str1;
        if((str1==">"&&ci%2==0)||(str1=="<"&&ci%2==1)){
            cin>>jici;
            jici%=str.size();
            if(jici>kaituo)
                kaituo+=str.size();
            kaituo-=jici;
        }
        if((str1==">"&&ci%2==1)||(str1=="<"&&ci%2==0)){
            cin>>jici;
            jici%=str.size();
            kaituo+=jici;
            if(kaituo>=str.size()){
                kaituo-=str.size();
            }
        }
        if(str1=="rev"){
            if(ci%2==0){
                if(kaituo==0)
                    kaituo+=str.size();
                kaituo--;
            }else{
                kaituo++;
                if(kaituo>=str.size())
                    kaituo-=str.size();
            }
            ci++;
        }
    }
    if(ci%2==0){
        for (int i = kaituo; i < kaituo+str.size(); i++){
            cout<<str[i%str.size()];
        }
    }
    else{
        for (int i = str.size()+kaituo; i > kaituo; i--){
            cout<<str[i%str.size()];
        }
    }
    cout<<endl;
    return 0;
}