#include<iostream>
using namespace std;
int a(int l,int y,int r,int m)
{
    if(m==1)
    {
        if (y>=10&&r>=10)
        {
            cout<<1978-l+1<<endl;
            return 0;
        }
        cout<<"杨淮生"<<1978-l<<""
    }
}
int dad()
{
    cout<<"出生于"<<"1978年.10月.23日"<<endl;
    cout<<"姓名"<<' '<<"男"<<' '<<"杨淮生"<<endl;
    cout<<"家庭里年龄第1的成员"<<endl;
    cout<<"计算机专业"<<endl;
    cout<<"我们家的一名老师"<<endl;
    return 0;
}
int mom()
{
    cout<<"出生于"<<"1978年.10月.30日"<<endl;
    cout<<"姓名"<<' '<<"女"<<' '<<"陈俊"<<endl;
    cout<<"家庭里年龄第2的成员"<<endl;
    cout<<"爱好骂人"<<endl;
    cout<<"喜欢讲人"<<endl;
    return 0;
}
int sister()
{
    cout<<"出生于"<<"2009年.8月.8日"<<endl;
    cout<<"姓名"<<' '<<"女"<<' '<<"杨静姝"<<endl;
    cout<<"家庭里第2小的成员"<<endl;
    cout<<"爱好吃甜食"<<endl;
    return 0;
}
int I()
{
    cout<<"出生于"<<"2015年.2月.1日"<<endl;
    cout<<"姓名"<<' '<<"男"<<' '<<"杨清和"<<endl;
    cout<<"家庭里最小的成员"<<endl;
    cout<<"爱好吃美食"<<endl;
    cout<<"喜欢一些珠宝"<<endl;
    return 0;
}
int main()
{
    int n;
    cin>>n;

    if(n==1)
    {
        int h;
        cin>>h;
        if (h==1)
        {
            dad();
            return 0;
        }
        if(h==2)
        {
            mom();
            return 0;
        }
        if (h==3)
        {
            sister();
            return 0;
        }
        if (h==4)
        {
            I();
            return 0;
        }
        cout<<"没有这个人"<<endl;
        return 0;
    }
    else
        {
            a
        }
}