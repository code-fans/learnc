
#include <cstdio>

using namespace std;
int main()
{
    int n=16,o;
    do
        scanf("%d:%d",&n,&o);
    while (n<=16 || n>24 || o>59 || o<0);

    printf("%d:%d\n",n,o);

    if (n<19 || (n==19 && o<=30))
        printf ("Green\n");
    else if (n<20 || (n==20 && o<=30)) 
        printf("Yellow\n");
    else
        printf("Red\n");
    return 0;
}