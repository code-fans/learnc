#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int n,board[21];
void PrintGraph()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if (board[i]==j)
                printf("%d",0);
            else
                printf("%d",1);
        puts("");
    }
    puts("");
}

int Try(int x,int y)
{
    for(int j=1;j<x;j++)
        if((board[j]==y)||(abs(x-j)==abs(board[j]-y)))
            return 0;
    return 1;
}

void Place(int x)
{
    if(x>n)
        PrintGraph();
    else
        for (int y = 1; y <= n; ++y)
            if (Try(x,y))
            {
                board[x]=y;
                Place(x+1);
            }
}

int main()
{
    scanf("%d",&n);
    Place(1);
    return 0;
}