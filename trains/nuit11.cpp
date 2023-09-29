#include<cstdio>
#include<iostream>
using namespace std;
int cmp(int a, int b)
{
    return a>b;
}
int main()
{
    freopen("data/input.txt", "r"/* r read w write*/, stdin);
    int mmdo,mmdo1,mmdo3=0,mmdo4=0;
    scanf("%d",&mmdo);
    int mmdo2[mmdo];
    for (int i = 0; i < mmdo; i++)
    {
        scanf("%d",&mmdo2[i]);
    }
    scanf("%d",&mmdo1);
    mmdo3=mmdo2[0];
    mmdo4=mmdo2[0];
    for (int i = 1; i < mmdo; i++)
    {
        
        mmdo4=mmdo2[i]+mmdo4-mmdo1;
        if (mmdo4<mmdo1)
        {
            break;
        }
        if (mmdo3<mmdo4)
        {
            mmdo3=mmdo4;
        }
        
    }
    printf("%d\n",mmdo3);
    return 0;
}