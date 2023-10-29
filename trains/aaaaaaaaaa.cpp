#include <iostream>
using namespace std;
int main()
{
    int a, n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a;
            cout<< ((i==j||i+j==n-1) ? a+10 : a) <<' ';
        }
        cout<<endl;
    }
    return 0;
}