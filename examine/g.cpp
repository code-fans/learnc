#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;
struct g
{
    long long a;
    int b;
};
g a1[5100];

bool com(g i,g i1){
    if(i.a<i1.a){
        return true;
    }
    if(i.a==i1.a){
        return i.b<i1.b;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        double a2;
        cin>>a2;
        a1[i].a=a2;
        a1[i].b=i+1;
    }
    sort(a1, a1+n, com);
    long long ao=0;
    for (int i = 0; i < n; i++){
        cout<<a1[i].b<<' ';
        if(i!=n-1)  
            ao += (n-1-i) * a1[i].a;
    }
    cout<<endl;
    printf("%.2f", double(ao)/n);
    return 0;
}