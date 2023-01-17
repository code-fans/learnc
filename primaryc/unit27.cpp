#include <iostream>
using namespace std;
int unit27_main()
{

    for (int i=1;i<=20;i++) {
        cout<<i<<' '<<endl;
        if(i%2==0)
            cout<<"丁丁";
        if(i%3==0)
            cout<<"当当";
        if(i%2==0||i%3==0)
            cout<<endl;
    }
    return 0;
}
