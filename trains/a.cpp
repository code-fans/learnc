#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int jishu,a=0,m=1;
    for(int i=0;i<=n;i++)
    {
        cin>>jishu;
        int jinyan;
        cin>>jinyan;
        for(int u=1;u<jishu;u++)
        {
            a+=m*u;
            m*=u;
        }
        if(a>=jinyan)
            cout<<"0"<<' ';
        else
            cout<<jinyan-a<<' ';
    }
    cout<<endl;
    return 0;
}