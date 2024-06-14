#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int suliang,ans1=0,ans2=0;
    cin>>suliang;
    int changdu;
    cin>>changdu;
    int p;
    for (int i = 0; i < suliang; i++){
        cin>>p;
        int a=p,b=changdu-p+1;
        if(a>b){
            swap(a,b);
        }
        if(a>ans1)
            ans1=a;
        if(b>ans2)
            ans2=b;
    }
    cout<<ans1<<' '<<ans2<<endl;
    return 0;
}