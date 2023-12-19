#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int jia(int a[], int&len, int n)
{
    int b[10000],t=0;
    for (int i = 0; i < len; i++){
        b[i]=a[len-1-i];
    }
    for (int i = 0; i < len; i++){
        int y=a[i]+b[i]+t;
        a[i]=y%n;
        t=y/n;
    }
    if(t==1){
        a[len]=1;
        len++;
    }
    return 0;
}

bool ish(int a[],int len)
{
    for (int i = 0; i < len/2; i++){
        if(a[i]!=a[len-1-i])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int a[10000]={0}, len=0;
    int t=0;
    len=str.size();
    for (int i = 0; i < len; i++){
        char c=str[len-1-i];
        if(c<'A')
            a[i]= c-'0';
        else if(c>='A'&&c<='Z')
            a[i]=c-'A'+10;
        else
            a[i]=a[i]=c-'a'+10;
    }
    bool a1=true;
    for (int i = 0; i <= 30; i++){
        if(ish(a,len)){
            cout<<i;
            a1=false;
            break;
        }
        else
            jia(a,len,n);
    }
    if (a1)
        cout<<"Impossible";
    cout<<endl;
    return 0;
}