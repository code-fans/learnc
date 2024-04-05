#include <iostream>
#include <algorithm>
using namespace std;
struct aa
{
    int x;
    int y;
    bool isjidian;
};
aa a[110];
bool cmp(aa a,aa b)
{
    if(a.y!=b.y)
        return a.y>b.y;
    return a.x>b.x;
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i].x>>a[i].y;
        a[i].isjidian=true;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i!=j&&(a[i].x<=a[j].x&&a[i].y<=a[j].y)){
                a[i].isjidian=false;
                break;
            }
        }
    }
    
    sort(a,a+n,cmp);
    bool is=false;
    for (int i = 0; i < n; i++){
        if(a[i].isjidian){
            if(is){
                cout<<',';
            }
            cout<<'('<<a[i].x<<','<<a[i].y<<')';
            is=true;
        }
    }
    cout<<endl;
    return 0;
}