#include   <iostream>
using namespace std;

int unit17_main()
{
	int a;
	cout<<"������һ������:";
	cin>>a;
	if (a%3==0)
		if(a%5==0) 
			cout<<"ŷҮŷҮ" <<endl;
			
	if (a%3==0 && a%5==0)
		cout<<"ŷҮŷҮ" <<endl;
	return 0; 
}
