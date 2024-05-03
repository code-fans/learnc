#include <iostream>
#include <map>
using namespace std;
map<string ,int>ans;
int main()
{
    int n,money,num;
    cin>>n;
    string name[15],s,Friend;
    for (int i = 0; i < n; i++){
        cin>>name[i];
        // ans[name[i]]=0;
    }
    for (int i = 0; i < n; i++){
        cin>>s>>money>>num;
        for (int j=0; j < num; j++){
            cin>>Friend;
            ans[Friend]+=money/num;
        }
        if(num!=0)
            ans[s]=ans[s]-money+money%num;
    }
    for (int i = 0; i < n; i++){
        cout<<name[i]<<' '<<ans[name[i]]<<endl;
    }
    return 0;
}

**@@@
*@@@@
@@@@@
@@@@@
@@@@@
