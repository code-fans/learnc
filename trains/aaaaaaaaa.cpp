#include <iostream>
using namespace std;
long long folq(int n)
{
    if (n<=3)
    {
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        if(n==3)
            return 4;
    }
    return folq(n-1)+folq(n-2)+folq(n-3);
}
int main()
{
    int n, a;
    cin >> n;
    while(n!=0)
    {
        cout << folq(n) << endl;
        cin>>n;
    }
    return 0;
}