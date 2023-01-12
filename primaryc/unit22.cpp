#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int unit22_main()
{
	int n,a;
	cout <<"抽奖程序" <<endl;
	cout<<"请输入1—5中的任意数" ;
	cin>>a; 
	srand(time(0));  
	a=rand()%5+1;
	if (n==a) cout<<"中奖！奖金十元" <<endl;
	else cout<<"没中奖，付2元"<<endl;
	cout <<"中奖号码是"<<a<<endl; 
	return 0;
}
