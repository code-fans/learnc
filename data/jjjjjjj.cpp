#include <iostream>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    char a;
    for (int i = 0; i < n; i++){
        cin>>a;
        if(a>='a'&&a<='z')
            ans+=a-'a'+1;
        else
            ans-=a;
    }
    cout<<ans<<endl;
    return 0;
}