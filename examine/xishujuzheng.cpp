#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            cin>>c;
            if(c!=0)
                cout<<i+1<<' '<<j+1<<' '<<c<<endl;
        }
    }
    return 0;
}