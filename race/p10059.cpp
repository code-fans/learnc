#include <algorithm>
#include <iostream>
#include <cstdio>
#include <deque>
#include <string>
using namespace std;

long long qiuMinMax(const long long * a, int len, int k, int l){
    long long jiZhi [100001]={0};
    deque<int> minQ;
    deque<int> maxQ;
    for(int i=0; i<len; i++){
        //第一步，把队列中已经不在比较范围内的元素去除
        while (!minQ.empty() && i - l >= minQ.front()) minQ.pop_front();
        //第二步，从后面把比当前入队数值大的元素去除
		while (!minQ.empty() && a[i] <= a[minQ.back()]) minQ.pop_back();
        //三， 天机当前
		minQ.push_back(i);
        while (!maxQ.empty() && i - l >= maxQ.front()) maxQ.pop_front();
		while (!maxQ.empty() && a[i] >= a[maxQ.back()]) maxQ.pop_back();
		maxQ.push_back(i);

		if (i >= l-1){
            jiZhi[i-l+1] = a[maxQ.front()] - a[minQ.front()];
        }
    }
    int zjgs = len - l + 1;
    sort(jiZhi, jiZhi+zjgs, greater<long long>());
    return jiZhi[k-1];
}

bool qiuMinMax2(const long long * a, int len, int k, int l, long long jz){
    int sub = 0;
   
    deque<int> minQ;
    deque<int> maxQ;
    for(int i=0; i<len; i++){
        while (!minQ.empty() && i - l>= minQ.front()) minQ.pop_front();
		while (!minQ.empty() && a[i] <= a[minQ.back()]) minQ.pop_back();
		minQ.push_back(i);

        while (!maxQ.empty() && i - l>= maxQ.front()) maxQ.pop_front();
		while (!maxQ.empty() && a[i] >= a[maxQ.back()]) maxQ.pop_back();
		maxQ.push_back(i);

		if (i >= l-1){
            long long cjz = a[maxQ.front()] - a[minQ.front()];
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
        /*while(l>2 && qiuMinMax2(a, n, k , l-1, maxJZ)){
            l--;
        }*/
        
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