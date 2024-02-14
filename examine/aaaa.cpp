#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;
int d[16]={0},b[8]={0},c[16]={0},num=0,a[8];
int search(int),print();
int main()
{
    search(0);
    return 0;
}
int search(int i){
    int j;
    for (j = 0; j < 8; j++){
        if((!b[j])&&(!c[i+j])&&(!d[i-j+7])){
            a[i]=j;
            b[j]=1;
            c[i+j]=1;
            d[i-j+7]=1;
            if(i==7) print();
             else search(i+1);
            b[j]=0;
            c[i+j]=0;
            d[i-j+7]=0;
        }
    }
    return 0;
}
int print()
{
    int i;
    num++;
    cout<<"no. "<<num<<endl;
    for (i = 0; i < 8; i++){
        cout<<setw(4)<<a[i]+1;
    }
    cout<<endl;
    return 0;
}