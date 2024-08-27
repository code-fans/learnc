#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

long long toTen(string str, int n)
{
    long long a=0;
    for (int i = 0; i < str.size(); i++){
        a*=n;
        if(str[i]>='0'&&str[i]<='9')
            a+=str[i]-'0';
        if(str[i]>='a'&&str[i]<='z')
            a+=str[i]-'a'+10;
        if(str[i]>='A'&&str[i]<='Z')
            a+=str[i]-'A'+10;
    }
    return a;
}

string toJZ(long long data, int n){
    char str[100];
    int i=0;
    while(data!=0){
        int d = data%n;
        if(d>9){
            str[i]='A'+d-10;
        } else {
            str[i]='0'+d;
        }
        data/=n;
        i++;
    }
    if(i==0){
        str[0]='0';
        i++;
    }
    str[i]=0;
    string s(str);
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    string str1;
    int jz,jz1;
    long long a=0,b=0,c=0;
    while (cin>>jz>>str1>>jz1){
        a=toTen(str1,jz);
        str1=toJZ(a,jz1);
        cout<<str1<<endl;
    }
    return 0;
}