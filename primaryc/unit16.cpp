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
		cout<<"灯亮";
	else
		cout <<"灯灭" ;

	cout << endl << "请输入一个数值：";
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
