#include <iostream>
using namespace std;

void testPlusPlus(int a, int b, int c)
{
    cout << a << " " << b << " " << c << endl;
}

int main()
{
    // i++; i+=1; i=i+1;
    int i = 5;
    // 765 这是因为 参数传递是压栈是反过来的，所以后面的++先算
    testPlusPlus(i++, i++, i++);
    i = 5;
    // 888
    testPlusPlus(++i, ++i, ++i);
    i = 5;
    // 567
    int b = i++ + i++ + i++;
    cout << i << " " << b << endl;
    i = 5;
    // 这个是最奇怪的，因为前面两个是7，最后一个是8，
    // 因为一个加号计算完再算后一个加法
    b = ++i + ++i + ++i;
    cout << i << " " << b << endl;
    //-----------------------------------
    i = 5;
    // 345
    testPlusPlus(i--, i--, i--);
    i = 5;
    // 222
    testPlusPlus(--i, --i, --i);
    i = 5;
    // 543
    b = i-- + i-- + i--;
    cout << i << " " << b << endl;
    i = 5;
    // 332
    b = --i + --i + --i;
    cout << i << " " << b << endl;

    return 0;
}