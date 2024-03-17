#include <iostream>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    cout<<(n-1+c)%7+1<<endl;
    return 0;
}
/*int main()
{
    int n,a;
    cin>>n>>a;
    for (int i = 1; i <= n; i++){
        if(i%a!=0)
            cout<<i<<endl;
    }
    return 0;
}
*/