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
	cout << "请输入一个字符串：";
	char aString[128];
	cin >> aString;
	cout << "您输入的是：" << aString << endl;
    int ia[] = {1, 2, 3, 4, 5};
    for_each(ia, ia + 3, display);
    cout << endl;
    system("pause");
}

