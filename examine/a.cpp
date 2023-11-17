#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    cin>>a>>c>>b;
    if (c=='+')
        cout<<a+b;
    if (c=='-')
        cout<<a-b;
    if (c=='*')
        cout<<a*b;
    if (c=='/')
        cout<<a/b;
    if (c=='%')
        cout<<a%b;
    cout<<endl;
    return 0;
}
/*
10
39
49
42
61
44
147
42
72
35
46
【输出样例】
1.3
*/