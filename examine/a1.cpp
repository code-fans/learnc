#include <iostream>
#include <string>
using namespace std;
int ans[500]={0},a[300]={0},b[300]={0};
int al,bl,ansl = 0;

void jiechini(int jidejiecheng,int p)
{
    int t=0;
    for (int i = 0; i < al; i++){
        int y=a[i]*jidejiecheng+t + ans[i+p];
        t= y/10;
        ans[i+p]= y%10;
    }
    ansl= al+p;
    if(t>0){
        ans[ansl]=t;
        ansl++;
    }
}

int main()
{
    string str,str1;
    cin>>str>>str1;
    al=str.size();
    bl=str1.size();
    for (int i = 0; i < al; i++){
        a[i]=str[al-1-i]-'0';
    }
    for (int i = 0; i < bl; i++){
        b[i]=str1[bl-1-i]-'0';
    }
    for (int i = 0; i < bl; i++){
        jiechini(b[i], i);
    }
    for (int i = ansl-1; i >= 0; i--){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}