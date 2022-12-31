#include <iostream>
#include <stdlib.h> 

using namespace std;

int func(int x1, int x2) 
{
	return x1 * x2;
}

int main()
{
	while(true){
		cout << "请您输入两个数字，用空格隔开：" << endl ;
		int inInt1, inInt2;
		cin >> inInt1 >> inInt2;
		if( inInt1 == 0 && inInt2 == 0){
			break;
		}
		cout << "这两个数相乘的结果为:" << func( inInt1, inInt2) << endl;
	}
    return 0;
}




