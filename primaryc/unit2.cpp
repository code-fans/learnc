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
	printDoubleChar("����");
	printDoubleChar("���߲�������");
	printDoubleChar("���������ˡ�");
	printDoubleChar("һƿɱ���, ");
	printDoubleChar("��֪�����١�");

	cout << endl << "�� ��" <<endl
		<< "���߲�������" << endl
		<< "���������ˡ�" << endl
		<< "һƿɱ���, " << endl
		<< "��֪�����١�" << endl;

	cout << "\n�� ��\n���߲�������\n���������ˡ�\nһƿɱ���, \n��֪�����١�\n";
	// cout << "99+1=" << 99+1 << endl;

	return 0;
}


