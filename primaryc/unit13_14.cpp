#include <iostream>
using namespace std;
int unit13_main()
{
	int iq;
	cout <<"IQ"<<endl;
	cin>>iq;
	if (iq>140) cout <<"你是个天才！"<<endl;

	int n;
	cout << "请输入你每分钟跳绳多少下：";
	cin >>n;
	if (n>=200)
		cout<<"跳绳达人";
	else
		cout<<"继续努力";

	return 0;
}


