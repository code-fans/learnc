#include <iostream>
#include <string>
using namespace std;
int a[1000]={0};
int main()
{
    string str;
    cin>>str;
    for (int i = 0; i < str.size(); i++){
        a[i]=str[i]-'0';   
    }
    int beichushi=0,yushu=0;
    bool nn=false;
    for (int i = 0; i < str.size(); i++){
        beichushi= yushu*10 + a[i];
        int s = beichushi / 13;
        yushu = beichushi % 13;
        if(s>0){
            nn = true;
        }
        if(nn){
            cout<< s;
        }
    }
    if(!nn){
        cout <<0;
    }
    cout<<endl;
    cout<<yushu;
    cout<<endl;
    return 0;
}