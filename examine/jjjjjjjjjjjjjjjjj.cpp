#include <iostream>
#include <string>
using namespace std;
int main()
{
    freopen("../data/input.txt", "r"/* r read w write*/, stdin);
    string str;
    int a=0;
    while (cin>>str){
        if(a!=0)
            cout<<',';
        cout<<str.size();
        a++;
    }
    cout<<endl;
    return 0;
}