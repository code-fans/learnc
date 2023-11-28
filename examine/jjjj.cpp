#include <iostream>
#include <string>
using namespace std;
struct kk{
    string id;
    int chj;
    int pychj;
    char isbanganbu;
    char isxibu;
    int lengwengeshu;
};
kk a[101];
int main()
{
    string ans;
    int ans1=0,ans2=0;
    int n,zh=0;
    cin>>n;
    for (int i = 0; i < n; i++){
        zh=0;
        cin>>a[i].id>>a[i].chj>>a[i].pychj>>a[i].isbanganbu>>a[i].isxibu>>a[i].lengwengeshu;
        if(a[i].chj>80&&a[i].lengwengeshu>=1)
            zh+=8000;
        if(a[i].chj>85&&a[i].pychj>80)
            zh+=4000;
        if(a[i].chj>90)
            zh+=2000;
        if(a[i].chj>85&&a[i].isxibu=='Y')
            zh+=1000;
        if(a[i].pychj>80&&a[i].isbanganbu=='Y')
            zh+=850;
        if (zh>ans1){
            ans=a[i].id;
            ans1=zh;
        }
        ans2+=zh;
    }
    cout<<ans<<endl<<ans1<<endl<<ans2<<endl;
    return 0;
}