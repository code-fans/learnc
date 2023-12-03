#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    bool l=true;
    int k=0;
    string str[1000];
    while (cin>>str[k]){
        k++;
    }
    sort(str,str+k);
    for (int i = 0; i < k; i++){
        if(str[i]!=str[i-1]||i==0)
            cout<<str[i]<<endl;
    }
    return 0;
}