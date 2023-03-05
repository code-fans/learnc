#include <iostream>
#include <cmath>
using namespace std;

long long greatestCommonDivisor(long long num1, long long num2);

int unit49_main()
{
 	double x,y;
 	long long sum;
 	cout<<"请输入一个纯小数"<<endl;
 	do
 	{
 	 cout<<"x=";
 	 cin>>x;
 	}
 	while(x>=1||x<=0);

 	sum=1;
 	do
 	{
 	 sum*=10;
 	 y=x*sum;
 	}
 	while(fabs(y-(int)y)>1e-9);
 	int fenzi = int(y);// (int) y
 	int r = greatestCommonDivisor(fenzi, sum);
 	cout<<(fenzi/r)<<'/'<<(sum/r)<<endl;
	return 0;
}
