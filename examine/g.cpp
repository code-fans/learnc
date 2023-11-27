#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    long long n;
    cin>>n;
    if (n>str.size()){
        cout<<"0"<<endl;
        return 0;
    }
    
    cout<<str[str.size()-n]<<endl;
    
    return 0;
}