#include <iostream>  
using namespace std;
int unit16_main()
{
 	bool light=false;
 	light=!	light;
	light=!	light;
	light=!	light;
	light=!	light;
	light=!	light;
	if(	light)
		cout<<"����";
	else
		cout <<"����" ; 
		
	cout << endl << "������һ�����֣�"; 
	bool flag;
	int n;
	cin>>n;
	flag=n%2==0;
	cout << flag << ":" << true << endl;
	if 	(flag)
		cout<<"yes" ;
	else
		cout <<"no";
		
	return 0;
} 	
