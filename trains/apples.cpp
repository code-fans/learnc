#include <iostream>
using namespace std;
int main()
{
    freopen("apples.in","r",stdin);
    freopen("apples.out","w",stdout);
    int n ,m;
    cin>>n>>m;
    if (n+2>=m&&n-2<=m)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}