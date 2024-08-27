#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    priority_queue<long long, vector<long long>, greater<long long>> minQueue;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        long long ld;
        cin>>ld;
        minQueue.push(ld);
    }
    long long ans=0;
    while (minQueue.size()>=2)    {
        long long a=minQueue.top();
        minQueue.pop();
        a+=minQueue.top();
        minQueue.pop();
        ans+=a;
        minQueue.push(a);
    }
    cout<<ans<<endl;
    return 0;
}