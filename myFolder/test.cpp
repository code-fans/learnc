#include<iostream>

using namespace std;
int prime[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};//前15个素数
long long ans, n;
int maxn=0; //记录最大因子数

void dfs(int dep, int num, int limit, long long now)
//dep=当前枚举素数，num=当前数的因子数，limit=当前素数最多指数，now=当前数
{
    if(dep>10) return;//剪枝，更大的范围需要更大的限制
    if(num>maxn||(num==maxn&&now<ans)) { 
        maxn=num;
        ans=now;
    }
    //若能更新答案，则更新
    for(int i=1;i<=limit;i++)//枚举当前素数的指数
    {
        if(prime[dep]*now > n)
            break;//如果再乘一次该素数超出边界则退出
        now *= prime[dep];
        dfs(dep+1, num*(i+1), i, now);//枚举下一个素数
    }
}

int main()
{
    cin >> n;//输入范围
    dfs(0, 1, 100, 1);//limit随意输个较大数即可，最小是log2n
    cout <<ans << endl;
    return 0;
}