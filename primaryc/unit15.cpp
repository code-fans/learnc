#include <iostream>
#include <string> 
 
using namespace std;
int unit15_main()
{
	const string USER="wilbur", PSW="564937";
	string user,psw;
	cout <<"ÓÃ»§Ãû:";
	cin>>user;
	cout<<"ÃÜÂë:";
	cin >>psw; 
	if(user.compare(USER)==0) {
		if(psw==PSW)
			cout<<"Ç×°®µÄÐ¡ÅóÓÑ£¬»¶Ó­¹âÁÙ!";
		else 
			cout << "ÃÜÂë´íÎó£¡" ;
	} else 
		cout<<"ÓÃ»§Ãû´íÎó£¡" ; 
	
	return 0;
} 
