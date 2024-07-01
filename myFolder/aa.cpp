#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

char a[] = "abcdefghijklmnopqrst";

string strArr[80000];

string makeStr(int n){
    string  str ="(";
    int i=0;
    while(n>0){
        if(n%2==1){
            str += a[i];
        }
        i++;
        n/=2;
    }
    str +=")";
    
    return str;
}

int main()
{
    char ans[16];
    int n;
    scanf("%d",&n);
   
    for (int i = 0; i < (1<<n); i++){
        strArr[i]=makeStr(i);
    }
    sort(strArr,strArr+(1<<n));
    for (int  i = 0; i < (1<<n); i++){
        printf("%s\n", strArr[i].c_str());
    }
    
    return 0;
    
}