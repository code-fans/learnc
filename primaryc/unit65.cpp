#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
int main()
{
    char ch1[1000],ch2;
    int unm[26],i,k;
    for (i=0;i<26;i++)
        unm[i]=0;
    gets(ch1);
    i=0;
    while (ch1[i]!=0) {
        if(ch1[i]>='a'&& ch1[i]<='z') {
            k= ch1[i]-'a';
            unm[k]++;
        }
        i++;
    }

    for(i=0;i<26;i++) {
        ch2='a'+i;
        cout<<ch2<<':'<<unm[i]<<"   ";
        if(i%5==4)
            cout<<endl;
    }
    cout<<endl;
    return 0;
}

int main2()
{
    char str[2000];
    int i, unm, unma;
    unm =unma=0;

    gets(str);

    for (i=0;str[i]!='\0';i++){
        unm++;
        if(str[i]=='.')
            unma++;
    }
    puts(str);
    cout<<"字符个数:"<< unm <<endl;
    cout<<".的个数:"<< unma <<endl;
    return 0;
}