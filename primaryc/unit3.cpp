#include   <iostream>
using namespace std;

int unit3_main()
{
	int a,b,c;
	a=880;	
	b=500;
	// swap
	cout << a << "  " << b << endl;
	// int c; c=a; a=b; b=c;
	a = a+b;
	b = a-b;
	a = a-b;
	cout << a << "  " << b << endl;
	c=a*b;
	cout <<"�찲�Ź㳡:";
	cout <<c<<"ƽ����" << endl;
	return 0;
}
