#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;
int ans,ans1;
int def(int a, int b)
{
    while (b!=0){
        if(a>=b)
            a-=b;
        if(a<b){
            a=b+a;
            b=a-b;
            a=a-b;
        }
    }
    return a;
}
void add(int &a,int &b)
{
    int j=ans1*b/def(ans1,b);
    int g=j/ans1,k=j/b;
    ans*=g;
    ans1*=g;
    a*=k;
    b*=k;
    ans=b+ans;
    return ;
}
int main()
{
    int n;
    cin>>n;
    int a,b,c,d;
    char a1,b1;
    cin>>a>>a1>>b;
    ans=a;
    ans1=b;
    
    for (int i = 0; i < n-1; i++){
        cin>>c>>b1>>d;
        add(c,d);
    }
    cout<<ans<<'/'<<ans1;
    return 0;
}