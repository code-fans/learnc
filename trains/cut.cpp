#include <iostream>
using namespace std;
int main(){
    int n,a, ans8=0,ans4=0,ans1=0;
    cin>>n;
    ans8=0;
    ans4=0;
    ans1=0;
    for (int i = 0; i < n; i++){
        cin>>a;
        ans8+=a/8;
        a=a%8;
        ans4+=a/4;
        a=a%4;
        ans1+=a/1;
        a=a%1;
    }
    cout<<ans8<<endl<<ans4<<endl<<ans1<<endl;
    return 0;
}