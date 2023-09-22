//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cstring>

#define SIZE(arr) ((sizeof(arr)) / (sizeof(arr[0])))

using namespace std;


void display (int i)
{  // function:
   cout << i << " ";
}


int main_test3num(){
    int num[10];
    memset(num,0,sizeof(num));
    for(int i=123; i<330; i++){
        bool ok = true;
        long long w = i*1002003;
        while(w>0){
            int p = w%10;
            if(num[p] == i){
                ok = false;
                break;
            }
            num[p] = i;
            w /= 10;
        }
        if(ok){
            cout<<i<<" "<<i*2<<" "<< i*3<<endl;
        }
    }
    return 0;
}
int main(){
	int c[5]={1,2};
	for(int i=0;i<5;i++)
		cout << c[i] << " ";
    cout << endl;
	return 0;
}

int csp_main2(){
	freopen("data/csp.txt", "r", stdin);
	//freopen("data/csp.out", "w", stdout);
	int a, b;
	cin >> a >> b;
	cout << a << ":" << b << endl;

	int arr[]={1, 9, 12, 29, 0, 31, 8, 10, 99, 7};
	int arrLen =  SIZE(arr);

 	for_each (arr, arr + arrLen, display);
 	cout << endl;
 	sort(arr, arr + arrLen, greater<int>());
 	for_each (arr, arr + arrLen, display);
 	cout << endl;

	return 0;
}
