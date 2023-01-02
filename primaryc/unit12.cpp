#include <iostream>  
using namespace std;
int unit12_main()
{
	char ch;
	int n;
	cin>>ch;
	n=ch;
	cout<< ch <<' '<< n <<endl;
	
	char ch1, ch3;
	ch1 = ch -1;
	ch3=ch+1;
	cout <<ch1 << ch << ch3 <<endl;
	if(ch>='A' && ch<='Z')
		ch=ch+32;
	else
		ch=ch-32;
	cout <<ch << endl; 
	
	return 0;
} 
