#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[2023];
    int a1[2023]={0};
    int f,m,len=0;
    cin>>f;
    cin>>m;
    for(int i=0;i<f;i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < f-m+1; i++)
    {
        if(a[i]!=0)
        {
            for(int j=i;j<m+i;j++)
            {
                a1[len]=a1[len]*10;
                a1[len] += a[j];
            }
            len++;
        }
    }
    sort(a1, a1+len);
    for(int i=0;i<len;i++)
        cout<<a1[i]<<" ";
    cout<<endl;
    return 0;
    
}