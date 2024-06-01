#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct ex {
    int x, y;
};

int main()
{
    int a[16] = {2,0,2,4,3,1,6};
    int * p=a;
    *(p+4) = 11;                                             
    cout<< a[4] <<endl;
    return 0;
}
