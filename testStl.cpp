#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <stdlib.h>

using namespace std;

void display(int a)
{
    cout << a << " ";
}

int main()
{
	cout << "������һ���ַ�����";
	char aString[128];
	cin >> aString;
	cout << "��������ǣ�" << aString << endl;
    int ia[] = {1, 2, 3, 4, 5};
    for_each(ia, ia + 3, display);
    cout << endl;
    system("pause");
}

