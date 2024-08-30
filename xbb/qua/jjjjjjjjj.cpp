#include <iostream>
#include <algorithm>
using namespace std;
int a[10]={0,0,0,0,0,5,0,0,0,0},num=0;
int Fun(int m){
    if(m==5){
        for (int i = 1; i <= 3; i++)
            if(a[i]+a[i+3]+a[i+6]!=15||a[3*i]+a[3*i-1]+a[3*i-2]!=15)  
                return 0;
        printf("%d%d%d\n",a[1],a[2],a[3]);
        printf("%d%d%d\n",a[4],a[5],a[6]);
        printf("%d%d%d\n\n",a[7],a[8],a[9]);
        num++;
    } else 
        for (int i = 0; i <= 9; i++){
            if(a[i]==0){
                a[i]=m;
                a[10-i]=10-m;
                Fun(m+1);
                a[i]=0;
                a[10-i]=0;
            }
        }
}
int main()
{
    Fun(1);
    printf("%d\n",num);
    return 0;
}