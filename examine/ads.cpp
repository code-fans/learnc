#include <iostream>
using namespace std;
bool bj(int a[4],int b[4])
{
    for (int i = 0; i < 4; i++){
        bool  isdy=true;
        for (int j = 0; j < 4; j++){
            if (a[i]==b[j]){
                b[j]=-1;
                isdy=false;
                break;
            }
        }
        if (isdy)
            return false;
    }
    return true;
}
bool abs(int a,int b)
{
    int c=a,ans[4]={0},d=b,ans1[4]={0};
    for (int i = 0; c!=0; i++){
        ans[i]=c%10;
        c/=10;
    }
    for (int i = 0; d!=0; i++){
        ans1[i]=d%10;
        d/=10;
    }
    return bj(ans,ans1);
}

bool isDigitlTheSame(int a, int b){
    int d[10] = {0};
    while(a>0){
        d[a%10] ++;
        a/=10;
    }

    while(b>0){
        if(d[b%10]==0)
            return false;
        d[b%10] --;
        b/=10;
    }
    for(int i=0; i<10; i++){
        if(d[i] >0)
            return false;
    }
    return true;
}

int main()
{
    int ans=0;
    for (int i = 7030; i <= 9999; i++)
    {
        if(isDigitlTheSame(i, i-6030)){
            cout << i << endl;
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}