#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    int c=a;
    for (int i = 0; i < b-1; i++){
        a*=c;
        if(a>1000000000){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<a<<endl;
    return 0;
}
