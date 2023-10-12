#include<iostream>
using namespace std;

int main()
{
    int a,b,c=1;
    cin>>a;
    int n[2000];
    for (int i = 0; i < a; i++)
    {
        cin>>n[i];
    }
    cin>>b;
    int i;
    i=0;
    while (i<a)
    {
        if (n[i]>b)
        {
            c++;
        }
        i++;
    }
    cout<<c<<endl;
    return 0;
    
}