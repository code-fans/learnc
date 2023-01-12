#include <iostream>
using namespace std;
int unit20_main()
{
	int a, b, t,min;
	cout <<"a b c=";
	cin>>a>>b>>t;
	min=a;
	if (b<min) min=b;
	if (t<min) min=t;
	cout <<"min="<<min<<endl;
	return 0;
}
  
