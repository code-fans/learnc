#include <iostream>
#include <string>

using namespace std;

void printDoubleChar(string str)
{
	for(int i=0; i<str.length()-1; i+=2){
		cout << str.substr(i, 2) << str.substr(i, 2);
	}
	cout << endl;
}

int unit2_main()
{
	printDoubleChar("春晓");
	printDoubleChar("春眠不觉晓，");
	printDoubleChar("处处蚊子了。");
	printDoubleChar("一瓶杀虫剂, ");
	printDoubleChar("不知死多少。");

	cout << endl << "春 晓" <<endl
		<< "春眠不觉晓，" << endl
		<< "处处蚊子了。" << endl
		<< "一瓶杀虫剂, " << endl
		<< "不知死多少。" << endl;

	cout << "\n春 晓\n春眠不觉晓，\n处处蚊子了。\n一瓶杀虫剂, \n不知死多少。\n";
	// cout << "99+1=" << 99+1 << endl;

	return 0;
}


