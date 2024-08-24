#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    string str[10000];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>str[i];
    }
    sort(str,str+n);
    string str1=str[0];

    cout<<str[0]<<endl;
    for (int i = 1; i < n; i++){
        if (str1!=str[i]){
            cout<<str[i]<<endl;
            str1=str[i];
        }
    }
    
    return 0;
}