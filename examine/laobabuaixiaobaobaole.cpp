#include <iostream>
#include <algorithm>
using namespace std;
int a[2][7];
int a1[7];
int main()
{
    int ans=0,max=0;
    for(int i=0;i<7;i++){
        cin>>a[0][i]>>a[1][i];
    }
    for (int i = 0; i < 7; i++){
        a1[i]=a[0][i]+a[1][i];
    }
    sort(a1,a1+7);
    for (int i = 0; i < 7; i++)
    {
        if(a1[i]>max){
            ans=i+1;
            max=a1[i];
        }
    }
    cout<<ans;
}