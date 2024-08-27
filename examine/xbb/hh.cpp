#include <iostream>
#include <string>
using namespace std;
string h[564938];
int tonal;
int Hash(string x)
{
    int l=x.length();
    return ((x[0]-65)*10000+(x[l/2]-65)*100+(x[l-1]-65))%564937;
}
void insert(string x)
{
    int t=Hash(x);
        while (h[t]!=""&&h[t]!=x){
        t++;
        if(t==564937)
            t=0;
    }
    h[t]=x;
}
void find(string x)
{
    int t=Hash(x);
    while (h[t]!=""&&h[t]!=x){
        t++;
        if(t==564937)
            t=0;
    }
    if (h[t]==""){
        tonal++;
    }
}
int main()
{
    int n,m;
    string wrd;
    cin>>n;
    for (int i = 1; i <= n; i++){
        cin>>wrd;
        insert(wrd);
    }
    cin>>m;
    for (int i = 1; i <= m; i++){
        cin>>wrd;
        find(wrd);
    }
    cout<<tonal<<endl;
    return 0;
}