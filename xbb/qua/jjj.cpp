#include <iostream>
using namespace std;
int main(){
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int n,y;
    cin>>n>>y;
    if (y==2&&(n%400==0||(n%4==0&&n%100!=0)))
        cout<<29<<endl;
    else
        cout<<a[y]<<endl;
    return 0;
}