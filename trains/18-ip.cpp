#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    int b[8],ans[4]={0},m[32];
    b[7]=1;
    b[6]=2;
    b[5]=4;
    b[4]=8;
    b[3]=16;
    b[2]=32;
    b[1]=64;
    b[0]=128;
    scanf("%d.%d.%d.%d",&ans[0],&ans[1],&ans[2],&ans[3]);
    for(int i=0; i<4; i++){
        for (int j=0; j<8; j++){
            if (ans[i]>=b[j])
            {
                ans[i]-=b[j];
                m[i*8+j]=1;
            }
            else
            {
                m[i*8+j]=0;
            }
        }
    }
    for (int i = 0; i < 32; i++)
    {
        cout<<m[31];
    }
    cout<<endl;
    return 0;
}