#include <iostream>
using namespace std;
int unit36_main()
{
    long long ge=0 ,unm,u=1,p;//l=10;
    cin>>unm;
    p=unm;
    for(int i=unm ; i>0;i--){
        ge=ge*10+p%10;
        p=p/10;
        cout<<ge<<" <-> "<<p<<endl;
        if(p==0)
            break;
    }

    if(ge==unm)
        cout <<"是回文数";
    else
        cout <<"不是回文数";
    return 0;
}
