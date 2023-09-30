#include <cstdio>

int board[100000];

int main()
{
    freopen("data/input.txt", "r"/* r read w write*/, stdin);
    int boardSum, jumpEnerge;
    scanf("%d",&boardSum);
    for (int i = 0; i < boardSum; i++){
        scanf("%d", board + i); //&board[i]
    }
    scanf("%d",&jumpEnerge);
    int maxEnerge = board[0];
    int currentEnerge = maxEnerge;

    for (int i = 1; i < boardSum && currentEnerge>=jumpEnerge; i++)
    {
        currentEnerge=currentEnerge - jumpEnerge + board[i];
        if (maxEnerge<currentEnerge) {
            maxEnerge=currentEnerge;
        }
    }
    printf("%d\n",maxEnerge);
    return 0;
}