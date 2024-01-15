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
    long long jici, strl = str.size();
    int ci=1;
    for (int i = 0; i < n; i++){
        cin>>str1;
        if(str1==">"){
            cin>>jici;
            jici %= strl;
            kaituo -= ci * jici;
 
        } else  if(str1== "<"){
            cin>>jici; 
            jici %= strl;
            kaituo += ci * jici;
        }
        if(str1=="rev"){
             ci*=-1;
             kaituo += ci;
        }
        if(kaituo>=strl){
            kaituo -= strl;
        } else if(kaituo<0){
            kaituo += strl;
        }
    }
    for(int i=0; i<strl; i++){
        long long p = kaituo + i *ci;
        if(p<0){
            p+=strl;
        } else if(p>=strl){
            p-=strl;
        }
        cout<<str[p];
    }
    cout<<endl;
    return 0;
}