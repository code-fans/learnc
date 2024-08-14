#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int n,num[50]={1},Count=0;
void print(int k)
{
    printf("%d=%d",n,num[1]);
    for (int i = 2; i < k; i++)
        printf("+%d",num[i]);
    printf("\n");
    ++Count;
}
void DFS(int k,int remain )
{
    if(remain==0&&k>2){
        print(k);
        return ;
    }
    for (int i = num[k-1]; i <= remain; i++){
        num[k]=i;
        remain-=i;
        DFS(k+1,remain);
        remain+=i;
    }
}
int main()
{
    scanf("%d",&n);
    DFS(1,n);
    printf("%d\n",Count);
    return 0;
}