#include <iostream>
#include <algorithm>
using namespace std;
struct aaa{
    int s;
    int d;
}a1[10000];
bool cmp(aaa a,aaa b){
    return a.s<b.s;
}
int main(){
    int n;
    int a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        for (int j = a; j <= b; j++){
            int aa=j,ss=0;
            while (aa!=0){
                ss*=10;
                ss+=aa%10;
                aa/=10;
            }
            a1[j-a].s=ss;
            a1[j-a].d=j;
        }
        b-=a;
        b++;
        sort(a1,a1+b,cmp);
        for (int j = 0; j < b; j++){
            cout<<a1[j].d<<' ';
        }
    }
    return 0;
}