#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a,b;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a>>b;
        if (a[0]==b[0]){
            cout<<"Tie"<<endl;
            continue;
        }
        if ((a[0]=='R'&&b[0]=='S')||(a[0]=='S'&&b[0]=='P')||(a[0]=='P'&&b[0]=='R'))
            cout<<"Player1"<<endl;
        else
            cout<<"Player2"<<endl;
    }
    return 0;
}