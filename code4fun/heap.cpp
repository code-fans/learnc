#include <iostream>
using namespace std;

int main()
{
    int k=0,num=0,x= 1,y=1,x1,y1;
    cin>>x1>>y1;
    int step[100]={0};
    int dx[5]={1,2,2,1};
    int dy[5]={-2,-1,1,2};
    while (1)
    {
        // 走一步
        x+=dx[k];
        y+=dy[k];
        step[num] = k;
        num ++;
        k=0;
        //如果成功了
        if(x == x1 && y== y1){
            break;
        }
        if(x>x1 || y>y1 || y<1){
            //退一步
            do{
                num--;
                if(num<0){
                    printf("error!\n");
                    return 0;
                }
                k=step[num];
                x-=dx[k];
                y-=dy[k];
                k++;
            }while(k>3);
        }
    }

    for (k = 0; k <  num; k++)
        printf("%d ",step[k]+1);
    printf("\n");
    return 0;
}