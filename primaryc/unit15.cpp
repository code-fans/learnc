#include <iostream>
#include <string> 
 
using namespace std;
int unit15_main()
{
	const string USER="wilbur", PSW="564937";
	string user,psw;
	cout <<"�û���:";
	cin>>user;
	cout<<"����:";
	cin >>psw; 
	if(user.compare(USER)==0) {
		if(psw==PSW)
			cout<<"�װ���С���ѣ���ӭ����!";
		else 
			cout << "�������" ;
	} else 
		cout<<"�û�������" ; 
	
	return 0;
} 
