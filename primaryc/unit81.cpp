#include <iostream>
using namespace std;
const int MAX=10;

void count(int b[],int n)
{
    int x;
    for(int i=1;i<=n;i++)
    {
        do
        {
            cout<< i <<':';
            cin>>x;
        } while (x<0||x>MAX);
        b[x]++;    
    }
    
}

int main2()
{
    int a[MAX+1], i, n, *p;
    cout<<"请输入实到人数";
    cin >>n;
    for(p=a;p<=(a+MAX);p++)
        *p=0;
    p=a;
    count(p,n);
    for(i=0;i<=MAX;i++)
    {
        switch (i)
        {
            case 0:cout<<"弃权"<<a[i]<< endl; 
            break;
            default:cout<< i <<"号票数"<<a[i]<< endl; 
            break;
        }
    }
    return 0;
}
void swap(long long *p1, long long *p2)
{
    long long temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int main()
{
    long long a[2], *p;
    cin>>a[0]>>a[1];
    p = &a[0];
    swap(p, p+1);
    cout << *p << " "<<*(p+1)<<endl;
    return 0;
}
