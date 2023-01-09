#include   <iostream>
using namespace std;

int unit17_main()
{
	int a;
	cout<<"ÇëÊäÈëÒ»¸öÕûÊý:";
	cin>>a;
	if (a%3==0)
		if(a%5==0) 
			cout<<"Å·Ò®Å·Ò®" <<endl;
			
	if (a%3==0 && a%5==0)
		cout<<"Å·Ò®Å·Ò®" <<endl;
	return 0; 
}
