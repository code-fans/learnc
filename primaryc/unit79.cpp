#include <iostream>
using namespace std;

// 计算斐波拉契数列
long long fibonacciSequence(int n){    
    if (n<2)
        return 1;
    long long fn2, fn1 =1, fn=1;

    for(int i=2;i<=n;i++){
        fn2 = fn1;
        fn1 = fn;
        fn = fn1 + fn2;
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

    int i, fn, fn1, fn2;
    if (n<2)
        return 1;
    fn = 1;
    fn1 =1;
    for(i=2;i<=n;i++){
        fn2 = fn+fn1;
        fn=fn+fn1;
        fn1=fn-fn1;
        fn=fn-fn1;
        fn1=fn1+fn2;
        fn2=fn1-fn2;
        fn1=fn1-fn2;
    }
    return fn1;

*/
/** 最优化求解
 * 有不同面额的硬币 9元、5元、2元 若干枚
 * 给出一个数值 比如：21元、23元
 * 求解如何使用最少枚数硬币达到对应的数值
 */
int minCoinNumber(int yuan){
    const int MAX_COIN = 100000;
    if(yuan == 0)
        return 0;
    if(yuan == 1)
        return MAX_COIN;

    if(yuan >=9){
        int n9 = minCoinNumber(yuan-9);
        int n5 = minCoinNumber(yuan-5);
        int n2 = minCoinNumber(yuan-2);
        if(n9 <= n5 && n9 <=n2){
            return n9+1;
        }
        if(n5 < n9 && n5 <=n2){
            return n5+1;
        }
        if(n2 < n5 && n2 < n9){
            return n2+1;
        }
    } else if(yuan >=5){
        int n5 = minCoinNumber(yuan-5);
        int n2 = minCoinNumber(yuan-2);
        if(n5  <= n2){
            return n5+1;
        } else {
            return n2+1;
        }
    } else if(yuan >=2){
        int n2 = minCoinNumber(yuan-2);
        return n2+1;
    }
    return MAX_COIN;
}

int main(){
    int a;
    cin>>a;
    cout<<fibonacciSequence(a)<<endl;
    //int n = minCoinNumber(a);
    //cout<< "最少数量：" << n <<endl;
    return 0;
}