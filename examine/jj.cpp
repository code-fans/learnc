#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct kk{
    string id;
};

bool cmp(kk  b, kk c){
    return b.id<c.id;
}

kk a[20];

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i].id;
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
        cout<<a[i].id<<endl;
    return 0;
}