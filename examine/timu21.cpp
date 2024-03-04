#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    for (int i = 0; i < n; i++){
        cin>>str;
        char max='0';
        for (int j = 0; j < str.size(); j++){
            if(max<str[j])
                max=str[j];
        }
        if(max<'2')
            cout<<1<<' ';
        else
            cout<<0<<' ';
        if(max<'8')
            cout<<1<<' ';
        else
            cout<<0<<' ';
        if(max<='9')
            cout<<1<<' ';
        else
            cout<<0<<' ';
        if(max<='F')
            cout<<1<<' ';
        else
            cout<<0<<' ';
        cout<<endl;
        
    }
    return 0;
}