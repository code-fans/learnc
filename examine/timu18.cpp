#include <iostream>
using namespace std;
int main()
{
    int a,b,a1[10000]={0},c;
    cin>>a>>b;
    for (int i = 0; i < b; i++){
        cin>>c;
        a1[c]++;
    }
    bool isshuchu=false;
    for (int i = 0; i < a; i++){
        if(a1[i]==0){
            cout<<i<<' ';
            isshuchu = true;
        }
    }
    if(!isshuchu)
        cout<<a;
    cout<<endl;    
    return 0;
}