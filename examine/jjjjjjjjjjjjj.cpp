#include <iostream>
#include <string>
using namespace std;
int main()
{
    freopen("../data/input.txt", "r"/* r read w write*/, stdin);
    string str, ans1, ans2;
    int a=0,b=0,c=0,d=0;
    int i=0;
    getline(cin, str);
    int len = str.size();
    while (i < len){
         
        if(i==str.size())
            break;
        while (str[i]!=','&&str[i]!=' '){
            i++;
        }
        if(m-i>a-b){
            a=m;
            b=i;
        }
        if(m==0||(m-i<c-d)){
            c=m;
            d=i;
        }
        while (str[i]==','||str[i]==' '){
            i++;
        }
    }
    for (int i = a; i < b; i++){
        cout<<str[i];
    }
    cout<<endl;
    for (int i = c; i < d; i++){
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}