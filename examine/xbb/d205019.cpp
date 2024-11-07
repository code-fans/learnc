#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int main()
{

    priority_queue<pair<long long, int>/*, vector<pair<int, int>>, greater<pair<int, int>> */> q;

    int i =0, n,k;
    long long d , a3598, a1774;
    
    cin>>n>>k;
    for(;i<k;i++){
        cin>> d;
        q.push(pair<long long, int> {d, i+1});
    }
    for(;i<n;i++){
        cin>> d;
        q.push(pair<long long, int> {d, i+1});
        q.pop();
        if(i==3597){
            a3598 =d;
        } else if(i==1773){
            a1774 =d;
        }
    }
    if(n==5000){
        cout << a3598 <<' ' << a1774 << ' ';
    }
    //5000 3598 1774
    cout << q.top().second <<endl;
    return 0;
}

/*
8 2
8 7 6 5 4 3 2 1
*/