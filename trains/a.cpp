#include<iostream>
using namespace std;
int main()
{
    int n;
    string str;
    cin>>str;
    int a[100];
    n=str.size();
    for(int i=0;i<n;i++)
    {
        a[i]=str[n-i-1]-'0';
    }
    int jw=0;
    for (int i = 0; i < n; i++)
    {
        a[i]=a[i]*7+jw;
        jw=a[i]/10;
        a[i]=a[i]%10;
    }
    if (jw>0)
    {
        a[n]=jw;
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[n-i-1];
    }
    cout<<endl;
    return 0;
}
