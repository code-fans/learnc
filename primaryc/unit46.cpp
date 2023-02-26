#include <iostream>
using namespace std;
int unit46_main()
{
    int u, i  ,o;
    cin>>u>>i;
    if(u>i)
    o=i;
    else
    o=u;
    while(1){
        if(u%o==0&&i%o==0){
            cout<<o;
            break ;
        }
        o--;
    }
    return 0;
}

long long greatestCommonDivisor(long long num1, long long num2){
    long long r;
    while(1){
        r = num1 % num2;
        if(r==0)
            return num2;
        num1 = num2;
        num2 = r;
    }
    return 1;
}

int unit46_2_main()
{
    int q ,w ,i=1;
    cin>>q>>w;
    i=greatestCommonDivisor(q, w);
    cout <<i << " ";
    cout << q / i * w;
    return 0;
}

int unit46_3main()
{
    int u, i,o ,sum=0;
    cin>>u>>i;
    cout<<u/i;
    u=u%i;
    o=u;
    if(u!=0)
        cout<<".";
    while(u!=0){
        cout<<u*10/i;
        u=u*10%i;
        sum ++;
        if(u==o){
        cout<<endl<<"已循环共"<<sum<<"位";
        break ;
        }
    }
    return 0;
}
