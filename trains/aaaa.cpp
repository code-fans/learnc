#include <iostream>
#include <algorithm>
using namespace std;
int b[1010];
int main()
{
    int a;
    cin>>a;

    for (int i = 0; i < a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    int l=1;
    for (int i = 1; i < a; i++)
    {
        if (b[i]!=b[l-1])
        {
            if(l!=i)
                b[l] = b[i];
            l++;
        }

    }
    cout<<l<<endl;
    for (int i = 0; i < l; i++)
    {
        cout<<b[i]<<' ';
    }
    cout<<endl;
    return 0;
}