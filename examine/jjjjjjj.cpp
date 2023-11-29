#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string str1,str2;
    double a;
    int b=0;
    cin>>a;
    cin>>str1>>str2;
    for (int i = 0; i < min(str1.size(),str2.size()); i++){
        if(str1[i]==str2[i])
            b++;
    }
    double c=double(b)/min(str1.size(),str2.size());
    if(c>=a)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}