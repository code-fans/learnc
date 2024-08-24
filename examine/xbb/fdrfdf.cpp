#include <iostream>
using namespace std;
int main()
{
    long long a,b,ans,num=1; 
    cin>>a>>b>>ans;
    long long c;
    for (int i = 2; i < 17; i++){
        long long a1=0,b1=0,ans1=0;
        int aa=a,bb=b;
        while (aa!=0){
            a1+=aa%10*num;
            aa/=10;
            num*=i;
        }
        num=1;
        while (bb!=0){
            b1+=bb%10*num;
            bb/=10;
            num*=i;
        }
        num=1;
        c=a1*b1;
        while (c!=0){
            ans*=10;
            ans+=c%10;
            c/=10;
            num*=i;
        }
        if(c==ans){
            cout<<i<<endl;
            return 0;
        }
    }
    
    return 0;
}