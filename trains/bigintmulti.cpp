#include<iostream>
#include<string>
using namespace std;
void multi(int big[], int& n, int m)
{
    int jw=0;
    for (int i = 0; i < n; i++)
    {
        int shang=big[i]*m+jw;
        big[i]=shang%10;
        jw=shang/10;
    }
    while(jw>0){
        big[n]=jw%10;
        n++;
        jw/=10;
    }
}

int main()
{
    int n,len=1, big[100000]={0};
    cin>>n;
    big[0]=3;
    big[1]=2;
    big[2]=1;
    
    for (int i = 2; i <= n; i++)
    {
        multi(big, len,  i);
    }

    for (int i = 0; i < len; i++)
    {
        cout<<big[len-i-1];
    }
    cout<<endl;
    
}