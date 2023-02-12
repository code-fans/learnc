#include <iostream>
using namespace std;
int unit42_main()
{
    long long m ,u ,r ;
    cout<<"请输入两个数";
    cin>>m>>u;
    while(m%u!=0){
        r = m%u;
        m=u;
        u=r;
    }
    cout<<u;
    return 0;
}
