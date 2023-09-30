#include <cstdio>

int main()
{
    int a, m, sum=0;
    freopen("data/input.txt", "r"/* r read w write*/, stdin);
    scanf("%d%d",&a, &m);
    int all[a];
    int i=0;
    for (; i<a && i<m; i++){
        scanf("%d", &all[i]);
        sum += all[i];
    }

    int maxSum = sum;
    for (; i < a; i++) {
        scanf("%d", &all[i]);
        sum += all[i] - all[i-m];
        if(sum > maxSum){
            maxSum = sum;
        }
    }
   
    printf("%d\n",maxSum);
    fclose(stdin);
    return 0;
}