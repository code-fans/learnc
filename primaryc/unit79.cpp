#include <iostream>
using namespace std;

// 计算斐波拉契数列
long long fibonacciSequence(int n){
    if (n<2)
        return 1;
    long long fn2 = 1, fn1 =1, fn;

    for(int i=2;i<=n;i++){
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
    }
    return fn;
}

/*int a[n+3];
    a[0]=0;
    a[1]=1;
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    for(int i=2;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
        cout<<a[i]<<endl;
    }

    if (n<2)
        return 1;
    else 
        return fibonacciSequence(n-1) + fibonacciSequence(n-2);

*/
/** 最优化求解
 * 有不同面额的硬币 9元、5元、2元 若干枚
 * 给出一个数值 比如：21元、23元
 * 求解如何使用最少枚数硬币达到对应的数值
 */
int minCoinNumber(int yuan){

    return 0;
}

int main(){
    int a;
    cin>>a;
    cout<<fibonacciSequence(a)<<endl;
    //cout<< minCoinNumber(a)<<endl;
    return 0;
}