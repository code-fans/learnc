#include <iostream>
using namespace std;
int unit6_main()
{
	int n=1;
	n=n*2;
	n=n*2;
	n=n*2;
	n*=2;
	n*=2;
	cout <<n<<endl;

	int i=1, sum = 0;
	sum += i;
	i*=2;
	sum += i;
	i*=2;
	sum += i;
	i*=2;
	sum += i;
	cout << "i="<<i<<", sum="<<sum<<endl;
	return 0;
}
