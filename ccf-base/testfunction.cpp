#include <iostream>
using namespace std;
void swapInt(int * a,int * b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main(){
    int a=3, b=4;
    swapInt(&a, &b);
    cout<<a<<' '<<b<<endl;
    return 0;
}