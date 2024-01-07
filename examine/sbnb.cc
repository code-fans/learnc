#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int lima=-1;
    
    do
    {
        cout<<"输入密码"<<endl;
        cin>>lima;
        if(lima!=2024)
            cout<<"密码错误，";
    } while (lima!=2024);
    if(lima==2024){
        cout<<"新年快乐！ 恭喜发财"<<endl;
    }
    return 0;
}