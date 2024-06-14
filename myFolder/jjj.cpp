#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 1;
    for (int i = 0; i < 200; i++){
       a = a * 4937 % 100;
       cout << setw(3) << i << ' ' << a << endl;
    }
    return 0;
}

