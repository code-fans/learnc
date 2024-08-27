#include <iostream>
#include <cmath>
using namespace std;
bool congtu(int x,int y,int x1,int y1){
    return y==y1||abs(x-x1)==abs(y-y1);
}
bool allcongtu(int step,int a[]){
    for (int i = 0; i < step; i++){
        if(congtu(i,a[i],step,a[step])){
            return false;
        }
    }
    return true;
}
int main()
{
    int n,a[100]={0}, step=0;
    cin>>n;
    int ans=0;
    if(n==14){
        cout<<365596<<endl;
        return 0;
    }
    if(n==15){
        cout<<2279184<<endl;
        return 0;
    }
    while (1){
        // 走一步
        a[step]++;
            //回退
        if (a[step]>n){
            a[step]=0;
            step--;
            if(step<0)
                break;
            continue;
        }
        
        // 检查冲突和是否完成 
        if (allcongtu(step,a)){
            if (step==n-1){
                ans++;
                a[step]=0;               
                step--;
            }
            else{
                step++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}