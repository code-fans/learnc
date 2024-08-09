#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct aaa
{
    int zhongzhiliang;
    int jianqian;
    double danjia;
};
bool cmp(aaa a,aaa b){
    return a.danjia>b.danjia;
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        int daizi,zhuonglei;
        cin>>daizi>>zhuonglei;
        aaa a[10000];
        for (int j = 0; j < zhuonglei; j++){
            cin>>a[j].zhongzhiliang;
            cin>>a[j].jianqian;
            a[j].danjia=double(a[j].jianqian)/double(a[j].zhongzhiliang);
        }
        sort(a,a+zhuonglei,cmp);
        double ans=0;
        for (int j = 0; j < zhuonglei; j++){
            if(daizi>=a[j].zhongzhiliang){
                ans+=a[j].jianqian;
                daizi-=a[j].zhongzhiliang;
            }
            else{
                ans+=a[j].danjia*daizi;
                break;
            }
        }
        printf("%0.2f\n",ans);
    }
    return 0;
}