#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    string str1 ;
    string str2 ;
    int ans[1000],jw=0,a[100]={0},b[100]={0},n=0;
    cin>>str1;
    cin>>str2;
    int l1=0,l2=0;
    l1=str1.size();
    l2=str2.size();
    
    for (int i = 0; i < l1; i++)
    {
        a[i]=str1[l1-i-1]-'0';
    }
    for (int i = 0; i < l2; i++)
    {
        b[i]=str2[l2-i-1]-'0';
    }
    n =  max(l1,l2);
    for (int i = 0; i < n; i++)
    {
        ans[i]=(a[i]+b[i]+jw)%10;
        jw=(a[i]+b[i]+jw)/10;
    }
    if(jw!=0)
    {
        ans[n]=jw;
        n++;
    }

    //std::reverse(ans, ans+n);
    for (int i = 0; i < n/2; i++)
    {
        ans[i]^=ans[n-i-1];
        ans[n-i-1]^=ans[i];
        ans[i]^=ans[n-i-1];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
    return 0;   
}