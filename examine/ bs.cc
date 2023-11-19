#include <iostream>
using namespace std;
int m(int a, int p)
{
    int ans=1;
    for (int i = p; i*i <= a; i++)
    {
        if (a%i==0)
        {
            ans+=m(a/i, i);
        } 
    }
    return ans;
}

int main()
{
    int a,b,ans[1000],j=0;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cin>>b;
        ans[j]=m(b, 2);
        j++;
    }
    for (int i = 0; i < j; i++)
    {
        cout<<ans[i]<<endl;
    }
    
    return 0;
}