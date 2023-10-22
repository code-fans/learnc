#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct stud
{
    string name;
    long long sum;
};

bool cmp(stud a, stud b)//compare
{
    if(a.sum==b.sum)
        return a.name<b.name;
    return a.sum > b.sum;
}

int main()
{
    stud a[1000];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].name>>a[i].sum; 
    } 
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
        cout<<a[i].name<<' '<<a[i].sum<<endl;
    return 0;    
}