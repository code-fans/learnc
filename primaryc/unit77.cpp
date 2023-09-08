#include <iostream>
using namespace std;

int zuoye2(int n)
{

    if(n==7){
        cout << n << ": 好的，我是最后一个！" << endl;
        return 1;
    }
    cout << n << ": 第" << n+1 << "交作业" << endl;
    int zy = zuoye2(n+1)+1; 
    cout << n << ": 我收到了第" << n+1 <<"的作业"<< endl;
    return zy;
}


int zuoye(int n)
{
    if(n==1)
        return 0;
    else
        return zuoye(n-1)+2; 
}

int main()
{
    cout<<zuoye2(1)<<endl;
    return 0;
}