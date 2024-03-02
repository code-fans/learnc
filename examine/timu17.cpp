#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string str,str1;
    cin>>str;
    int i=0;
    while (1){
        int len=0;
        int zhifu=0,shuzi=0,teshuzhifu=0,qita=0;
        for (int j = 0; j < str.size()&&str[i]!=','; j++){
            if(str[i]=='@'||str[i]=='&'||str[i]=='$'||str[i]=='#')
                teshuzhifu++;
            else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
                zhifu++;
            else if(str[i]>='0'&&str[i]<='9')
                shuzi++;
            else qita++;
        }
        if(((zhifu+shuzi+teshuzhifu)>=6&&(zhifu+shuzi+teshuzhifu)<=12)&&qita==0&&)

        i++;
        
    }
    return 0;
}