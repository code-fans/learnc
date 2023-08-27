#include<iostream>
using namespace std;
int main()
{
    int i,top,a[31],unm=0,k=0;
    for(i=1;i<=30;i++)
        a[i]=0;
    top=1;
    i=top;
    while (unm<15)
    {
        if(i>30)i=1;
        if(a[i]==0)k++;
        if(k==9)
        {
            a[i]=1;
            k=0;
            unm++;
        }
        i++;
    }
    for(i=1;i<=30;i++)
        if(a[i]==0)
            cout<<i<<"    ";
    cout << endl;
    return 0;
}