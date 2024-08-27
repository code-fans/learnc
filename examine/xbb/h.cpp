#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct aa
{
    int a;
    int b;
}c[1000000];
bool cmp(aa a,aa b){
    return a.a==b.a?a.b<b.b:a.a<b.a;
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        scanf("%d %d",&c[i].a,&c[i].b);
    }
    sort(c,c+n,cmp);
    for (int i = 0; i < n; i++){
        printf("%d %d\n",c[i].a,c[i].b);
    }
    return 0;
}