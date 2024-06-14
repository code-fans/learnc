#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    int g[4]={0, 5, 3, 1};
    cin>>f>>e>>d>>c>>b>>a;
    while (f+e+d+c+b+a){
        int ans=a+b+c+(d+3)/4;
        int x=g[d%4]+c*5;
        if(e>x)
            ans+=(e-x+8)/9;
        int y=ans*36-a*36-b*25-c*16-d*9-e*4;
        if(f>y)
            ans+=(f-y+35)/36;
        cout<<ans<<endl;
        cin>>f>>e>>d>>c>>b>>a;
    }
    return 0;
}