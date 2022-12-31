#include <iostream>
using namespace std;
int unit7_main()
{
	int a, b, t; 
    a=10;
    b=20;
    cout << "a=" << a << " b=" << b << endl; 
    t = a;
    a = b;
    b = t;
    cout << "a=" << a << " b=" << b << endl; 
    return 0;
}

