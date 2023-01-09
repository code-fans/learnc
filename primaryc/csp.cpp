//#include <bits/stdc++.h> 
#include <iostream>
#include <algorithm>

#define SIZE(arr) ((sizeof(arr)) / (sizeof(arr[0])))

using namespace std;


void display (int i)
{  // function:
   cout << i << " ";
}


int csp_main(){
	freopen("csp.txt", "r", stdin);
	//freopen("csp.out", "w", stdout);
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
