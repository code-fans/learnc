#include<iostream>
using namespace std;
int a[1000][1000];

void huoba( int x,int y, int i)
{
    a[x][y]=1;
    if(y+1<=i)
        a[x][y+1]=1;
    if(y-1>=0)
        a[x][y-1]=1;
    if(x+1<=i)
        a[x+1][y]=1;
    if(x-1>=0)
        a[x-1][y]=1;
    if(x+1<=i&&y+1<=i)
        a[x+1][y+1]=1;
    if(x+1<=i&&y-1>=0)
        a[x+1][y-1]=1;
    if(x-1>=0&&y+1<=i)
        a[x-1][y+1]=1;
    if(x-1>=0&&y-1>=0)
        a[x-1][y-1]=1;

    if(y+2<=i)
        a[x][y+2]=1;
    if(y-2>=0)
        a[x][y-2]=1;
    if(x-2>=0)
        a[x-2][y]=1;
    if(x+2<=i)
        a[x+2][y]=1;
}

void yingshi()
{

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
        huoba(x-1,y-1, i-1);
    }
    for (int t = 0; t < i; t++)
    {
        for (int u = 0; u < i; u++)
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