#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;
struct man
{
    int index,val;
}t;
deque <man> dq;
int main(){
    int n,m;
    cin>>n>>m;
    cout<<0<<endl;
    for (int i = 1; i < n; i++){
        scanf("%d",&t.val);
        t.index=i;
        while (!dq.empty() && t.val < dq.back().val ){
            dq.pop_back();
        }
        dq.push_back(t);
        if(i-dq.front().index>=m)
            dq.pop_front();
        printf("%d\n",dq.front().val);
    }
    cout<<endl;
    return 0;
}