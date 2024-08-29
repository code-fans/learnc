#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

struct aaa{
    int h;
    int c;

    friend ostream& operator << (ostream &os, const aaa& a){
        os<<a.h<<' '<<a.c;
        return os;
    }

    bool operator < (const aaa& a) const {
        return c!=a.c? c< a.c : a.h<h;
    }

};

priority_queue<aaa> q3;

int main()
{
    int n,m;
    cin>>n>>m;
    m=m+m/2;
    aaa a;
    for ( int i = 0; i < n; i++){
        cin>>a.h>>a.c;
        q3.push(a);
    }

    cout<<endl;

    for (int i = 0; i < m; i++){
        cout<<q3.top()<<endl;
        q3.pop();
    }
    
    return 0;
}