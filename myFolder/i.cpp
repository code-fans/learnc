#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int k,n,a[100001];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    cin>>k;
    priority_queue<int, vector<int>, greater<int> > minHeap;

    for (int i = 0; i < k; i++){
        minHeap.push(a[i]);
    }
    
    for (int i = k; i < n; i++){
        minHeap.push(a[i]);
        minHeap.pop();
    }
    for (int i = 0; i < k; i++){
        a[i] = minHeap.top();
        minHeap.pop();
    }
    for (int i = k-1; i>=0; i--){
        cout << a[i]<<endl;
    }
    return 0;
}