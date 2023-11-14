#include <iostream>
#include <string>
using namespace std;
struct lish
{
    string b;
    int id;
};
lish a[100];
bool cmp(lish a,lish c)
{
    if (a.id==c.id){
        return a.b<c.b;
    }
    else{
        return a.id>c.id;
    }
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i].b>>a[i].id;
    }
    sort (a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].b<<endl;
    }
    
    
}