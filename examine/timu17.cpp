#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i=0;
    int daxeishuzi=0,xiaoxieshuzi=0,teshuzifu=0,shuzi=0,kaito=0,jiewei,qita=0;
    while (i<str.size()){
        kaito=i;
        while (i<str.size()&&str[i]!=','){
            if(str[i]>='A'&&str[i]<='Z')
                daxeishuzi=1;
            else if(str[i]>='a'&&str[i]<='z')
                xiaoxieshuzi=1;
            else if(str[i]>='0'&&str[i]<='9')
                shuzi=1;
            else if(str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='!')
                teshuzifu=1;
            else qita=1;
            i++;
        }
        jiewei=i;
        if(!qita && daxeishuzi+xiaoxieshuzi+shuzi>1
                   && teshuzifu && jiewei-kaito>=6 && jiewei-kaito<=12 ){
            for (int j = kaito; j < jiewei; j++)
                cout<<str[j];
            cout<<endl;
        }
        i++;
    }
    return 0;
}
//seHJ12!@,sjdkffH$123,sdf!@&12HDHa!,123&^YUhg@!