#include <algorithm>
#include <iostream>
#include <cstdio>
#include <deque>
#include <string>
using namespace std;

long long qiuMinMax(const long long * a, int len, int k, int l){
    long long jiZhi [100001]={0};
    deque<int> minF;
    deque<int> maxF;
    for(int i=0; i<len; i++){
        while (!minF.empty() && i - l >= minF.front()) minF.pop_front();
		while (!minF.empty() && a[i] <= a[minF.back()]) minF.pop_back();
		minF.push_back(i);

        while (!maxF.empty() && i - l >= maxF.front()) maxF.pop_front();
		while (!maxF.empty() && a[i] >= a[maxF.back()]) maxF.pop_back();
		maxF.push_back(i);

		if (i >= l-1){
            jiZhi[i-l+1] = a[maxF.front()] - a[minF.front()];
        }
    }
    int zjgs = len - l + 1;
    sort(jiZhi, jiZhi+zjgs, greater<long long>());
    return jiZhi[k-1];
}

bool qiuMinMax2(const long long * a, int len, int k, int l, long long jz){
    int sub = 0;
   
    deque<int> minF;
    deque<int> maxF;
    for(int i=0; i<len; i++){
        while (!minF.empty() && i - l>= minF.front()) minF.pop_front();
		while (!minF.empty() && a[i] <= a[minF.back()]) minF.pop_back();
		minF.push_back(i);

        while (!maxF.empty() && i - l>= maxF.front()) maxF.pop_front();
		while (!maxF.empty() && a[i] >= a[maxF.back()]) maxF.pop_back();
		maxF.push_back(i);

		if (i >= l-1){
            long long cjz = a[maxF.front()] - a[minF.front()];
            if(cjz >= jz){
                sub++;
                if(sub == k){
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int T;
    cin>>T;
    long long a [100001];
    for(int i=0; i<T; i++){
        int n, k, l;
        cin >> n >> k;
        l = n-k+1;
        
        for(int j=0; j<n; j++)
            cin >> a[j];

        if(l==1){
            cout<< 0 <<' '<< 1 <<endl;
            continue;
        }

        long long maxJZ = qiuMinMax(a, n, k , l);
        if(maxJZ==0){
            cout<< 0 <<' '<< 1 <<endl;
            continue;
        }
        int s=1, m;

        while(l>s){
            m=(l+s)/2;
            bool eq = qiuMinMax2(a, n, k , m, maxJZ);
            if(eq){
                l= m;
            } else {
                s =m +1;
            }
        }
    
        cout<<maxJZ<<' '<<l<<endl;
    }
    return 0;
}