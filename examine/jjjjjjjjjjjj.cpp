#include <iostream>
#include <string>
using namespace std;
struct k
{
    int chj;
    string id;
};
k a[10000];
int main()
{
    
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i].chj>>a[i].id;
    int ans=0, ans1=0;
    for (int i = 0; i < n; i++){
        if(a[i].chj>ans){
            ans=a[i].chj;
            ans1=i;
        }
    }
    cout<<a[ans1].id<<endl;
    return 0;
}