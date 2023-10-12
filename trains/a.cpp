#include<iostream>
using namespace std;
int a[300][300];

void huoba( int x,int y)
{
     for (int i = -2; i <=2; i++)
   {
        for (int j = -2; j <=2; j++)
        {
            if( (i<0?-i:i) +(j<0?-j:j) <= 2 )
                a[x+i][y+j] = 1;
        } 
   }
}

void yingshi(int x,int y)
{
   for (int i = -2; i <=2; i++)
   {
        for (int j = -2; j <=2; j++)
        {
            a[x+i][y+j] = 1;
        } 
   }
}

int main()
{
    int i,b=0;
    cin>>i;
    int x, y,c,d;
    cin>>c>>d;
    for (int u = 0; u < c; u++)
    {
        cin>>x>>y;
        huoba(x+2,y+2);
    }
    for (int t = 0; t < d; t++)
    {
        cin>>x>>y;
        yingshi(x+2,y+2);
    }
    
    for (int t = 3; t < i+3; t++)
    {
        for (int u = 3; u < i+3; u++)
        {
            if (a[t][u]!=1)
            {
                b++;
            }
        }  
    }
    cout<<b<<endl;
    return 0;
}