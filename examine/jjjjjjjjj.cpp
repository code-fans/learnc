#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    bool isans=true;
    int m=0;
    for (int i = 0; i < str.size(); i++){
        if(i==0 || str[i]!=str[i-1])
            m=1;
        else
            m++;
            
        if (m>=n){
            cout<<str[i];
            isans=false;
            break;
        }
    }
    if(isans)
        cout<<"No";
    cout<< endl;
    return 0;
}