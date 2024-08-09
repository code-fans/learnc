#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;
const int INF=0xfffffff;

int n, heapsize, a[200100];

void m(int i)
{
    int lg = i;
    int l=i<<1;
    int r=(i<<1)+1;
    if (l<=heapsize&&a[i]<a[l])
        lg=l;
    if(r<=heapsize && a[r]>a[lg])
        lg=r;
    if(lg != i)
    {
        swap(a[i], a[lg]);
        m(lg);
    }
}

void b()
{
    heapsize=n;
    for (int i = n/2; i >= 1; i--)
        m(i);
}

int e(int a[])
{
    int Max=a[1];
    a[1]=a[heapsize];
    a[heapsize]=-1;
    heapsize--;
    m(1);
    return Max;
}

void h(int i, int key)
{
    if(a[i] > key)
    {
        cout<<"-1\n";
        return ;
    }
    a[i]=key;
    while (i>1 && a[i>>1]<a[i])
    {
        swap(a[i],a[i>>1]);
        i=i>>1;
    }
}

void M(int key)
{
    heapsize++;
    a[heapsize]=-INF;
    h(heapsize, key);
}

int main()
{
    int i,key,v;
    cin>>n;
    for (i = 1; i <= n; i++)
        cin>>a[i];
    b();
    while (1)
    {
        cin>>i;
        if(i==1)
            cout<<a[1]<<"\n";
        else if(i==2)
            cout <<e(a)<<"\n";
        else if(i==3)
        {
            cin>>v>>key;
            h(v, key);
        }
        else if (i==4)
        {
            cin>>key;
            M(key);
        }
        else
            break;
    }
    return 0;
}
/*
19
244641025 650174225 523425801 201346347 32076779 405161819 685767338 632663352 651065584 41543302 576843159 860997414 347500313 774762152 780918422 405051448 978236790 857975305 609652895
*/
