#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int unit22_main()
{
	int n,a;
	cout <<"�齱����" <<endl;
	cout<<"������1��5�е�������" ;
	cin>>a; 
	srand(time(0));  
	a=rand()%5+1;
	if (n==a) cout<<"�н�������ʮԪ" <<endl;
	else cout<<"û�н�����2Ԫ"<<endl;
	cout <<"�н�������"<<a<<endl; 
	return 0;
}
