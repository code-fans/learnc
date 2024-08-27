#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

struct aaa{
    int h;
    int c;
};

struct cmpaaa{
    bool operator() (aaa a, aaa b){
        return a.c!=b.c?a.c>b.c:a.h<b.h;
    }
};

priority_queue<aaa, vector<aaa>, cmpaaa> q;

int main()
{
    int n,m;
    cin>>n>>m;
    m=m+m/2;
    aaa a;
    for ( int i = 0; i < n; i++){
        cin>>a.h>>a.c;
        q.push(a);
    }

    cout<<endl;

    for (int i = 0; i < m; i++){
        a = q.top();
        cout<<a.h << ' ' << a.c <<endl;
        q.pop();
    }
    
    return 0;
}