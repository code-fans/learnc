#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n = str.length();
    while(str[n-1]=='0')
        n--;

    int b = 0;
    if(str[0] == '-')
    {
        cout<<'-';
        b=1;
    }

    if(b<n){
        for (int i = n-1; i >=b; i--)
        {
            cout<<str[i];
        }
    } else
        cout<<"0";
    cout<<endl;
}