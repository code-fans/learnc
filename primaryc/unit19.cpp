#include <iostream>
using namespace std;
int unit19_main()
{
	int a ,b,c,d,t;
	cout<<"a,b,c,d=";
	cin>>a>>b>>c>>d;

	if(a > b) {
		t=a;
		a=b;
		b=t;
	}

	if(a > c) {
		t=c;
		c=a;
		a=t;
	}

	if(a > d) {
		t=a;
		a=d;
		d=t;
	}

	if(b > c) {
		t=b;
		b=c;
		c=t;
	}

	if(b > d) {
		t=b;
		b=d;
		d=t;
	}

	if(c > d) {
		t=c;
		c=d;
		d=t;
	}

	cout << a << " " << b << " " << c << " " << d <<endl;
	return 0;
}
