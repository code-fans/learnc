#include <iostream>
#include <iomanip>
using namespace std;
int unit8_main()
{
   int a,b,s;
   a=18;
   b=870;
   s=a+b;
   cout <</*setfill('*')<<*/setw(10)<<a<<endl; 
   cout <<setw(4) <<"+"<<setw(6)<<b<<endl;
   cout <<setw(12)<<setfill('-')<<"-"<< setfill(' ') << endl;
   cout <<setw(10)<<s<<endl;
   return 0; 
}
