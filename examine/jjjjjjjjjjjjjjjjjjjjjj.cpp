#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
struct kk{
    string ismisf;
    float shenggao;
};
bool cmp(kk a,kk b){
    if(a.ismisf=="male" && b.ismisf=="male")
        return a.shenggao<b.shenggao;
    if (a.ismisf=="female" && b.ismisf=="female")
        return a.shenggao>b.shenggao;
    return a.ismisf=="male";
}
kk  l[100000];

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>l[i].ismisf>>l[i].shenggao;
    }
    sort(l,l+n,cmp);
        
    for (int i = 0; i < n; i++){
        printf("%0.2f ",l[i].shenggao);
    }
    printf("\n");
    return 0;
}