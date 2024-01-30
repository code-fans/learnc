#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    long long a=0,i=1;
    long long ans=0;
    while (a!=-1){
        cout<<"输入1或2 输完请输 -1:";
        cin>>a;
        if(a==1)
            ans+=i;
        i*=2;
    }
    cout<<ans<<endl;
    return 0;
}
