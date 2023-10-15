#include<iostream>
#include<string>
using namespace std;
//int& n 为引用传参，这样就可以在函数中改变他的值了
void multi(int big[], int& n, int m)
{
    int jw=0;
    for (int i = 0; i < n; i++)
    {
        //逐位和乘数相乘
        int shang=big[i]*m+jw;
        //将商的余数存放在当前位
        big[i]=shang%10;
        //计算进位数
        jw=shang/10;
    }
    //由于乘数m可能大于10，所以，进位可能是多位数
    while(jw>0){
        //逐步模10除10计算出各位的数字
        big[n]=jw%10;
        //有进位急需要增加位数
        n++;
        jw/=10;
    }
}
void add(int big[], int big1[], int& n)
{
    int jw=0,b;
    for (int i = 0; i < n; i++)
    {
        b=big[i]+big1[i]+jw;
        jw=b/10;
        big1[i]=b%10;
    }
    if (jw>0)
    {
        big1[n]=jw;
        n++;
    }
}
int main()
{
    int n,len=1, len1=1, big[1000]={0},big1[1000]={0};
    cin>>n;
    big[0]=1;
    big1[0]=1;
    //求阶乘
    for (int i = 2; i <= n; i++)
    {
        multi(big, len,  i);
        len1 = len>len1?len:len1;
        add(big, big1,len1);
    }
    for (int i = 0; i < len1; i++)
    {
        cout<<big1[len1-i-1];
    }
    cout<<endl;
    
}