#include <iostream>
#include <algorithm>
using namespace std;
int ans=0;
void qp(int num[],int anssu[],int c,int a){
    if(c==a){
        for(int i=0;i<a;i++)
            cout<<anssu[i];
        cout<<endl;
        ans++;
        return ;
    }
    for(int i=0;i<a;i++){
        if(num[i]!=0){
            int n=num[i];
            num[i]=0;
            anssu[c]=n;
            qp(num,anssu,c+1,a);
            num[i]=n;
        }
    }
}
int main()
{
    int a,num[10000],anssu[10000]={0};
    cin>>a;
    for(int i=1;i<=a;i++)
        num[i-1]=i;
    qp(num,anssu,0,a);
    cout<<ans<<endl;
    return 0;
}