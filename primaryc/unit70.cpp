#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    int i,ans,a[4];
    string t[4];
    t[0]="1, 2, 3, 4, 5, 6, 7";
    t[1]="1, 3, 5, 7";
    t[2]="2, 3, 6, 7";
    t[3]="4, 5, 6, 7";
    cout<<"读心术猜数"<<endl;
    cout<<"请你从下面7个数字中，选择一个记在心里。"<<endl;
    cout<<t[0]<<endl;
    system("pause");
    for (i=1;i<=3;i++)
    {
        system("cls");
        cout<< i <<"下面数字有吗 0没有1 有"<<endl;
        cout<<t[i]<<endl;
        do
        {
            cin>>a[i];
        } while (a[i]<0||a[i]>1);
    }
    ans =4*a[3]+2*a[2]+a[1];
    system("cls");
    cout<<ans<<endl;
    return 0;
}