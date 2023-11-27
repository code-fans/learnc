#include <iostream>
#include <string>
using namespace std;

void output(string str, int b, int e){
    string str2 = str.substr(b, e-b);
    std::reverse(str2.begin(), str2.end());
    cout<< str2;
    //for (int i = e-1; i >= b; i--){
    //    cout<<str[i];
    //}
}

int main()
{
    string str;
    getline(cin,str);
    int b=0, e=0, i=0, l=str.size();  
    while (i < l){
        while (i < l && str[i] == ' '){
            cout<<' ';
            i++;
        }
        b = i;
        char c=str[i];
        while (i < l && str[i] != ' '){
            i++;
        }
        e=i;
        output(str, b, e);
    }
    
    cout<<endl;
    return 0;
}