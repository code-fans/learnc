#include <iostream>

using namespace std;

int ans[300]={0},ans1[300]={0};
int len=1;
int len1=1;

int jiechini(int jidejiecheng)
{
    int t=0, t1=0;
    for (int j = 0; j < len1; j++){
        int y= ans1[j]*jidejiecheng + t;
        ans1[j] = y%10;
        t=y/10;
        
        y = ans[j] + ans1[j] + t1;
        ans[j] = y%10;
        t1 = y/10;
    }
    int l = len1;
    while(t>0){
        ans1[len1] = t%10;
        t /= 10;
        len1++;
    }

    if(len<len1)
        len = len1;
  
    while(l<len){
        int y = ans[l] + ans1[l] + t1;
        ans[l] = y%10;
        t1 = y/10;
        l++;
    }
    if(t1>0){
        ans[len] = t1;
        len++;
    }
    return 0;
}

int main()
{
    ans1[0]=1;
    ans[0]=1;
    int n;
    cin>>n;
    for(int i=2; i<=n; i++){
        jiechini(i);
    }
    bool hasBigThanZero=false;
    for (int i = 299; i >=0; i--){
        if(ans[i]>0)
            hasBigThanZero = true;
        if(hasBigThanZero)
            cout<<ans[i];
    }
    cout<<endl;
    return 0;
}