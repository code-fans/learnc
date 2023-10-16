#include<iostream>
using namespace std;

int main(){
    freopen("data/input.txt", "r", stdin);
    int n;
    cin>>n;
    int jinyan;
    int a=1,m=1,b=1,ans=0;
    double xuelandushi,zongxuelan=10,jishu=0;
    for(int i=1;i<=n;i++)
    {
        cin>>xuelandushi;
        cin>>jinyan;
        zongxuelan-=xuelandushi;
        if (zongxuelan>10)
        {
            zongxuelan=10;
        }
        
        if(zongxuelan<=0)
        {
            break ;
        }
        ans+=jinyan;
    }
    for (int i = 1; ans>=i; i*=2)
    {
        ans-=i;
        jishu++;
    }
    cout<< jishu <<' '<<ans<<endl;
    return 0;
}