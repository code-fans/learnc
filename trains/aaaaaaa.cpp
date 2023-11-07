#include <iostream>
#include <algorithm>
using namespace std;
int js[11];

bool cmp2(int a, int b){
    if(a%2==1&&b%2==1) return a>b;
    if (a%2==0&&b%2==0) return a<b;
    return a%2;
}

bool cmp(int a, int b){
    return (a%2?-a:a) < (b%2?-b:b);
}


int main()
{
    for (int i = 0; i < 10; i++)
    {
        cin>>js[i];
    }

    sort(js, js+10, cmp);

    for (int i = 0; i < 10; i++)
    {
        cout<<js[i]<<' ';
    }
    
    cout << endl;
    return 0;
}