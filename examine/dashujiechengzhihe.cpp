#include <iostream>

using namespace std;

int ans[300]={0},ans1[300]={0};

int len=1;
int len1=1;

int jiechini(int jidejiecheng)
{
    int t=0;
    for (int j = 0; j < len; j++){
        int y=(ans1[j]*jidejiecheng+t);
        ans1[j]=y%10;
        t=y/10;
    }
    if(t!=0&&t<=9){
        ans1[len]=t;
        len++;
    }
    if(t>=10){
        ans1[len]=t%10;
        len++;
        ans1[len]=t/10;
        len++;
    }

    t=0;
    if(len1 < len)
        len1 = len; 
    for (int i = 0; i < len1; i++){
        int y=(ans1[i]+ans[i]+t);
        ans[i] = y%10;
        t=y/10;
    }
    if(t!=0&&t<=9){
        ans[len1]+=t;
        len1++;
    }
    if(t!=0&&t>=10){
        ans[len1]+=t%10;
        ans[len1+1]+=t/10;
        len1+=2;
    }
    return 0;
}

int main()
{
    ans1[0]=1;
    ans[0]=1;
    int n;
    cin>>n;
    for (int i = 2; i <= n; i++){
        jiechini(i);
    }
    int u=0;
    for (int i = 299; ans[i]==0 ; i--){
        u++;
    }
    for (int i = 0; i < 300-u; i++){
        cout<<ans[len1-1-i];
    }
    return 0;
}