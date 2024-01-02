#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;

int putApple(int a,int p,int m)
{
    if(p==1)
        return 1;
    int ans=0; 
    for(int i=m; p*i <=a; i++){ 
        // 确定第一个盘子放几个， m ~ a/p
        ans += putApple(a-i, p-1, i); // i->m 后面的盘子不能比前面少
        // 加法原理
    }
    return ans;
}

int main()
{
    int hang,m,n;
    cin>>hang;
    for (int i = 0; i < hang; i++){
        cin>>m>>n;
        cout<<putApple(m,n,0)<<endl;
    }
    return 0;
}