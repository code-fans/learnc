#include<iostream>
using namespace std;

int maxn(int b[], int m)
{
    int i=0;
    while (i<10)
    {
        int num = 0;
        for(int j=0;j<10;j++)
            if (b[i] < b[j]) num++;
        if(num == m-1)
            return b[i];
        i++;
    }
    return -1;
}

int main()
{
    int n , a[10]={99,200,95,87,98,-12,30,78,75,-25};
    do{
        cin>>n;
    } while (n<1||n>10);

    cout<< maxn(a, n)<<endl;

    return 0;    
}