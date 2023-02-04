#include <iostream>
#include <iomanip>

using namespace std;
int unit37_main()
{
	long long i,a1,a2,a3,w=18;
	a2=a1=1;
	cout<<setw(w)<<a1<<endl;
	cout<<setw(w)<<a2<<endl;

	for (i=1;i<=60;i++){
        a3=a1+a2;
        cout<<setw(w)<<a3<<endl;
        a1=a2;
        a2=a3;
	}
	return 0;
}
