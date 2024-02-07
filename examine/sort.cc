#include <iostream>
using namespace std;

int sort1(int a[100000],int b)
{
    int max=0;
    for (int i = 0; i < b; i++)
    {
        if (a[i]>max)
            max=a[i];
    }
    return max;
}

int sort2(int a[100000],int b)
{
    int min=1000000;
    for (int i = 0; i < b; i++)
    {
        if (a[i]<min)
            min=a[i];
    }
    return min;
}

int main()
{
    int a,max[100000]={0},k=0;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cin>>max[i];
    }
    cout<<sort1(max,a)-sort2(max,a)<<endl;
    return 0;
}