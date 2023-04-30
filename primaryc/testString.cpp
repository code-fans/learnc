#include <iostream>
#include <cstring>
using namespace std;

int str_main(){
	char strA[6];
	for(int i=0;i<6;i++)
		strA[i] = 'A'+i;
	cout << strA << endl;
	strA[4] = 0;
	cout << strA << endl;
	
	string str{"这是一个字符串", 8};
	cout << str << endl;
	cout << str.length() << endl;
	str[4]='a'; str[5]='b';
	cout << str << endl;
	
	string str2 {8, 'A'};
	cout << str2 << endl;
	return 0;
}
