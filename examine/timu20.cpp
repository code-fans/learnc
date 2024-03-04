#include <iostream>
using namespace std;
int main()
{
    int a,b,a1[100000]={0},c=0;
    cin>>a>>b;
    for (int i = 0; i < b; i++){
        cin>>c;
        a1[c]+=i+1;
    }
    for (int i = 0; i < a; i++){
        cout<<a1[i]<<' ';
    }
    cout<<endl;
    return 0;
}