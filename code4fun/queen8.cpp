#include <iostream>
#include <iomanip>
#define queen_sum 8

using namespace std;
int a[92][8];
//判断 a 和 b 位置是否有冲突
bool conflict(int queen[], int a, int b){
    return queen[a] == queen[b]  // 两个棋子在同一行
         || b-a == queen[b] - queen[a]// 两个棋子45度角
         || b-a == queen[a] - queen[b];// 两个棋子45度角
}
//判断 位置b的棋子 和前面所有列是否用冲突
bool conflict(int queen[], int b){
    for(int i=0; i<b; i++){ // 遍历 b前面的列
        if(conflict(queen, i, b) ) //调用判断两列是否冲突
            return true; //如果有一个冲突则不能放
    }
    return false;//所有的都不冲突
}
// 八皇后算法
int eat(){
    int success = 0;
    int queen[queen_sum];
    //正在放第几个棋子
    int hasPuted = 0;
    //初始化数组，-1表示棋子没有放到棋盘上
    for(int i=0; i<queen_sum; i++)
        queen[i] = -1;
    while(hasPuted>=0){ 
        //放置当前棋子
        queen[hasPuted]++;
        //循环判断，如果冲突放下一个位置
        while(queen[hasPuted]<queen_sum && conflict(queen, hasPuted)){
            queen[hasPuted]++;
        }
        //queen[hasPuted] == 8 说明没有合适的位置
        if(queen[hasPuted] == queen_sum){
            //回溯 ，设置为-1表示把棋子从棋盘拿下来
            queen[hasPuted] = -1;
            //重新放前面一个棋子
            hasPuted --;
        } else {
            //如果没有冲突， 并且hasPuted == 7说明所有棋子都安放好了
            if(hasPuted == queen_sum-1){
                //成功了，将成功数量加一
                success ++;
                //输出当前成功的案例
                a[success-1][0]=queen[0]+1;
                a[success-1][1]=queen[1]+1;
                a[success-1][2]=queen[2]+1;
                a[success-1][3]=queen[3]+1;
                a[success-1][4]=queen[4]+1;
                a[success-1][5]=queen[5]+1;
                a[success-1][6]=queen[6]+1;
                a[success-1][7]=queen[7]+1;
                //成功后同样回溯
                queen[hasPuted] = -1;
                hasPuted --;
            } else {
                //如果不冲突，放下一个棋子
                hasPuted ++;
            }
        }
    }
    return 0;
}
int main()
{
    int n,k;
    cin>>n;
    eat();
    for (int i = 0; i < n; i++){
        cin>>k;
        for (int j = 0; j < 8; j++){
            cout<<a[k-1][j];
        }
        cout<<endl;
    }
    
}
