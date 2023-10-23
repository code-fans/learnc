#include <iostream>
#include <algorithm>
using namespace std;

struct stud
{
    int id;
    int math,english,chinese;
    int sum;
};

bool cmp(stud a, stud b)
{
    return a.sum>b.sum ||
     (a.sum == b.sum && (a.chinese>b.chinese || (a.chinese==b.chinese && a.id < b.id)));
}

stud s[300];
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s[i].chinese>>s[i].math>>s[i].english;
        s[i].id=i+1;
        s[i].sum=s[i].chinese+s[i].math+s[i].english;
    }
    sort(s,s+n,cmp);
    for (int i = 0; i < 5; i++)
    {
        cout<<s[i].id<<' '<<s[i].sum<<endl;
    }
    
}