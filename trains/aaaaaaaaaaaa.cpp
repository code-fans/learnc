#include <iostream>
using namespace std;
int main()
{
    int a[5][5],ans=0,max=0,ha=0,l=100000000,k,n,p=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        max=0;
        p=0;
        for (int j = 0; j < 5; j++)
        {
            if (max<a[i][j])
            {
                max=a[i][j];
                k=i;
                n=j;
            }
        }
        bool isMin = true;
        for (int j = 0; j < 5; j++)
        {
            if (a[j][n]<max)
            {
                isMin = false;
            }
            
        }
        if (isMin)
        {
            cout<<k+1<<' '<<n+1<<' '<<max<<endl;
            return 0;
        }
        
    }
    cout<<"not found"<<endl;
    return 0;
    
}