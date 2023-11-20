#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[1000],j=0;
    cin>>str[0];
    while (str[j]!='!'){
        j++;
        cin>>str[j];
    }
    for (int i = 0; i < j; i++)
    {
        cout<<str[j-i-1];
    }
    cout<<endl;
    return 0;
}