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
		cout << "���������������֣��ÿո������" << endl ;
		int inInt1, inInt2;
		cin >> inInt1 >> inInt2;
		if( inInt1 == 0 && inInt2 == 0){
			break;
		}
		cout << "����������˵Ľ��Ϊ:" << func( inInt1, inInt2) << endl;
	}
    return 0;
}




