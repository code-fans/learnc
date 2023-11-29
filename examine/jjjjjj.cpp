#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int a;
    if(((str[str.size()-1])=='r'&&(str[str.size()-2])=='e')||((str[str.size()-1])=='y'&&(str[str.size()-2])=='l'))
        a=2;
    else if(((str[str.size()-1])=='g'&&(str[str.size()-2])=='n')&&(str[str.size()-3])=='i')
        a=3;
    for (int i = 0; i <= str.size()-a; i++)
        cout<<str[i];
    cout<<endl;
    return 0;
}