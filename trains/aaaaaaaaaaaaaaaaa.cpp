#include <iostream>
#include <string>
using namespace std;
struct a
{
    int id;
    int jc;
};
a m[26]={0};
bool cmp(a c,a b)
{
    if (c.jc==b.jc)
    {
        return c.id>b.id;
    }
    else
    {
        return c.jc>b.jc;
    }
}
int main()
{
    int l[26]={0};
    string a;
    char ans;
    cin>>a;
    for (int i = 0; i < a.size(); i++){
        m[a[i]-'a']++;
        l[a[i]-'a']=i;
    }
    for (int i = 0; 0<1 ; i++){
        ans=i+97;
        if (m[i]==1){
            cout<<ans<<endl;
            return 0;
        }
    }
    cout<<"no"<<endl;
    return 0;
}