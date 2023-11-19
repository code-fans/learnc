#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int shx(int a[1000][1000], int w,int h)
{
    for (int i = 0; i < h/2; i++)
        for (int j = 0; j < w; j++)
            swap(a[i][j],a[h-1-i][j]);
    return 0;
}

int zy(int a[1000][1000],int w,int h)
{
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w/2; j++)
            swap(a[i][j],a[i][w-j-1]);
    return 0;
}

int f(int a[1000][1000], int w, int y,int fx)
{
    if (fx==0)
        for (int i = 0; i < y; i++){
            for (int j = 0; j < w; j++)
                cout<<a[i][j]<<' ';
            cout<<endl;
        }
    if (fx==1)
        for (int i = 0; i < w; i++){
            for (int j = 0; j < y; j++)
                cout<<a[j][w-i-1]<<' ';
            cout<<endl;
        }
    if (fx==2)
        for (int i = 0; i < y; i++){
            for (int j = 0; j < w; j++)
                cout<<a[y-1-i][j]<<' ';
            cout<<endl;
        }
    if (fx==3)
        for (int i = 0; i < y; i++){
            for (int j = 0; j < w; j++)
                cout<<a[i][w-1-i]<<' ';
            cout<<endl;
        }
    return 0;
}

int main()
{
    int w, h, a[1000][1000];
    cin>>w>>h;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            cin>>a[i][j];
    string str;
    cin>>str;
    int fx=0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]=='A')
            fx++;
        if (str[i]=='B')
            fx+=3;
        if (str[i]=='C')
            zy(a,w,h);
        if (str[i]=='D')
            shx(a,w,h);
    }

    f(a,w,h,fx%4);
    return 0;
}