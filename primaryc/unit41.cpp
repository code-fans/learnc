#include <iostream>
using namespace std;
int unit41_main()
{
    float m=0.f;
    int u=0 ,r;
    while(1){
        cin >>r;
        if(r==-1||u==10)
            break;
        m+=r;
        u++;
    }
    m/=u;
    cout<<m;
    return 0;
}

