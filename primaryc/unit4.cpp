#include <iostream> 
using namespace std;

void testPlusPlus(int a, int b, int c){
	cout << a << " " << b << " " << c << endl;
}

int main()
{
	//i++; i+=1; i=i+1;
	int i = 5; 
	// 765 ������Ϊ ����������ѹջ�Ƿ������ģ����Ժ����++���� 
	// ���ִ�ֵ��ͬ�ı������в�ͬ�Ľ����C++����û�����涨
	// MSVC�Ľ���ͱȽϺ���⣬TDM-GCC�о�����ıȽ��Ҳ�̫���ҹ��� 
	testPlusPlus( i++, i++, i++ );
	i = 5;
	//888
	testPlusPlus( ++i, ++i, ++i );
	i = 5;
	// 567
	int b = i++ + i++ + i++;
	cout<< i << " " << b << endl;
	i = 5;
	// ���������ֵģ���Ϊǰ��������7�����һ����8��
	// ��Ϊһ���Ӻż����������һ���ӷ� 
	b = ++i + ++i + ++i;
	cout<< i << " " << b << endl;
	//-----------------------------------
	i = 5;
	//345
	testPlusPlus( i--, i--, i-- );
	i = 5;
	//222
	testPlusPlus( --i, --i, --i );
	i = 5;
	//543
	b = i-- + i-- + i--;
	cout<< i << " " << b << endl;
	i = 5;
	//332
	b = --i + --i + --i;
	cout<< i << " " << b << endl;
	
	return 0; 
}
