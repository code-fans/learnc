#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
struct pop{
    int djg;
    int dj;
    int z;
    int s;
    int max;
} a[10000];
bool cmp(pop a,pop b){
    if (a.z!=b.z) return a.z>b.z;
    if (a.s!=b.s) return a.s>b.s;
    if (a.max!=b.max) return a.max>b.max;
    return true;
}
bool cmp1(pop a,pop b){
    return a.djg<b.djg;
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        int y,s,ying;
        cin>>y>>s>>ying;
        a[i].z=y+s+ying;
        a[i].s=y+s;
        a[i].max=max(y,s);
        a[i].djg=i;
    }
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++){
        if (a[i-1].z==a[i].z&&a[i-1].s==a[i].s&&a[i-1].max==a[i].max)
            a[i].dj=a[i-1].dj;
        else
            a[i].dj=i+1;        
    }
    sort(a,a+n,cmp1);
    for (int i = 0; i < n; i++){
        cout<<a[i].dj<<endl;
    }
    return 0;
}
/*
6
140 140 150
140 149 140
148 141 140
141 148 140
145 145 139
0 0 0
*/