#include <iostream>
using namespace std;
int main()
{
    int n,a,ans=0,weishu;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a;
        ans=0;
        int b=a;
        weishu=0;
        int gegeweishu[1000];
        while (a!=0){
            gegeweishu[weishu]=a%10;
            a/=10;
            weishu++;
        }
        for (int j = 0; j < weishu; j++){
            int daijiashu=gegeweishu[j];
            for (int c = 1; c < weishu; c++){
                daijiashu*=gegeweishu[j];
            }
            ans+=daijiashu;
        }
        if(ans==b)
            cout<<"T"<<endl;
        else
            cout<<"F"<<endl;
    }
    return 0;
}