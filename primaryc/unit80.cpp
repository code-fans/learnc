#include<iostream>
using namespace std;
int main()
{
    int a[2]={0,7394};
    int *p; //定义一个整型变量a 和 一个整型指针变量p
    a[0]=10; // 给a赋值为10
    p= a; // 把指针p指向a，把a的地址赋值给指针p
    //*(p+1) =4937;
    cout <<*p<<endl; // 输出 指针p指向的数值
    cout << p <<endl; // 输出 指针p 本身（是一个地址）
    cout << p+1 <<endl; // 输出 地址p的下一个元素的地址
    cout << *(p+1) <<endl;
    cout<< &p <<endl;
    return 0;
}